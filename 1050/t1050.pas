var 
  m,n,Y:integer;
  i,j,k:integer;
  A,B,C: array [0..101,0..101] of longint;

begin
  read(m);
  read(n);
  read(Y);
  for i:=1 to m do 
    for j:=1 to n do 
      read(A[i,j]);
  for i:=1 to n do 
    for j:=1 to Y do 
      read(B[i,j]);
  for i:=1 to m do 
    for j:=1 to Y do 
      for k:=1 to n do 
        C[i,j]:=C[i,j]+A[i,k]*B[k,j];
  for i:=1 to m do 
    begin
      for j:=1 to (Y-1) do 
        write(C[i,j],' ');
      writeln(C[i,Y]);
    end;
end.