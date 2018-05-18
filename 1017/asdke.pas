var
  a:integer;
begin
  readln(a);
  writeln('[1] apples');
  writeln('[2] pears');
  writeln('[3] oranges');
  writeln('[4] grapes');
  writeln('[0] Exit');
  case a of
    1:write('price=','3.0');
    2:write('price=','2.5');
    3:write('price=','4.1');
    4:write('price=','10.2');
    0:halt;
    else write('price=',0);
  end;
end.
