var n:byte;
function ss(i:byte):longint;
begin
  if i=n then exit(1);
  if i<n then begin
   ss:=0;
   ss:=ss(i+1)+ss(i+2);
  end;
end;
begin
  while not(eoln) do begin
   readln(n);
   writeln(ss(1));
  end;
end.