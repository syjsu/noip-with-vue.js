const 
  week:array [1..7] of string=('Monday',
                               'Tuesday',
                               'Wednesday',
                               'Thursday',
                               'Friday',
                               'Saturday',
                               'Sunday');

var 
  number:byte;

begin 
  readln(number);
  writeln(week[number]);
end.