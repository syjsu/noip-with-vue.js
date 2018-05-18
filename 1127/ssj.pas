var father,family:array[1..100000] of longint;
    i,n,k,a,b,total,max:longint;
procedure init;
var i:longint;
begin
  readln(n,k);
  for i:=1 to n do
    begin
      father[i]:=i; //所有节点的父节点初始化为本身
      family[i]:=1; //初始化1人1家庭
    end;
end;
function get_father(m:longint):longint;
begin
  if father[m]=m then exit(m)
   else get_father:=get_father(father[m]);
end;
procedure together(a,b:longint);
begin
  a:=get_father(a);b:=get_father(b);
  family[b]:=family[b]+family[a];
  father[a]:=b;
end;
begin
  init;
  for i:=1 to k do
    begin
      readln(a,b);
      if get_father(a)<>get_father(b) then together(a,b);
    end;
  max:=0;total:=0;
  for i:=1 to n do
    begin
      if father[i]=i then
        begin
          inc(total);
          if family[i]>max then max:=family[i];
        end;
    end;
  writeln(total,' ',max);
end.