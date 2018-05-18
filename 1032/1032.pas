program _1032;
var n,i,j:shortint;
begin
read(n);
for i := 1 to 2*n-1 do
  begin
  for j := 1 to abs(i-n) do
    write(' ');
  for j := 1 to 2*n-1-2*abs(i-n) do
    write(j);
  writeln;
  end;
end.