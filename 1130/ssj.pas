const maxn=3000;
var data:array[0..maxn,1..2] of longint;
    map,temp:array[0..maxn,0..maxn] of longint;
    father:array[0..maxn] of longint;
    n,m,k,num:longint;

procedure link(x,y:longint);
begin
  inc(map[x,0]);
  map[x,map[x,0]]:=y;
end;
procedure init;
var x,y,i:longint;
begin
  readln(n,m,k);
  for i:=1 to m do
    begin
      readln(x,y);
      link(x,y);link(y,x);
    end;
  for i:=1 to k do
    begin
      readln(x,y,num);
      temp[x,y]:=num;
    end;
  if n=1 then
    begin
      writeln(0);
      halt;
    end;
end;
procedure print(open:longint);
begin
  writeln(data[open,2]);
  halt;
end;
procedure bfs;
var closed,open,i:longint;
begin
  closed:=0;open:=1;
  data[open,1]:=1;data[open,2]:=0;father[open]:=0;
  repeat
    inc(closed);
    num:=data[closed,1];
    for i:=1 to map[num,0] do
      if temp[data[father[closed],1],num]<>map[num,i] then
        begin
          inc(open);
          father[open]:=closed;
          data[open,1]:=map[num,i];
          data[open,2]:=data[closed,2]+1;
          if data[open,1]=n then print(open);
        end;
  until closed>=open;
end;
begin
  init;
  bfs;
end.