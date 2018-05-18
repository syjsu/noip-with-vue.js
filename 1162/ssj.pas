var size:array[1..300,1..3] of longint;
    f:array[1..300] of longint;
    max,i,n,m,t:longint;
function dp(k:longint):longint;
var i,max:longint;
begin
  if f[k]=0 then
    begin
      max:=0;
      for i:=1 to m do
        if (size[k,1]>size[i,1]) and (size[k,2]>size[i,2]) and (max<dp(i)) then max:=dp(i);
      f[k]:=max+size[k,3];
    end;
  dp:=f[k];
end;
begin
  readln(n);
  for i:=1 to n do readln(size[i,1],size[i,2],size[i,3]);
  m:=n;
  for i:=1 to n do
    begin
      inc(m);
      size[m,1]:=size[i,2];size[m,2]:=size[i,3];size[m,3]:=size[i,1];
      inc(m);
      size[m,1]:=size[i,3];size[m,2]:=size[i,1];size[m,3]:=size[i,2];
    end;
  for i:=1 to m do
    if size[i,1]>size[i,2] then
      begin
        t:=size[i,1];size[i,1]:=size[i,2];size[i,2]:=t;
      end;
  fillchar(f,sizeof(f),0);
  max:=0;
  for i:=1 to m do
    begin
      if f[i]=0 then f[i]:=dp(i);
      if max<f[i] then max:=f[i];
    end;
  writeln(max);
end.