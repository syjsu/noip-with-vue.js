var
 i,n:longint;
 a:array[0..100] of qword;
begin
 readln(n);
 a[0]:=1;
 for i:=1 to n do
  a[i]:=a[i-1]*2;
 writeln(a[n]);
end.