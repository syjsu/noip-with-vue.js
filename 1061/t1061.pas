const Password='NOIP@CCF';

var 
  ans:string;

begin
  repeat
    readln(ans);
    if ans='Y' 
      then begin
             readln(ans);
             if ans=Password 
               then begin
                      writeln('Success');
                      halt;
                    end
               else begin
                      writeln('Sorry');
                    end;
           end
      else halt;
  until false;
end.