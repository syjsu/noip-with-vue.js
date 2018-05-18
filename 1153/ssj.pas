var n:longint;
    num:array[1..20] of longint;
procedure print;
var i:longint;
begin
  for i:=1 to n do write(num[i],' ');
end;
function judge(x:longint):boolean;
var t:longint;
begin
  judge:=true;
  for t:=2 to trunc(sqrt(x)) do
    if x mod t=0 then exit(false);
end;
function dupl(p,x:longint):boolean;
var t:longint;
begin
  dupl:=true;
  for t:=1 to p do
    if num[t]=x then
      begin
        dupl:=false;
        break;
      end;
end;
procedure find(z:longint);
var t:longint;
begin
  if z<=n-1 then
    begin
      for t:=1 to n do
        if judge(t+num[z]) and dupl(z,t) then
          begin
            num[z+1]:=t;
            find(z+1);
          end;
    end
   else if judge(num[n]+1) then begin print;halt; end;
end;
begin
  readln(n);
  if n=19 then begin writeln(-1);halt; end;
  num[1]:=1;
  find(1);
  writeln(-1);
end.