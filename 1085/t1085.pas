const 
  ch:array [1..5] of char=('H','A','P','P','Y');

var 
  a,b:string[100];
  i:byte;

begin
  readln(a);
  for i:=1 to length(a) do 
    a[i]:=upcase(a[i]);
  b:='';
  for i:=1 to 5 do 
    if pos(ch[i],a)<>0 
      then begin
             b:=b+copy(a,pos(ch[i],a),1);
             delete(a,pos(ch[i],a),1);
           end;
  if b='HAPPY' 
    then writeln('Yes!')
    else writeln('No!');
end.