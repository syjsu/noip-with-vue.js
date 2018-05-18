var 
  a: array [1..13,1..2] of boolean;
  X:integer; i:byte;

begin
  for i:=1 to 25 do 
    begin
      X:=0;
      read(X);
      if a[X,1]=false
        then a[X,1]:=true
        else if a[X,2]=false 
               then a[X,2]:=true;
    end;
  for i:=1 to 13 do 
    if a[i,2]=false then writeln(i);
end.