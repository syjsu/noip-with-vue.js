var
  n:longint;
function sc(x:longint):longint;
var
  s:longint;
begin
  if x div 10=0 then begin
                       sc:=x;
                       exit;
                     end;
  s:=0;
  while x>0 do
    begin
      s:=s+x mod 10;
      x:=x div 10;
    end;
  sc:=sc(s);
end;
begin
  readln(n);
  write(sc(n));
end.