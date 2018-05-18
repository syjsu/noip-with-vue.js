var
 n:longint;
begin
 read(n);
 if (n=1) then write('Monday')
 else if (n=2) then write('Tuesday')
 else if (n=3) then write('Wednesday')
 else if (n=4) then write('Thursday')
 else if (n=5) then write('Friday')
 else if (n=6) then write('Saturday')
 else write('Sunday');
end.