program ex1036;
var a,b,c:integer;
begin
 read(a);
 while a>=2 do
 begin
 writeln('shang:',a div 2,' ','yu:',a div 2);
 a:=a div 2;
 end;
 if a=1 then writeln('shang:0 yu:1');
end.