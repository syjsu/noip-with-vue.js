#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<ctime>
#include<string>
#include<cstdlib>
#include<sstream>
//#include<cstdio>
#include<algorithm>
using namespace std;

//��(ȫ�ֱ���)����
int SetX,SetY,SetM,Board[35][35],SFlag[35][35];
bool isDig[35][35];
string Sblock[]=
{
"",
"��",
"��",
"��",
"��",
"��",
"��",
"��",
"��",
"  ",
"��"
};





//�ࣨ�ṹ������************************ 
enum Block
{
B_none=9,
B_Mines=10
};





//��������*******************************
void HideCursor();
void SetColor(int color=BACKGROUND_BLUE|FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
void GotoXY(COORD a);
void GotoXY(int i,int j);
void Game();
void First();
template <class T1,class T2> T2 Conversion(T1 a);
void Game_print();
void cursor(int x,int y,bool t=0);
void message(string a);
bool Digblock(int x,int y);
void PutMines(int x,int y);
void ShowMT(int a=0,bool t=0);
void Flag(int x,int y);
bool TwoE(int x,int y);
bool Win();
bool NewGame();
void Save();

//������
main()
{
system("title �� ɨ�� ��");
system("color 1F");
HideCursor();
First();
while(1)
Game(); 
} 

//�������ã����ع�ꣻ�������ޣ�����ֵ���� 
void HideCursor()
{
CONSOLE_CURSOR_INFO cursor_info = {1,0}; 
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}

//�������ã�������һ��������ɫ��������color ��ɫ��ֵ������ֵ���� 
void SetColor(int color)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

//�������ã��ƶ���꣺������a ���λ�ã�����ֵ���� 
void GotoXY(COORD a)
{
HANDLE t=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(t,a);
}

//�������ã��ƶ���꣺������i ����ڵ�i�� j ����ڵ�j��;����ֵ����
void GotoXY(int i,int j)
{
COORD a={j,i};
GotoXY(a);
}

//�������ã�һ����Ϸ�Ŀ�ʼ���������ޣ�����ֵ���� 
void Game()
{
system(("mode con cols="+Conversion<int,string>(SetY*4+2)+" lines="+Conversion<int,string>(SetX*2+8)).c_str());
system("cls");
Game_print();
int x=SetX/2,y=SetY/2;
cursor(x,y);
bool isfirst=1,isGameover=0,isbegin=0,isWin=0;
ShowMT(0,1);
message("��Ϸ׼����ʼ��");
while(1)
{
int t;
if(kbhit())
{
t=getch();
}
else
{
if(isbegin)
{
ShowMT();
}
continue;
}
if(t==224)
{
t=getch();
if(t!=72&&t!=75&&t!=77&&t!=80) continue;
cursor(x,y,1);
switch(t)
{
case 72:
x--;
if(x<0) x+=SetX;
break;
case 80:
x++;
if(x>=SetX) x=0;
break;
case 75:
y--;
if(y<0) y+=SetY;
break;
case 77:
y++;
if(y>=SetY) y=0;
break;	
}
cursor(x,y);
}
else
{
if(t>='A'&&t<='Z') t+=32;
if(t==119||t==115||t==97||t==100)
{
cursor(x,y,1);
switch(t)
{
case 119:
x--;
if(x<0) x+=SetX;
break;
case 115:
x++;
if(x>=SetX) x=0;
break;
case 97:
y--;
if(y<0) y+=SetY;
break;
case 100:
y++;
if(y>=SetY) y=0;
break;	
}
cursor(x,y);
}
else if(t==27) exit(1);
else if(t==32||t==91||t==113)
{
Sleep(50);
if(kbhit())
{
int p=getch();
if(p==93||p==101)
{
if((isGameover=!TwoE(x,y))==1) break;
if((isWin=Win())==1) break;
while(kbhit()) getch();
continue;
}
}
if(isfirst)
{
isfirst=0;
isbegin=1;
message("��Ϸ�ѿ�ʼ��");
PutMines(x,y);
}
else if((isGameover=!Digblock(x,y))==1) break;
if((isWin=Win())==1) break;
}
else if(t==93||t==101)
{
Sleep(50);
if(kbhit())
{
int p=getch();
if(p==32||p==91||p==113)
{
if((isGameover=!TwoE(x,y))==1) break;
if((isWin=Win())==1) break;
while(kbhit()) getch();
continue;
}
}
isbegin=1;
message("��Ϸ�ѿ�ʼ��");
Flag(x,y);
}
else if(t==110)
{
if(NewGame())
{
return;
}
else
{
system(("mode con cols="+Conversion<int,string>(SetY*4+2)+" lines="+Conversion<int,string>(SetX*2+8)).c_str());
for(int i=0;i<SetX;i++)
for(int j=0;j<SetY;j++)
{
GotoXY(i*2+1,j*4+2);
if(SFlag[i][j]==1)
{
SetColor(BACKGROUND_BLUE|BACKGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"��";
SetColor();
}
else if(SFlag[i][j]==2)
{
SetColor(BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
cout<<"��";
SetColor();
}
else
{
if(!isDig[i][j])
{
cout<<"��";
}
else cout<<Sblock[Board[i][j]];
}
}
cursor(x,y);
GotoXY(SetX*2+1,0);
for(int i=0;i<=SetY*2;i++)
cout<<"��";
if(!isbegin)
{
message("��Ϸ׼����ʼ��");
ShowMT(0,1);
}
else
{
message("��Ϸ�ѿ�ʼ��");
ShowMT(1);
ShowMT(-1);
}
}
}
}
}
cursor(x,y,1);
for(int i=0;i<SetX;i++)
for(int j=0;j<SetY;j++)
{
isDig[i][j]=1;
GotoXY(i*2+1,j*4+2);
if(Board[i][j]==B_Mines)
{
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
cout<<Sblock[B_Mines];
SetColor();
}
else
{
cout<<"��";
}
}
if(isWin)
{
message("��ϲ����Ӯ�ˣ�");
ShowMT(1000);
}
else
{
message("������˼�������ˡ��´����ˣ�");
ShowMT(1000);
} 
system("pause>nul");
}

//�������ã���ʼ���ļ�����ȡ��Ϣ���������ޣ�����ֵ���� 
void First()
{
fstream f1;
f1.open("Mines_set.ini",ios::in|ios::binary);
if(!f1)
{
f1.open("Mines_set.ini",ios::out|ios::binary);
SetX=SetY=9;
SetM=10;
f1.write((char*)&SetX,sizeof(int));
f1.write((char*)&SetY,sizeof(int));
f1.write((char*)&SetM,sizeof(int));
}
else
{
f1.read((char*)&SetX,sizeof(int));
f1.read((char*)&SetY,sizeof(int));
f1.read((char*)&SetM,sizeof(int));
}
f1.close();
f1.open("Mines-Help.txt",ios::out);
f1<<"ɨ�׵Ĺ���"<<endl
<<"	�ڿ����ף���Ϸ���������"<<endl
<<"	�ڿ��շ��飬���Լ����档"<<endl
<<"	�ڿ����֣����ʾ������Χ�İ˸������й��ж��ٸ��ף�����ʹ�ø���Ϣ�ƶ��ܹ���ȫ������������Щ���顣"<<endl<<endl
<<"����������"<<endl
<<"	�ƶ���С���̷�����ơ�������������ĸ WASD ����"<<endl
<<"	�ڷ��飺�ո���������� [ ������ĸ Q ����"<<endl
<<"	��ǣ��ҷ����� ] ������ĸ E ����"<<endl
<<"	�������̴�С��ʼ����Ϸ����ĸ N ����"<<endl
<<"	�˳���Ϸ��ESC����"<<endl<<endl
<<"�����ʶ��"<<endl
<<"	δ�ڿ��ķ��飺����"<<endl
<<"	��ǣ��̺ͣ���"<<endl
<<"	���ף��ѡ�"<<endl
<<"	���֣��٢ڢۢܢݢޢߢ�"<<endl;
f1.close();
}

//�������ã�������T1ת��ΪT2��������a ��ת����T1���ͣ�����ֵ��ת�����T2���� 
template <class T1,class T2> T2 Conversion(T1 a)
{
T2 b;
stringstream stm1;
stm1<<a;
stm1>>b;
return b;
} 

//�������ã���ӡ�ͳ�ʼ�����̣��������ޣ�����ֵ����
void Game_print()
{
for(int i=1;i<=SetX*2;i+=2)
for(int j=2;j<=SetY*4;j+=4)
{
GotoXY(i,j);
cout<<"��";
}
GotoXY(SetX*2+1,0);
for(int i=0;i<=SetY*2;i++)
cout<<"��";
for(int i=0;i<SetX;i++)
for(int j=0;j<SetY;j++)
{
Board[i][j]=B_none;
isDig[i][j]=SFlag[i][j]=0;
}
}

//�������ã���ӡ��ꣻ������x ָ�����ӵ��У�y ָ�����ӵ��У�t ѡ���Ƿ���գ�����ֵ����
void cursor(int x,int y,bool t)
{
if(t)
{
GotoXY(x*2,y*4);
cout<<"  ";
GotoXY(x*2+2,y*4);
cout<<"  ";
GotoXY(x*2,y*4+4);
cout<<"  ";
GotoXY(x*2+2,y*4+4);
cout<<"  ";
}
else
{
GotoXY(x*2,y*4);
cout<<"�X";
GotoXY(x*2+2,y*4);
cout<<"�^";
GotoXY(x*2,y*4+4);
cout<<"�[";
GotoXY(x*2+2,y*4+4);
cout<<"�a";
}
}

//�������ã������Ϣ��������a ��Ϣ������ֵ����
void message(string a)
{
if(!a.length()) return;
SetColor(FOREGROUND_RED|BACKGROUND_BLUE|FOREGROUND_INTENSITY);
GotoXY(SetX*2+2,0);
cout<<"��Ϣ��";
SetColor();
cout<<a<<"������������������������������������   ";
}

//�������ã��ڿ����飻������x ָ���ڿ�λ�õ�X��y ָ���ڿ�λ�õ�Y������ֵ��bool �Ƿ�δ�������Ƿ��ף� 
bool Digblock(int x,int y)
{
if(isDig[x][y]||SFlag[x][y]==1) return true;
isDig[x][y]=1;
if(Board[x][y]==B_Mines) return false;
int cur=0;
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
if(Board[x+i][y+j]==B_Mines) cur++; 
}
if(cur==0) 
{
Board[x][y]=B_none;
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
if((bool)i^(bool)j);
Digblock(x+i,y+j);
}
}
else
{
Board[x][y]=cur;
}
GotoXY(x*2+1,y*4+2);
cout<<Sblock[Board[x][y]];
return true;
} 

//�������ã���ʼ�����ף�������x ��һ���ڿ����У�y ��һ���ڿ����� ������ֵ����
void PutMines(int x,int y)
{
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
Board[x+i][y+j]=B_Mines;
}
srand(time(0));
for(int i=0;i<SetM;i++)
{
int rx,ry;
do
{
rx=rand()%SetX;
ry=rand()%SetY;
}while(Board[rx][ry]!=B_none);
Board[rx][ry]=B_Mines;
}
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
Board[x+i][y+j]=B_none;
}
Digblock(x,y);
}

//�������ã���ʾʣ����׵�������ʱ�䣻������a �±�ǵĵ��׵����� t �Ƿ��ǿ�ʼ�µ�һ�� ������ֵ����
void ShowMT(int a,bool t)
{
static int Mines;
static long long Time,SKTime;
bool isShowTime=1;
if(t)
{
Mines=SetM;
Time=0;
SKTime=clock();
}
else
{
Mines-=a;
if(clock()-SKTime>=1000)
{
Time++;
SKTime=clock();
}
else
{
isShowTime=0;
}
}
if(a||t)
{
SetColor(BACKGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
GotoXY(SetX*2+6,0);	
if(Mines>0)
cout<<"ʣ��������"<<Mines<<"   "<<endl;
else
cout<<"ʣ���������ޡ���"<<endl;
SetColor();
}
if(t||isShowTime)
{
GotoXY(SetX*2+7,0);	
SetColor(BACKGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"����ʱ�䣺";
if(t) cout<<"δ��ʼ";
else
cout<<Time<<"����";
SetColor();
}
}

//�������ã����һ�����飻������x ��Ƿ����X��y ��Ƿ����Y ������ֵ����
void Flag(int x,int y)
{
if(isDig[x][y]) return;
if(SFlag[x][y]==2)
{
SFlag[x][y]=0;
GotoXY(x*2+1,y*4+2);
cout<<"��";
}
else if(SFlag[x][y]==0)
{
ShowMT(1);
SFlag[x][y]=1;
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_BLUE|BACKGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"��";
SetColor();
}
else
{
ShowMT(-1);
SFlag[x][y]=2;
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
cout<<"��";
SetColor();
}
}

//�������ã��������ںͱ�������ʱ���˷����䣻������x ��Ƿ����X��y ��Ƿ����Y ������ֵ���Ƿ�δ���� 
bool TwoE(int x,int y)
{
if(SFlag[x][y]) return true;
if(Board[x][y]>8)
{
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
cout<<"�w";
SetColor();
Sleep(50);
GotoXY(x*2+1,y*4+2);
if(isDig[x][y])
cout<<Sblock[Board[x][y]];
else cout<<"��";
}
else
{
int cur=0;
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
if(SFlag[x+i][y+j]==1) cur++;
}
if(cur==Board[x][y])
{
bool isDie=0;
for(int i=-1;i<=1;i++)
if(x+i>=0&&x+i<SetX)
for(int j=-1;j<=1;j++)
if(y+j>=0&&y+j<SetY)
{
isDie=!Digblock(x+i,y+j);
if(isDie) return false;
}
}
else
{
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
cout<<"�w";
SetColor();
Sleep(50);
GotoXY(x*2+1,y*4+2);
if(isDig[x][y])
cout<<Sblock[Board[x][y]];
else cout<<"��";
}
}
return true;
}

//�������ã��ж��Ƿ�Ӯ�ˣ��������ޣ�����ֵ���Ƿ�Ӯ�� 
bool Win()
{
int cur=0;
for(int i=0;i<SetX;i++)
for(int j=0;j<SetY;j++)
{
if(!isDig[i][j]) cur++;
}
return cur==SetM;
}

//�������ã�N�����º������Ϸ���ã��������ޣ�����ֵ���Ƿ���Ҫ��ʼ����Ϸ 
bool NewGame()
{
const int N=5;
bool isShowCur=1,isSave=0; 
string s;
system("mode con cols=60 lines=20");
system("cls");
GotoXY(2,26);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
cout<<"�� �� �� ��";
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(4,0);
for(int i=0;i<30;i++) cout<<"��";
GotoXY(6,8);
cout<<"������"<<SetX<<"  ";
GotoXY(9,8);
cout<<"������"<<SetY<<"  ";
GotoXY(12,8);
cout<<"������"<<SetM<<"  ";
SetColor(BACKGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
GotoXY(16,14);
cout<<"������Ϸ";
GotoXY(16,42);
cout<<"��ʼ����Ϸ";
int t=0;
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
while(1)
{
if(isShowCur)
{
isShowCur=0;
GotoXY(6,5);
cout<<"  ";
GotoXY(9,5);
cout<<"  ";
GotoXY(12,5);
cout<<"  ";
GotoXY(16,11);
cout<<"  ";
GotoXY(16,39);
cout<<"  ";

GotoXY(6,20);
cout<<"������������������������������������  ";
GotoXY(9,20);
cout<<"������������������������������������  ";
GotoXY(12,20);
cout<<"������������������������������������  ";
GotoXY(14,25);
cout<<"������������������������������������  ";
if(t<=2)
{
GotoXY(t*3+6,5);
cout<<">>";
GotoXY(t*3+6,20);
cout<<"���趨��";
GotoXY(t*3+6,29);
if(t==0)  cout<<"(9~20)";
else if(t==1) cout<<"(9~35)";
else
{
cout<<"(10~630)";
GotoXY(14,25);
cout<<"ע���������ܳ����С�������˵�90��";
}
}
else if(t==3)
{
GotoXY(16,11);
cout<<">>";
}
else
{
GotoXY(16,39);
cout<<">>";
}
}
int p=getch();
if(p==224)
{
p=getch();
if(p==72)
{
t=(t-1+N)%N;
if(t==3&&isSave) t--;
s="";
isShowCur=1;
}
else if(p==80)
{
t=(t+1)%N;
if(t==3&&isSave) t++;
s="";
isShowCur=1;
}
}
else
{
if(p>=65&&p<=90) p+=32;
if(p==119)
{
t=(t-1+N)%N;
if(t==3&&isSave) t--;
s="";
isShowCur=1;
}
else if(p==115)
{
t=(t+1)%N;
if(t==3&&isSave) t++;
s="";
isShowCur=1;
}
else if(p==13||p==32)
{
if(t==3||t==4)
{
SetColor();
return t==4;
}
if(s.length()==0) continue;
if(t==0)
{
if(Conversion<string,int>(s)>=9)
{
SetX=Conversion<string,int>(s);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(6,8);
cout<<"������"<<SetX<<"  ";
if(SetM>SetX*SetY*0.9)
{
SetM=SetX*SetY*0.9;
GotoXY(12,8);
cout<<"������"<<SetM<<"  ";
} 
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"������������";
}
}
else if(t==1)
{
if(Conversion<string,int>(s)>=9)
{
SetY=Conversion<string,int>(s);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(9,8);
cout<<"������"<<SetY<<"  ";
if(SetM>SetX*SetY*0.9)
{
SetM=SetX*SetY*0.9;
GotoXY(12,8);
cout<<"������"<<SetM<<"  ";
} 
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"������������";
}
}
else if(t==2)
{
if(Conversion<string,int>(s)>=10)
{
SetM=Conversion<string,int>(s);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(12,8);
cout<<"������"<<SetM<<"  ";
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"������������";
}
}
}
else if(p>=48&&p<=57)
{
if(p==48&&s.length()==0) continue;
if(t==0)
{
if(Conversion<string,int>(s+(char)p)<=20) s+=(char)p;
}
else if(t==1)
{
if(Conversion<string,int>(s+(char)p)<=35) s+=(char)p;
}
else if(t==2)
{
if(Conversion<string,int>(s+(char)p)<=630&&Conversion<string,int>(s+(char)p)<=SetX*SetY*0.9) s+=(char)p;
}
GotoXY(t*3+6,40);
cout<<s<<"��������  ";
}
else if(p==8)
{
if(s.length()>=1)
{
s.erase(s.begin()+s.length()-1);
GotoXY(t*3+6,40);
cout<<s<<"��������  ";
}
}
else if(p==27)
{
SetColor();
return true;
}
}
}
SetColor();
return true;
}

//�������ã����С��С������������ļ����������ޣ�����ֵ���� 
void Save()
{
fstream f1;
f1.open("Mines_set.ini",ios::out|ios::binary);
f1.write((char*)&SetX,sizeof(int));
f1.write((char*)&SetY,sizeof(int));
f1.write((char*)&SetM,sizeof(int));
f1.close();
}
