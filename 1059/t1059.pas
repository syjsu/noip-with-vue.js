var 
  s,l:string[250];
  a: array [1..250] of longint;
  i,j,YN:integer; sum:longint;

begin
  readln(s);
  i:=0;
  while pos('+',s)<>0 do 
    begin
      inc(i);
      l:=copy(s,1,(pos('+',s)-1));
      val(l,a[i],YN);
      delete(s,1,pos('+',s));
    end;
  inc(i);
  val(s,a[i],YN);
  sum:=0;
  for j:=1 to i do 
    sum:=sum+a[j];
  writeln(sum);
end.