uses math;
var n,t,i,j:longint;
    w,v:array[0..100] of longint;
    f:array[0..10000] of longint;
begin
  fillchar(f,sizeof(f),0);
  readln(n,t);
  for i:=1 to t do readln(w[i],v[i]);
  for i:=1 to t do
    for j:=w[i] to n do
      f[j]:=max(f[j],f[j-w[i]]+v[i]);
  writeln(f[n]);
end.