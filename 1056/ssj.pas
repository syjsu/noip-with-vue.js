var p,q,r,jz:longint;
function f(num,jz:longint):longint;
var k,t:longint;
begin
  t:=0;k:=1;
  while num>0 do
    begin
      if num mod 10>=jz then exit(-10);
      t:=t+num mod 10*k;
      num:=num div 10;
      k:=k*jz;
    end;
  exit(t);
end;
begin
  readln(p,q,r);
  for jz:=2 to 17 do
    if f(p,jz)*f(q,jz)=f(r,jz) then break;
  if jz=17 then jz:=0;
  writeln(jz);
end.