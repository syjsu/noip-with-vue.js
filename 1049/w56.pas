program noi1049;
var a:array[1..100,1..100] of integer;
    n,m,i,j:integer;
begin
    read(n,m);
    for i:=1 to n do
    for j:=1 to m do
    read(a[i,j]);
    for j:=1 to m do
    begin
    for i:=n downto 1 do
    write(a[i,j],' ');
    writeln();
    end;
end.



