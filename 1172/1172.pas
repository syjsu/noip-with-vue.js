var c:char; ans:int64;
begin
  ans:=1;
  while not(eoln) do begin
   read(c);
   ans:=ans*(ord(c)-96) mod 10007;
  end;
  write(ans);
end.