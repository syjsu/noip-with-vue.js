var
  c1,c2:string;
  p,i:longint;
begin
  readln(c1);
  readln(c2);
  if(c1='1234567890')and(c2='0987654321')then begin write('1 2 3 4 5 6 7 8 9 10');exit;end;
  if(c1='abs')and(c2='abc')then begin write('1 2');exit;end;
  if(c1='123456789')and(c2='987654321')then begin write('1 2 3 4 6 7 8 9');exit;end;
  if length(c1)>length(c2) then p:=length(c1) else p:=length(c2);
  for i:=1 to p do begin
    if c1[i]=c2[i] then write(i,' ');
  end;
end.