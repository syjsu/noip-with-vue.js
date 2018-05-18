const s='NOIP@CCF';
var ch:char;
    s1:string[8];
begin
  while true do
    begin
      readln(ch);
      if ch<>'N' then
        begin
          readln(s1);
          if s1=s then begin writeln('Success');halt; end
           else writeln('Sorry');
        end
      else halt;
    end;
end.