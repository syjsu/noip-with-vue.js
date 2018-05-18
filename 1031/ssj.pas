var n,i,j,x:longint;
begin
  readln(n);
  x:=1;
	for i:=1 to n do
    begin
      for j:=1 to n-i do write(' ');
      for j:=1 to x do write('*');
      writeln;
      inc(x,2);
    end;
end.