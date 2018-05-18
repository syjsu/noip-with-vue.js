program P1029;
var a:string; i:longint;
begin
  read(a);
  for i:=1 to length(a) do
    if a[i] in ['A'..'Z'] then
      a[i]:=chr(ord('A')+(ord(a[i])+3-ord('A')) mod (ord('Z')-ord('A')+1))
    else
      if a[i] in ['a'..'z'] then
        a[i]:=chr(ord('a')+(ord(a[i])+3-ord('a')) mod (ord('z')-ord('a')+1));
  write(a);
end.
    