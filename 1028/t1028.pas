var 
  m,n,i,Sma:int64;

begin
  readln(m,n);
  if m>=n 
    then Sma:=n
    else Sma:=m;
  i:=0;
  while true do 
    begin
      if i=Sma 
        then break;
      inc(i);
      if (m mod i=0) and 
         (n mod i=0) and 
         (i<>1)
        then begin
               writeln('No');
               halt;
             end;
    end;
  writeln('Yes');
end.