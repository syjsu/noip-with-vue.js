var n,i:longint;
begin
  readln(n);
  i:=2;
  while i*i<=n do
    begin
        while n mod i=0 do
          begin
            n:=n div i;
            if n<>1 then write(i,'*')
              else begin write(i);halt; end;
          end;
        inc(i);
    end;
  writeln(n);
end.