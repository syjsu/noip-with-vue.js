var
a:integer;
begin
read(a);
if a>30 then write('Fail')
  else if a<=10 then write(a*0.8+0.2:0:2)
         else if a<=20 then write(a*0.75+0.2:0:2) else write(a*0.7+0.2:0:2);
end.