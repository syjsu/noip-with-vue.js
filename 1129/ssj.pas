const dx:array[1..4] of integer=(0,0,1,-1);
      dy:array[1..4] of integer=(1,-1,0,0);
var map:array[0..100,0..100] of char;
    qx,qy:array[0..1000] of longint;
    n,m,ans,i,j:longint;
procedure bfs(x,y:longint);
var closed,open,tx,ty,r:longint;
begin
  closed:=0;open:=1;
  map[x,y]:='0';
  qx[open]:=x;qy[open]:=y;
	repeat
    inc(closed);
    tx:=qx[closed];ty:=qy[closed];
    for r:=1 to 4 do
      begin
        x:=tx+dx[r];y:=ty+dy[r];
        if map[x,y]='0' then continue;
        map[x,y]:='0';
        inc(open);
        qx[open]:=x;qy[open]:=y;
      end;
  until closed>=open;
end;
begin
  fillchar(map,sizeof(map),'0');
  readln(n,m);
  ans:=0;
  for i:=1 to n do
    begin
      for j:=1 to m do read(map[i,j]);
      readln;
    end;
  for i:=1 to n do
    for j:=1 to m do
      if map[i,j]<>'0' then
        begin
          bfs(i,j);
          inc(ans);
        end;
  writeln(ans);
end.