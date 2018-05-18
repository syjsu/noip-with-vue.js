var
  i,n,s,t:integer;
begin
  readln(n);
  s:=0;
  for i:=1 to n do
    begin
      readln(t);
      s:=s+t;
    end;
  write(s/n:0:2);
end.