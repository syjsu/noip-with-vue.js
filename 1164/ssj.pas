uses math;
var f:array[0..2000,0..2000] of longint;
    v:array[0..2000] of longint;
    n,i:longint;
function dp(i,j,a:longint):longint;
begin
  if i=j then exit(v[i]*a);
  if f[i,j]>0 then exit(f[i,j])
   else begin f[i,j]:=max(dp(i+1,j,a+1)+v[i]*a,dp(i,j-1,a+1)+v[j]*a);exit(f[i,j]); end;
end;
begin
  readln(n);
  fillchar(f,sizeof(f),0);
  for i:=1 to n do readln(v[i]);
  writeln(dp(1,n,1));
end.