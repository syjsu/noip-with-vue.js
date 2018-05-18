var r,x,y:real; i,p:integer;
begin
  y:=1;
  read(r,x,p);
  for i:=1 to p do y:=y*(1+r/100);
  write(y*x:0:2);
end.