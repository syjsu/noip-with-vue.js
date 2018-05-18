const maxn=100;
      maxm=100;
 	  dx:array[1..4] of longint=(0,1,0,-1);
      dy:array[1..4] of longint=(1,0,-1,0);
var map:array[0..maxn+1,0..maxm+1] of char;
    qx,qy:array[1..maxn*maxm]of byte;
    n,m,i,j,f,r,count:word;
    yuzhechuan:char;
procedure floodfill(x,y:word);
var i:word;
begin
  f:=0;r:=1;qx[1]:=x;qy[1]:=y;
  map[x,y]:='0';
  repeat
    inc(f);
    for i:=1 to 4 do
       if map[qx[f]+dx[i],qy[f]+dy[i]] in ['1'..'9'] then
    begin
      inc(r);
      qx[r]:=qx[f]+dx[i];
      qy[r]:=qy[f]+dy[i];
      map[qx[r],qy[r]]:='0';
    end;
  until f>=r;
end;
begin
  read(n,m);
  for i:=1 to n do
    begin
      readln;
      for j:=1 to m do
        begin read(map[i,j]); read(yuzhechuan);end;
    end;
  for i:=1 to n do
    for j:=1 to m do
      if map[i,j] in ['1'..'9'] then
        begin
          inc(count);
          floodfill(i,j);
        end;
  writeln(count);
end.