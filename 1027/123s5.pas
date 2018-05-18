program p1027;
var n:int64;
    sum:int64;
begin
   readln(n);
   sum:=0;
   while(n>0) do
   begin
   sum:=sum+(n mod 10);
   n:=(n div 10);
   end;
   writeln(sum);
end.
