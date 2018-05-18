var p,s,a,b,c:real;
begin
  read(a,b,c);
  p:=a+b+c;
  p:=p/2;
  s:=sqrt(p*(p-a)*(p-c)*(p-b));
  writeln(s:0:4);
end.

