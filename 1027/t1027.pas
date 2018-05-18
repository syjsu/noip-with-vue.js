var 
  s:byte;
  number,X:longint;

begin
  readln(number);
  X:=0;
  repeat
    s:=number mod 10;
    X:=X+s;
    number:=number div 10;
  until number=0;
  writeln(X);
end.