program x;
var i,j,k,n,m:longint;
a:array[1..10]of longint;
s:real;
begin
  n:=0;
  for i:=1 to 10 do
  read(a[i]);
  for i:=1 to 9 do
  for j:=i+1 to 10 do
  if a[i]<a[j]then
  begin
    k:=a[i];
    a[i]:=a[j];
    a[j]:=k;
  end;
  for m:=2 to 9 do
  n:=n+a[m];
  s:=n/8;
  write(s:0:3);
end.