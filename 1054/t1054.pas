var
  n,m,i,j,k:integer;
  a:array [1..100] of string;
  b:array [0..101,0..101] of byte;

begin
  read(n,m);
  for i:=0 to (n+1) do
    for j:=0 to (m+1) do b[i,j]:=0;
  for i:=1 to n do
    readln(a[i]);
  for i:=1 to n do
    for j:=1 to m do
      if a[i][j]='*'
        then begin
               inc(b[i-1, j-1]); inc(b[i-1, j ]);   inc(b[i-1, j+1]);
               inc(b[ i , j-1]);     b[ i , j ]:=9; inc(b[ i , j+1]);
               inc(b[i+1, j-1]); inc(b[i+1, j ]);   inc(b[i+1, j+1]);
             end;
  for i:=1 to n do
    begin
      for j:=1 to m do
        if b[i,j] in [0..8]
          then write(b[i,j])
          else write('*');
      writeln;
    end;
end.
