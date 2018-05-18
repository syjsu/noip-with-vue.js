program lx;
var i,j,k,n:longint;
begin
  j:=0;
  read(n);
  k:=trunc(sqrt(n));
  for i:=1 to k do
  if n mod i=0 then  if i*i<>n then
  j:=j+2
  else
  j:=j+1;
  write(j);
end.