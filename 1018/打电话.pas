var
 x:real;
begin
 read(x);
 if (x=0.5) then write('3')
 else begin x:=x-0.5; x:=x/0.2; write(x+3:0:0); end;
end.