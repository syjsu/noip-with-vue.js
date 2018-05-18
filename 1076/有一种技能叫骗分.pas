Var
  n,k:longint;
procedure change(n:longint);
var
   i,j:longint;
begin
   if n=0 then exit;
   i:=n mod k;
   j:=n div k;
   change(j);
   if i<10 then  write(i);
   if i=10 then  write('A');   
   if i=11 then  write('B');
   if i=12 then  write('C');
   if i=13 then  write('D');
   if i=14 then  write('E');
   if i=15 then  write('F');
end;
Begin
     readln(n,k);
     change(n);
End.