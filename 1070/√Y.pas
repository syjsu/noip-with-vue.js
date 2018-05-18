var n,i,cs:longint;
procedure h(n:longint;a,b,c:char);
begin
if n=1 then writeln(cs,'.Move ',n,' from ',a,' to ',c)
else
begin
h(n-1,a,c,b);
inc(cs);
writeln(cs,'.Move ',n,' from ',a,' to ',c);
inc(cs);
h(n-1,b,a,c);
end;
end;
begin
cs:=1;
readln(n);
h(n,'a','b','c');
end.