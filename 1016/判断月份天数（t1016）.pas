var 
  year:integer; month:byte;
  YN:boolean;

begin
  read(year,month);
  if ((year mod 4=0) and (year mod 100<>0)) or 
     (year mod 400=0) 
    then YN:=true;
  if month=2 
    then if YN=true 
           then writeln(29)
           else writeln(28)
    else if month>7 
           then if odd(month)=true 
                  then writeln(30)
                  else writeln(31)
           else if odd(month)=true
                  then writeln(31)
                  else writeln(30);
end.