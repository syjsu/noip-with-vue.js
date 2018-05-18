var
 n,i,l:longint;
 s:string;
begin
 read(n);
 i:=n mod 123;
 l:=n mod 91;
 if (i>=97) and (i<=122) then s:=chr(i)
 else if (l>=65) and (l<=90) then s:=chr(l)
 else s:='*';
 write(s);
end.