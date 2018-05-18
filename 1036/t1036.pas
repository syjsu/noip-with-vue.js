var 
  n,y:longint;

begin 
  readln(n);
  repeat
    y:=n mod 2;
    n:=n div 2;
    writeln('shang:',n,' yu:',y);
  until n=0;
end.