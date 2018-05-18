var c:string;
    s,i:longint;
begin
  s:=0;
  read(c);
  for i:=1 to length(c) do
    s:=s+(ord(c[i])-48);
  writeln(s);
end.