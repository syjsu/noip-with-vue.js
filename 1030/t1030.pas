var 
  N,i:int64;

begin
  readln(N);
  i:=1;
  while N<>1 do 
    begin
      if N mod 2=0 
        then N:=N div 2 
        else N:=3*N+1;
      inc(i);
    end;
  writeln(i);
end.