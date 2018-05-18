var
   k:array[1..100]of longint;
   n:longint;
procedure print(x:longint);
var
   i:longint;
begin
   if x=1 then exit;
   for i:=1 to x-1 do
    write(k[i],'+');
   writeln(k[x]);
end;
procedure fly(x,y,num:longint);
var
     i:longint;
begin
    if y=0 then begin print(num-1);exit;end;
    for i:=x to y do
        begin
           if (y=i)or(i<=y*2) then
              begin
                 k[num]:=i;
                 fly(i,y-i,num+1);
              end;
        end;
end;
begin
     readln(n);
     fly(1,n,1);
end.