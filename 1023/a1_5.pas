 var i,a,b:integer;
 begin
   for i:=10 to 99do begin
     a:=i div 10;
     b:=i mod 10;
     if b*10+a=i+27 then writeln(i);
   end;
   readln
 end.

