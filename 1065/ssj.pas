var n,m:longint;
function lcm(a,b:longint):longint;
var t:longint;
begin
  if a<b then begin t:=a;a:=b;b:=t; end;
  lcm:=a;
  while lcm mod b>0 do inc(lcm,a);
end;
begin
  readln(n,m);
  writeln(lcm(n,m));
end.