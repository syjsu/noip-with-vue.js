var n,a,b,c,s:longint;
begin
read(n);
for a:=0 to n div 10 do
for b:=0 to n div 20 do
for c:=0 to n div 50 do
begin
if (a*10+b*20+c*50=n) then s:=s+1;
end;
write(s);
end.