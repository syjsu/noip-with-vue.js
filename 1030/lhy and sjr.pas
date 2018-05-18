var s,j,r:int64;
var l,h,y:real;
begin
read(s);
r:=1;
while (s<>1) do
begin
if s mod 2=0 then s:=s div 2
else s:=s*3+1;
inc(r);
end;
write(r);
end.