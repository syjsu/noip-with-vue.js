var n,m,i,j,k:longint;
    f:array[0..100,0..100] of int64;
begin
  readln(n,m);
  f[0,0]:=1;
  for j:=1 to m do
    for i:=1 to n do
      for k:=1 to i do
        f[i,j]:=f[i,j]+f[i-k,j-1];
  writeln(f[n,m]);
end.