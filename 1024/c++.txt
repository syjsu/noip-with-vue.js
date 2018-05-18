var i,n,ans:longint;
begin
  readln(n);
  ans:=0;
  for i:=1 to trunc(sqrt(n)) do
    if n mod i=0 then 
	  if i*i<>n then inc(ans,2)
	   else inc(ans);
  writeln(ans);
end.