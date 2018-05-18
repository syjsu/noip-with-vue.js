var n,i,t,s:longint;
begin
  readln(n);
  s:=0;
  t:=n div 50;
  for i:=0 to t do s:=s+(n-i*50) div 20+1;
  writeln(s);
end.