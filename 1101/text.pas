var i,j,m,n,a,b,c,d,p,t:longint;
    an:array[0..100000]of longint;
begin
  readln(n,m);
  fillchar(an,sizeof(an),0);
  read(t);
  an[1]:=t;
  for i:=2 to m do
  begin
    read(t);
    an[i]:=an[i-1]+t;
  end;
  readln;
  for i:=2 to n do
  begin
    read(t);
    an[(i-1)*m+1]:=an[(i-2)*m+1]+t;
    for j:=2 to m do
    begin
      read(t);
      p:=(i-1)*m+j;
      an[p]:=an[p-m]+an[p-1]-an[p-m-1]+t;
    end;
    readln;
  end;
  readln(t);
  for i:=1 to t do
  begin
    readln(a,b,c,d);
    if (a<>1)and(b<>1) then writeln(an[(c-1)*m+d]-an[(a-2)*m+d]-an[(c-1)*m+b-1]+an[(a-2)*m+b-1])
    else if (a=1)and(b<>1) then writeln(an[(c-1)*m+d]-an[(c-1)*m+b-1])
    else if (a<>1)and(b=1) then writeln(an[(c-1)*m+d]-an[(a-2)*m+d])
    else writeln(an[(c-1)*m+d]);
  end;
end.
