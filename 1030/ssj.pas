var n,t:int64;
begin
  readln(n);
  t:=1;
  while n<>1 do
    begin
      if n mod 2=0 then n:=n shr 1
       else n:=3*n+1;
      inc(t);
    end;
  writeln(t);
end.