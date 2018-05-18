var n,i,j,x,k,s:longint;
    a:array[1..13] of longint;
    begin
      for x:=1 to 25 do
      begin
      read(k);
      a[k]:=a[k]+1;
      end;
      for k:=1 to 13 do
      if a[k]=1 then
      write(k);
      end.

