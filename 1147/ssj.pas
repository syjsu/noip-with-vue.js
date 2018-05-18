uses math;
var a,b:ansistring;
    i,j:longint;
    f:array[0..5000,0..5000] of longint;
begin
  readln(a);readln(b);
  fillchar(f,sizeof(f),0);
  for i:=1 to length(a) do
    for j:=1 to length(b) do
      if a[i]=b[j] then f[i,j]:=f[i-1,j-1]+1
       else f[i,j]:=max(f[i-1,j],f[i,j-1]);
  writeln(f[length(a),length(b)]);
end.