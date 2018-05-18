var
  n,o,i,p:longint;
begin
  read(n);
  for i:=1 to n do
  begin
    read(o);
    p:=p+o;
  end;
  writeln(p/n:0:2);
end.