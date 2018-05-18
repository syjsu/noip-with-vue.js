var a,b:longint;
begin
 read(a,b);
 case b of
 1:write(31);
 2:if ((a mod 4=0) and (a mod 100<>0)) or (a mod 400=0) then write(29) else write(28);
 3:write(31);
 4:write(30);
 5:write(31);
 6:write(30);
 7:write(31);
 8:write(31);
 9:write(30);
 10:write(31);
 11:write(30);
 12:write(31);
end;
end.