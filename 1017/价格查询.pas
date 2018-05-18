var
 n:longint;
begin
 read(n);
 writeln('[1] apples');
 writeln('[2] pears');
 writeln('[3] oranges');
 writeln('[4] grapes');
 writeln('[0] Exit');
 if (n<>0) then write('price=');
 if (n=1) then write('3.0')
 else if (n=2) then write('2.5')
 else if (n=3) then write('4.1')
 else if (n=4) then write('10.2')
 else if (n>4) then write('0');
end.