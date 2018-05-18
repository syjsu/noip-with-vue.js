var r,i,j:word;
    a:array[0..1500,0..1500]of longint;
begin
  fillchar(a,sizeof(a),0);
  read(r);
  for i:=1 to r do
   for j:=1 to i do begin
    read(a[i,j]);
    if a[i-1,j-1]>a[i-1,j] then inc(a[i,j],a[i-1,j-1])
     else inc(a[i,j],a[i-1,j]);
   end;
  for i:=1 to r do
   if a[r,i]>a[0,0] then a[0,0]:=a[r,i];
  write(a[0,0]);
end.