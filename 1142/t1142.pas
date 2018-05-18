var 
  n,i:integer;
  a: array [0..1001] of int64;
//////////////////////////////////////
Function YorN(n:int64):boolean;
var k:int64;YN:boolean;
begin
  YN:=true;
  k:=2;
  while (k<=sqrt(n)) and (YN) do 
    begin
      if n mod k=0 
        then YN:=false
        else inc(k);
    end;
  YorN:=YN;
end;
//////////////////////////////////////
begin 
  readln(n);
  for i:=1 to n do 
    readln(a[i]);
  for i:=1 to n do 
    if (a[i]<>1) and 
       (YorN(a[i])) 
      then writeln('yes')
      else writeln('no');
end.