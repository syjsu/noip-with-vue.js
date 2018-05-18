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

//宏(全局变量)定义
int SetX,SetY,SetM,Board[35][35],SFlag[35][35];
bool isDig[35][35];
string Sblock[]=
{
"",
"①",
"②",
"③",
"④",
"⑤",
"⑥",
"⑦",
"⑧",
"  ",
"⊙"
};





//类（结构）定义************************ 
enum Block
{
B_none=9,
B_Mines=10
};





//函数声明*******************************
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

//主程序
main()
{
system("title § 扫雷 §");
system("color 1F");
HideCursor();
First();
while(1)
Game(); 
} 

//函数作用：隐藏光标；参数：无；返回值：空 
void HideCursor()
{
CONSOLE_CURSOR_INFO cursor_info = {1,0}; 
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}

//函数作用：设置下一次字体颜色：参数：color 颜色的值；返回值：空 
void SetColor(int color)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

//函数作用：移动光标：参数：a 光标位置；返回值：空 
void GotoXY(COORD a)
{
HANDLE t=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(t,a);
}

//函数作用：移动光标：参数：i 光标在第i行 j 光标在第j列;返回值：空
void GotoXY(int i,int j)
{
COORD a={j,i};
GotoXY(a);
}

//函数作用：一次游戏的开始；参数：无；返回值：空 
void Game()
{
system(("mode con cols="+Conversion<int,string>(SetY*4+2)+" lines="+Conversion<int,string>(SetX*2+8)).c_str());
system("cls");
Game_print();
int x=SetX/2,y=SetY/2;
cursor(x,y);
bool isfirst=1,isGameover=0,isbegin=0,isWin=0;
ShowMT(0,1);
message("游戏准备开始。");
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
message("游戏已开始！");
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
message("游戏已开始！");
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
cout<<"√";
SetColor();
}
else if(SFlag[i][j]==2)
{
SetColor(BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
cout<<"？";
SetColor();
}
else
{
if(!isDig[i][j])
{
cout<<"■";
}
else cout<<Sblock[Board[i][j]];
}
}
cursor(x,y);
GotoXY(SetX*2+1,0);
for(int i=0;i<=SetY*2;i++)
cout<<"━";
if(!isbegin)
{
message("游戏准备开始。");
ShowMT(0,1);
}
else
{
message("游戏已开始！");
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
cout<<"■";
}
}
if(isWin)
{
message("恭喜！你赢了！");
ShowMT(1000);
}
else
{
message("不好意思，你输了。下次走运！");
ShowMT(1000);
} 
system("pause>nul");
}

//函数作用：初始化文件、读取信息；参数：无；返回值：空 
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
f1<<"扫雷的规则："<<endl
<<"	挖开地雷，游戏即告结束。"<<endl
<<"	挖开空方块，可以继续玩。"<<endl
<<"	挖开数字，则表示在其周围的八个方块中共有多少个雷，可以使用该信息推断能够安全单击附近的哪些方块。"<<endl<<endl
<<"操作方法："<<endl
<<"	移动：小键盘方向控制↑↓←→键或字母 WASD 键。"<<endl
<<"	挖方块：空格键、左方括号 [ 键或字母 Q 键。"<<endl
<<"	标记：右方括号 ] 键或字母 E 键。"<<endl
<<"	更改棋盘大小或开始新游戏：字母 N 键。"<<endl
<<"	退出游戏：ESC键。"<<endl<<endl
<<"方块标识："<<endl
<<"	未挖开的方块：■。"<<endl
<<"	标记：√和？。"<<endl
<<"	地雷：⊙。"<<endl
<<"	数字：①②③④⑤⑥⑦⑧"<<endl;
f1.close();
}

//函数作用：将类型T1转换为T2；参数：a 需转换的T1类型；返回值：转换后的T2类型 
template <class T1,class T2> T2 Conversion(T1 a)
{
T2 b;
stringstream stm1;
stm1<<a;
stm1>>b;
return b;
} 

//函数作用：打印和初始化棋盘；参数：无；返回值：空
void Game_print()
{
for(int i=1;i<=SetX*2;i+=2)
for(int j=2;j<=SetY*4;j+=4)
{
GotoXY(i,j);
cout<<"■";
}
GotoXY(SetX*2+1,0);
for(int i=0;i<=SetY*2;i++)
cout<<"━";
for(int i=0;i<SetX;i++)
for(int j=0;j<SetY;j++)
{
Board[i][j]=B_none;
isDig[i][j]=SFlag[i][j]=0;
}
}

//函数作用：打印光标；参数：x 指向棋子的行，y 指向棋子的列，t 选择是否清空；返回值：空
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
cout<<"╔";
GotoXY(x*2+2,y*4);
cout<<"╚";
GotoXY(x*2,y*4+4);
cout<<"╗";
GotoXY(x*2+2,y*4+4);
cout<<"╝";
}
}

//函数作用：输出消息；参数：a 消息；返回值：空
void message(string a)
{
if(!a.length()) return;
SetColor(FOREGROUND_RED|BACKGROUND_BLUE|FOREGROUND_INTENSITY);
GotoXY(SetX*2+2,0);
cout<<"消息：";
SetColor();
cout<<a<<"　　　　　　　　　　　　　　　　　　   ";
}

//函数作用：挖开方块；参数：x 指向挖开位置的X，y 指向挖开位置的Y；返回值：bool 是否未死亡（是否触雷） 
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

//函数作用：初始化地雷；参数：x 第一次挖开的行，y 第一次挖开的列 ；返回值：空
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

//函数作用：显示剩余的雷的数量和时间；参数：a 新标记的地雷的数量 t 是否是开始新的一局 ；返回值：空
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
cout<<"剩余雷数："<<Mines<<"   "<<endl;
else
cout<<"剩余雷数：无　　"<<endl;
SetColor();
}
if(t||isShowTime)
{
GotoXY(SetX*2+7,0);	
SetColor(BACKGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"所用时间：";
if(t) cout<<"未开始";
else
cout<<Time<<"　　";
SetColor();
}
}

//函数作用：标记一个方块；参数：x 标记方块的X，y 标记方块的Y ；返回值：空
void Flag(int x,int y)
{
if(isDig[x][y]) return;
if(SFlag[x][y]==2)
{
SFlag[x][y]=0;
GotoXY(x*2+1,y*4+2);
cout<<"■";
}
else if(SFlag[x][y]==0)
{
ShowMT(1);
SFlag[x][y]=1;
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_BLUE|BACKGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"√";
SetColor();
}
else
{
ShowMT(-1);
SFlag[x][y]=2;
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
cout<<"？";
SetColor();
}
}

//函数作用：当按下挖和标两个键时，八方扩充；参数：x 标记方块的X，y 标记方块的Y ；返回值：是否未死亡 
bool TwoE(int x,int y)
{
if(SFlag[x][y]) return true;
if(Board[x][y]>8)
{
GotoXY(x*2+1,y*4+2);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
cout<<"╳";
SetColor();
Sleep(50);
GotoXY(x*2+1,y*4+2);
if(isDig[x][y])
cout<<Sblock[Board[x][y]];
else cout<<"■";
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
cout<<"╳";
SetColor();
Sleep(50);
GotoXY(x*2+1,y*4+2);
if(isDig[x][y])
cout<<Sblock[Board[x][y]];
else cout<<"■";
}
}
return true;
}

//函数作用：判断是否赢了；参数：无；返回值：是否赢了 
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

//函数作用：N键按下后调整游戏设置；参数：无；返回值：是否需要开始新游戏 
bool NewGame()
{
const int N=5;
bool isShowCur=1,isSave=0; 
string s;
system("mode con cols=60 lines=20");
system("cls");
GotoXY(2,26);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
cout<<"修 改 棋 盘";
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(4,0);
for(int i=0;i<30;i++) cout<<"━";
GotoXY(6,8);
cout<<"行数："<<SetX<<"  ";
GotoXY(9,8);
cout<<"列数："<<SetY<<"  ";
GotoXY(12,8);
cout<<"雷数："<<SetM<<"  ";
SetColor(BACKGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
GotoXY(16,14);
cout<<"返回游戏";
GotoXY(16,42);
cout<<"开始新游戏";
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
cout<<"　　　　　　　　　　　　　　　　　　  ";
GotoXY(9,20);
cout<<"　　　　　　　　　　　　　　　　　　  ";
GotoXY(12,20);
cout<<"　　　　　　　　　　　　　　　　　　  ";
GotoXY(14,25);
cout<<"　　　　　　　　　　　　　　　　　　  ";
if(t<=2)
{
GotoXY(t*3+6,5);
cout<<">>";
GotoXY(t*3+6,20);
cout<<"新设定：";
GotoXY(t*3+6,29);
if(t==0)  cout<<"(9~20)";
else if(t==1) cout<<"(9~35)";
else
{
cout<<"(10~630)";
GotoXY(14,25);
cout<<"注：雷数不能超过行、列数相乘的90％";
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
cout<<"行数："<<SetX<<"  ";
if(SetM>SetX*SetY*0.9)
{
SetM=SetX*SetY*0.9;
GotoXY(12,8);
cout<<"雷数："<<SetM<<"  ";
} 
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"　　　　　　";
}
}
else if(t==1)
{
if(Conversion<string,int>(s)>=9)
{
SetY=Conversion<string,int>(s);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(9,8);
cout<<"列数："<<SetY<<"  ";
if(SetM>SetX*SetY*0.9)
{
SetM=SetX*SetY*0.9;
GotoXY(12,8);
cout<<"雷数："<<SetM<<"  ";
} 
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"　　　　　　";
}
}
else if(t==2)
{
if(Conversion<string,int>(s)>=10)
{
SetM=Conversion<string,int>(s);
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
GotoXY(12,8);
cout<<"雷数："<<SetM<<"  ";
SetColor(BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
Save();
isSave=1;
s="";
GotoXY(t*3+6,40);
cout<<"　　　　　　";
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
cout<<s<<"　　　　  ";
}
else if(p==8)
{
if(s.length()>=1)
{
s.erase(s.begin()+s.length()-1);
GotoXY(t*3+6,40);
cout<<s<<"　　　　  ";
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

//函数作用：将行、列、雷数保存至文件；参数：无；返回值：空 
void Save()
{
fstream f1;
f1.open("Mines_set.ini",ios::out|ios::binary);
f1.write((char*)&SetX,sizeof(int));
f1.write((char*)&SetY,sizeof(int));
f1.write((char*)&SetM,sizeof(int));
f1.close();
}
