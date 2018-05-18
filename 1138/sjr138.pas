program sjr138;
var a,b,c:array[1..10000]of longint;
var n,n1,x,x1:ansistring;
var p,p1,l,l1,i,t,m,m1,d,k,k1:longint;
begin
readln(n);
read(n1);
l:=length(n);
l1:=length(n1);
for m:=l downto 1 do
begin
x:=copy(n,m,1);
p:=p+1;
val(x,a[p]);
end;
for m1:=l1 downto 1 do
begin
x1:=copy(n1,m1,1);
p1:=p1+1;
val(x1,b[p1]);
end;
if (l>l1) then t:=l
else t:=l1;
for i:=1 to t do
begin
c[i]:=a[i]+b[i]+d;
d:=c[i] div 10;
c[i]:=c[i] mod 10;
end;
if (d<>0) then
begin
t:=t+1;
c[t]:=d;
end;
for k1:=t downto 1 do
begin
write(c[k1]);
end;
end.
