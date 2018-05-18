var n,i,j,x,y:byte;
    a:array[byte,byte]of 0..1;
begin
  read(n);
  for i:=1 to n do
   for j:=1 to n do begin
    read(a[i,j]);
    a[i,0]:=(a[i,0]+a[i,j]) mod 2;
    a[0,j]:=(a[0,j]+a[i,j]) mod 2;
   end;
  for i:=1 to n do
   if odd(a[i,0]) then begin
    if x>0 then begin
     write('Corrupt');
     halt;
    end;
    x:=i;
  end;
  for j:=1 to n do
   if odd(a[0,j]) then begin
    if y>1 then begin
     write('Corrupt');
     halt;
    end;
    y:=j;
  end;
  if(x=0)and(y=0)then write('OK')
   else if(x>0)and(y>0)then write(x,' ',y)
    else write('Corrupt');
end.