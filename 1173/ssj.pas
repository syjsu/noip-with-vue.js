var c:array[0..1000,0..1000] of longint;
    n,x,y,i,j:longint;
begin
  for i:=0 to 1000 do
    begin
      c[i,0]:=1;
      for j:=1 to i do
        c[i,j]:=(c[i-1,j-1]+c[i-1,j]) mod 10007;
    end;
  readln(n);
  for i:=1 to n do
    begin
      readln(x,y);
      writeln(c[x,y]);
    end;
end.