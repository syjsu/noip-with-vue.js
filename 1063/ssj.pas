var ans:int64;
    i,m,n:longint;
begin
  readln(n,m);
  ans:=1;
  for i:=n downto n-m+1 do ans:=ans*i;
  for i:=m downto 1 do ans:=ans div i;
  writeln(ans);
end.