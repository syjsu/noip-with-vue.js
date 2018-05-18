var a,b,c,i:0..1000;
begin
  read(i);
  a:=i div 100;
  b:=i div 10 mod 10;
  c:=i mod 10;
  if i=a*a*a+b*b*b+c*c*c then write('YES')
   else write('NO');
end.