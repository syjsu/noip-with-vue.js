var y,u,n,j,o,i:ansistring;
var m,k,l,p,s,w,x,z,f:longint;
begin
read(n);
l:=length(n);
for m:=1 to l do
begin
o:=copy(n,m,1);
if (o='h') then s:=s+1;
if (o='a') then l:=l+1;
if (o='p') then w:=w+1;
if (o='y') then f:=f+1;
end;
if (s>=1) and (l>=1) and (w>=2) and (f>=1) then write('Yes!')
else write('No!');
end.
