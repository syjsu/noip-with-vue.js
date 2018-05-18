var 
  X:longint;
  n,i: byte;

begin
  readln(n);
  X:=1;
  for i:=1 to n do 
    X:=X*2;
  writeln(X);
end.