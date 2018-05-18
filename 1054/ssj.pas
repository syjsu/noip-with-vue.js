var n,m,i,j:longint;
    map:array [1..100,1..100] of char;
    b:array [0..101,0..101] of longint;
begin
  readln(n,m);
  fillchar(b,sizeof(b),0);
  for i:=1 to n do
    begin
      for j:=1 to m do
        begin
          read(map[i,j]);;
          if map[i,j]='*' then
            begin
              inc(b[i-1,j-1]);inc(b[i-1,j]);inc(b[i-1,j+1]);
              inc(b[i,j-1]);b[i,j]:=9;inc(b[i,j+1]);
              inc(b[i+1,j-1]);inc(b[i+1,j]);inc(b[i+1,j+1]);
            end;
        end;
      readln;
    end;
  for i:=1 to n do
    begin
      for j:=1 to m do
        if b[i,j] in [0..8] then write(b[i,j])
         else write('*');
      writeln;
    end;
end.