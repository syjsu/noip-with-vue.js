var s:string;
    i,c,min,b:longint;
begin
  readln(s);
  i:=1;c:=0;b:=1;min:=maxlongint;
  while s[i]<>'.' do
    begin
      if (s[i] in ['a'..'z']) or (s[i] in ['A'..'Z']) then inc(c)
       else begin
              if (min>c) and (c<>0) then
                begin
                  min:=c;b:=i-c;
                end;
              c:=0;
            end;
      inc(i);
    end;
  if min=maxlongint then min:=i-1;
  writeln(s[b..b+min-1]);
end.