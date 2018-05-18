var a,b,c,d,e,f,max,maxk:longint;
s:array[1..26]of integer;
g:array[1..4] of string;
begin
  readln(g[1]);
  readln(g[2]);
  readln(g[3]);
  readln(g[4]);
  for a:=1 to 4 do
    for b:=1 to length(g[a]) do
      if (g[a][b]>='A')and(g[a][b]<='Z') then
        begin
          inc(s[ord(g[a][b])-64]);
          if s[ord(g[a][b])-64]>max then begin
            max:=s[ord(g[a][b])-64];
            maxk:=ord(g[a][b])-64;  end;
        end;
  for b:=1 to max do begin
  for a:=1 to 26 do
  begin
  d:=a*2-1;
  if s[a]=max then begin s[a]:=s[a]-1;write('* ');end
  else write('  ');
  end;
  max:=max-1;
  writeln;
  end;
  writeln('A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ');
end.