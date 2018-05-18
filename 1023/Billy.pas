var
  n,i,max,min,t:longint;
begin
  readln(n);
  max:=-1;
  min:=1001;
  for i:=1 to n do
    begin
      read(t);
      if t>max then max:=t;
      if t<min then min:=t;
    end;
  write(max-min);
end.