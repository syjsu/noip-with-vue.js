var a:array[1..1000,1..1000]of integer;
    i,j,n,B:integer;
begin
 for i:=1 to 4 do
  for j:=1 to 4 do
  read(a[i,j]);
  N:=A[1,1]+A[2,2]+A[3,3]+A[4,4];
  B:=A[1,4]+A[2,3]+A[3,2]+A[4,1];
  WRITE(N,' ',B);
end.