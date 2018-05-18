var
  x:real;
begin
  readln(x);
  if (x>=0)and(x<5) then write(x+2.5:0:3);
  if (x>=5)and(x<10) then write(2-1.5*(x-3)*(x-3):0:3);
  if (x>=10)and(x<20) then write(x/2-1.5:0:3);
end.