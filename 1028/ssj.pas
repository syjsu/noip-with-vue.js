var m,n:longint;
function gcd(a,b:longint):longint;
begin
  if b=0 then exit(a)
    else exit(gcd(b,a mod b));
end;
begin
  readln(m,n);
  if gcd(m,n)=1 then writeln('Yes')
   else writeln('No');
end.