var 
  A,B,r:int64;

begin
  readln(A,B);
  while B<>0 do 
    begin
      r:=A mod B;
      A:=B;
      B:=r;
    end;
  if A=1 
    then writeln('Yes')
    else writeln('No');
end.