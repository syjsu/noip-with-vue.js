var 
  P: array [1..4,1..4] of word;
  i,j:byte; Z,Y:integer;

begin
  for i:=1 to 4 do 
    for j:=1 to 4 do 
      read(P[i,j]);
  Z:=0;
  for i:=1 to 4 do 
    Z:=Z+P[i,i];
  j:=5;
  Y:=0;
  for i:=1 to 4 do 
    begin
      dec(j);
      Y:=Y+P[i,j];
    end;
  writeln(Z,' ',Y);
end.