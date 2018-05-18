uses math;
var r,x,y,z:real;
    p:longint;
begin
  readln(r,x,p);
  y:=(100+r)/100;
  z:=power(y,p);
  writeln(z*x:0:2);
end.