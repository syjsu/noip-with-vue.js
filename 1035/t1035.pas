var 
  n,m:longint; i,w:byte;
  a: array [1..10] of byte;
  sum:word;

/////////////////////////////
procedure X;

begin
  w:=0;
  m:=n;
  repeat
    inc(w);
    a[w]:=m mod 10;
    m:=m div 10;
  until m=0;
end;
/////////////////////////////
begin
  readln(n);
  repeat
    X;
    sum:=0;
    for i:=1 to w do 
      sum:=sum+a[i];
    if sum<10 
      then break
      else n:=sum;
  until false;
  writeln(sum);
end.