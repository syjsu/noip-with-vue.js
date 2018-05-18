var n,i:longint;
    f:array [1..30] of int64;
begin
  readln(n);
  f[1]:=0; f[2]:=1;
  for i:=3 to n do f[i]:=f[i-1]+f[i-2];
  writeln(f[n]);
end.