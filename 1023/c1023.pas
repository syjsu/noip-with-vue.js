var
 n,i,max,min:longint;
 a:array[1..10000]of longint;
begin
 readln(n);
 max:=-maxlongint;
 min:=maxlongint;
 for i:=1 to n do
  begin
   read(a[i]);
   if a[i]>max then max:=a[i];
   if a[i]<min then min:=a[i];
  end;
 writeln(max-min);
end.
