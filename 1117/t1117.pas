var 
  n,i:longint; 
  a: array [0..100001] of longint;
///////////////////////////////////////
procedure KP(Be,En:longint);
var L,R,mid,C:longint;
begin
  L:=Be;
  R:=En;
  mid:=a[(L+R) div 2];
  repeat 
    while a[L]<mid do inc(L);
    while a[R]>mid do dec(R);
    if L<=R 
      then begin
             C:=a[L];
             a[L]:=a[R];
             a[R]:=C;
             inc(L); dec(R);
           end;
  until L>R;
  if L<En 
    then KP(L,En);
  if R>Be 
    then KP(Be,R);
end;
///////////////////////////////////////
begin
  readln(n);
  for i:=1 to n do 
    read(a[i]);
  KP(1,n);
  for i:=1 to (n-1) do 
    write(a[i],' ');
  writeln(a[n]);
end.