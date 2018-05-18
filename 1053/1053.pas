var n,m,i,j,x:longint;
    s:real;
    a,b:array[1..100,1..100] of longint;
    begin
      read(n,m);
      readln;
      for i:=1 to n do
      begin
      for j:=1 to m do
      read(a[i,j]) ;
      readln;
      end;
      for i:=1 to n do
      begin
      for j:=1 to m do
      read(b[i,j]) ;
      readln;
      end;

      for i:=1 to n do
      for j:=1 to m do
        begin
          if a[i,j]=b[i,j] then
          x:=x+1;
          end;
          s:=x/(i*j);
          s:=s*100;
          write(s:0:2);
          end.
