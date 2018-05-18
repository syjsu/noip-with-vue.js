var x:array[1..10] of integer;
    y:array[1..10] of boolean;
    n:integer;
procedure output;
var i:integer;
begin
  for i:=1 to n do write(x[i],' ');
  writeln;
end;
procedure search(v:integer);
var i:integer;
begin
  if v>n then begin output;exit; end;
  for i:=1 to n do
    if y[i] then
      begin
        x[v]:=i;y[i]:=false;
        search(v+1);
        y[i]:=true;
      end;
end;
begin
  readln(n);
  fillchar(y,sizeof(y),true);
  search(1);
end.