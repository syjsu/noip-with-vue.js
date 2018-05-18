var png:array[0..10000] of longint;
    x,i,m,n,t,k:longint;
begin
  readln(m,n);
  k:=m*n;t:=0;
  for i:=1 to k do read(png[i]);
  for i:=1 to k do
    begin
      read(x);
      if png[i]=x then inc(t);
    end;
  writeln(100*t/k:0:2)
end.