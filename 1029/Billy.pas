var
  s:string;
  i:integer;
begin
  readln(s);
  for i:=1 to length(s) do
    if (s[i]>='a')and(s[i]<='z')then s[i]:=chr((ord(s[i])-ord('a')+3)mod 26+ord('a'))
    else if (s[i]>='A')and(s[i]<='Z') then s[i]:=chr((ord(s[i])-ord('A')+3)mod 26+ord('A'));
  write(s);
end.