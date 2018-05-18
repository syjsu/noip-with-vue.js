var
  i,n:int64;
begin
  readln(n);
  i:=1;
  while n<>1 do
    begin
      if odd(n) then n:=n*3+1
                else n:=n div 2;
      inc(i);
    end;
  write(i);
end.