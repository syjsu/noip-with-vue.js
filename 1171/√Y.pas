var n,m,i,j,x,y:byte;
    a:array[byte,byte]of boolean;
function ss(x,y:byte):longint;
begin
  ss:=0;
  if x=n then exit(1);
  if a[x,y] then exit(ss(x+1,y)+ss(x+1,y+1));
end;
begin
  read(n,m);
  fillchar(a,sizeof(a),false);
  for i:=1 to n do
   for j:=1 to i do a[i,j]:=true;
  for i:=1 to m do begin
   read(x,y);
   a[x,y]:=false;
  end;
  write(ss(1,1));
end.