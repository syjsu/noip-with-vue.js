var
  a:array[1..100]of longint;
  n,i:integer;
begin
  read(n);
  a[1]:=1;
  a[2]:=1;
  for i:=3 to n do
    a[i]:=a[i-1]+a[i-2];
  write(a[n]);
end.