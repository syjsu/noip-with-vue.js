var n,a:string;
var x,o,p,l,s,v,k,m:longint;
begin
read(n);
l:=length(n);
for m:=1 to l do
begin
x:=pos('+',n);
a:=copy(n,1,x-1);
val(a,o);
k:=k+o;
delete(n,1,x);
end;
val(n,m);
write(k+m);
end.
