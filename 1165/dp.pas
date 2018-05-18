var
  n,m,r,c,max,i,j:longint;
  a,s,h,ans:array[1..1000,1..1000] of longint;
begin
  readln(n,m,r,c);
  max:=0;
  for i:=1 to n do
    for j:=1 to m do
      begin
        read(a[i,j]);
        if i<=r
          then s[i,j]:=s[i-1,j]+a[i,j]
          else s[i,j]:=s[i-1,j]+a[i,j]-a[i-r,j];
        if j<=c
          then h[i,j]:=h[i,j-1]+a[i,j]
          else h[i,j]:=h[i,j-1]+a[i,j]-a[i,j-c];
        ans[i,j]:=ans[i-1,j]+h[i,j];
        if i>r then dec(ans[i,j],h[i-r,j]);
        if ans[i,j]>max then max:=ans[i,j];
      end;

  writeln(max);
end.