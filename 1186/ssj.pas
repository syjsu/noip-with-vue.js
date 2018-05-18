var f:array[0..1000,0..1000] of int64;
    n,m:longint;
function dt(a,b:longint):int64;
var i:longint;
    s:int64;
begin
  if b=1 then exit(1);
  if f[a,b]>0 then exit(f[a,b]);
  s:=0;
  for i:=0 to a do s:=s+dt(a-i,b-1);
  f[a,b]:=s;
  exit(s);
end;
begin
  fillchar(f,sizeof(f),0);
  readln(n,m);
  writeln(dt(n,m));
end.