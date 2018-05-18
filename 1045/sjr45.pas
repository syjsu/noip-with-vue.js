var i,j,s,k:longint;
    a:array[1..4,1..4] of longint;
    begin
     for i:=1 to 4 do
     begin
     for j:=1 to 4 do
     read(a[i,j]);
     readln;
     end;
     for i:=1 to 4 do
     begin
     for j:=1 to 4 do
     begin
     if i=j then
     s:=s+a[i,j];
     if i+j=5 then
     k:=k+a[i,j];
     end;
     end;
     write(s,' ',k);
     end.