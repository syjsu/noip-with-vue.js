var n,t,i,j:longint;
    f:array[0..10000] of longint;
    v,w:array[1..100] of longint;
begin
  fillchar(f,sizeof(f),0);
  readln(n,t);
  for i:=1 to t do readln(w[i],v[i]);
  for i:=1 to t do
    for j:=n downto w[i] do
      if (j-w[i]>=0) and (f[j]<f[j-w[i]]+v[i]) then f[j]:=f[j-w[i]]+v[i];
  writeln(f[n]);
end.