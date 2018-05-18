var n,i,j:longint;
    f:array[0..1000] of qword;
begin
f[0]:=1;
f[1]:=1;
f[2]:=2;
read(n);
if n=1 then write('1')
  else if n=2 then write('2')
  else
 begin
 for i:=3 to n do
     for j:=0 to i-1 do
       f[i]:=f[j]*f[i-j-1]+f[i];
       write(f[n]);
       end;
 end.
