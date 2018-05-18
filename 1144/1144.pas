var bu:array[1..1000]of longword; n,i,m:longword;
 mode:record  {record the mode}
   n:word;
   t:longword;
 end;
begin
 readln(n);
 for i:=1 to n do begin
  read(m); inc(bu[m]); end; {Bucket sort}
 mode.n:=1; mode.t:=bu[1];
 for i:=1000 downto 2 do
  if bu[i]>=mode.t then begin
   mode.n:=i; mode.t:=bu[i]; end;
 writeln(mode.n);
end.