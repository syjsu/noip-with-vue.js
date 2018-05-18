var
  a,b,c:real;
begin
  readln(a);
  if a=0 then begin
                write('0');
                halt;
              end;
  if a=0.5 then write('3')
           else write((a-0.5)/0.2+3:0:0);
end.
