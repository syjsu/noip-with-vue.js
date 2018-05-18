var 
  n,i:integer;
  f: array [1..30] of longint;

begin
  f[1]:=0; f[2]:=1;
  for i:=3 to 30 do 
    f[i]:=f[i-1]+f[i-2];
  readln(n);
  writeln(f[n]);
end.