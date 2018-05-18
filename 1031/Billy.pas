var
  n,i,j:integer;
begin
  readln(n);
  for i:=1 to n do
  begin
    for j:=1 to n-i do
      write(' ');
    for j:=1 to i*2-1 do
      write('*');
    for j:=1 to n-i do
      write(' ');
    writeln;
  end;
end.