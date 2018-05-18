var c:array[0..2000,1..26]of 0..26000;
    n,i,j,max:0..2000; ch:char;
begin
  readln(n);
  for i:=1 to n do begin
   while not(eoln) do begin
    read(ch);
    inc(c[i,ord(ch)-96]);
   end;
   readln;
  end;
  for i:=1 to n do begin
   j:=1;
   while c[max,j]=c[i,j] do inc(j);
   if(c[max,j]<c[i,j])and(j<27)then max:=i;
  end;
  for i:=1 to 26 do
   for j:=1 to c[max,i] do write(chr(i+96));
end.