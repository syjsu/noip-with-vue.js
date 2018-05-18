var e,n,c,k:string;
var s,h,m,r,l:longint;
begin
read(n);
k:=copy(n,1,1);
s:=0;
if (k>='0') and (k<='9') then write('no')
else
begin
for h:=1 to length(n) do
begin
c:=copy(n,h,1);
if (c>='A') and (c<='Z') or (c>='a') and (c<='z') or (c>='0') and (c<='9') or (c='_') then r:=r+1;
end;
if (length(n)=r) then write('yes')
else write('no');
end;
end.
