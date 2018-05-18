var s:string;
    i:longint;
    x,z:int64;
begin
  readln(s);
  z:=0;x:=0;
  for i:=1 to ord(s[0]) do
    if s[i]<>'+' then z:=z*10+ord(s[i])-48
     else begin x:=x+z;z:=0; end;
  writeln(x+z);
end.