program project1;
var
  d:integer;
begin
  readln(d);//用CASE更合适
  case d of
    1:writeln('Monday');
    2:writeln('Tuesday');
    3:writeln('Wednesday');
    4:writeln('Thursday');
    5:writeln('Friday');
    6:writeln('Saturday');
    7:writeln('Sunday')
  end;
  readln
end.

