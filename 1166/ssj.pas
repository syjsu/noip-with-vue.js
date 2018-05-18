const move:array[1..4,1..2] of longint=((1,0),(0,1),(-1,0),(0,-1));
var n,m,px,py,hx,hy,l,r,x:longint;
    d:array[0..1000000,1..3] of longint;
    monster:array[0..1000000,1..2] of longint;
    map:array[0..501,0..501] of char;
    data:array[0..1000,0..1000] of longint;
    judge:array[0..1000,0..1000] of boolean;
procedure init;
var i,j:longint;
begin
  fillchar(data,sizeof(data),$7f);
  fillchar(monster,sizeof(monster),0);
  readln(n,m);
  for i:=1 to n do
    begin
      for j:=1 to m do
        begin
          read(map[i,j]);
          if map[i,j]='+' then
            begin
              inc(monster[0,1]);
              monster[monster[0,1],1]:=i;monster[monster[0,1],2]:=j;
            end;
          if map[i,j]='J' then
            begin
              hx:=i;hy:=j;
            end;
          if map[i,j]='V' then
            begin
              px:=i;py:=j;
            end;
        end;
      readln;
    end;
end;
procedure work;
var i,j,k,x,y:longint;  
begin
  fillchar(judge,sizeof(judge),false);
  fillchar(d,sizeof(d),0);
  for i:=1 to monster[0,1] do
    begin
      d[i,1]:=monster[i,1];d[i,2]:=monster[i,2];
      judge[d[i,1],d[i,2]]:=true;
      data[d[i,1],d[i,2]]:=0;
    end;
  i:=0;j:=monster[0,1];
  while i<j do
    begin
      inc(i);
      for k:=1 to 4 do
        begin
          x:=d[i,1]+move[k,1];y:=d[i,2]+move[k,2];
          if not judge[x,y] then
            if (x>0) and (x<=n) and (y>0) and (y<=m) then
              begin
                inc(j);
                d[j,1]:=x;d[j,2]:=y;d[j,3]:=d[i,3]+1;
                data[x,y]:=d[j,3];
                judge[x,y]:=true;
              end;
        end;
    end;
end;
function prepare(t:longint):boolean;
var i,j,k,x,y:longint;
begin
  fillchar(judge,sizeof(judge),false);
  fillchar(d,sizeof(d),0);
  i:=0;j:=1;
  d[1,1]:=px;d[1,2]:=py;
  judge[px,py]:=true;
  while i<j do
    begin
      inc(i);
      for k:=1 to 4 do
        begin
          x:=d[i,1]+move[k,1];y:=d[i,2]+move[k,2];
          if (x=hx) and (y=hy) then exit(true);
          if not judge[x,y] then
            if (x>0) and (x<=n) and (y>0) and (y<=m) and (data[x,y]>=t) then
              begin
                inc(j);
                d[j,1]:=x;d[j,2]:=y;
                judge[x,y]:=true;
              end;
        end;
    end;
  exit(false);
end;
begin
  init; 
  work;
  l:=0;r:=data[px,py];  
  while l<=r do
    begin
      x:=(l+r) shr 1;
      if prepare(x) then l:=x+1
       else r:=x-1;
    end;
  writeln(l-1);
end.
//http://blog.csdn.net/chenzhongyan2015/article/details/52015943