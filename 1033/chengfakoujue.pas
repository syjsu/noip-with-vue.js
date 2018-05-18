program x;
var i,j,k,n:longint;
begin
  j:=1;
  read(n);
  repeat
    for i:=1 to j do
    write(i,'*',j,'=',i*j,' ');
    writeln;
    j:=j+1;
  until j=n+1;
end.