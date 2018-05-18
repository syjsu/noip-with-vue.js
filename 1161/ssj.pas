uses math;
var t,f:array[0..2500] of longint;
    m,n,i,j:longint;
begin
  readln(n,m);
  fillchar(f,sizeof(f),0);
  f[0]:=m;
  for i:=1 to n do
    begin
      readln(t[i]);
      f[i]:=f[i-1]+t[i];
    end;
  for i:=2 to n do
    for j:=1 to i do
      f[i]:=min(f[i],f[j]+f[i-j]+m); 
  writeln(f[n]);
end.

//运送i头奶牛去对面的最少时间：直接运送或先运j头最少时间，再运i-j头，加上人回来的时间m