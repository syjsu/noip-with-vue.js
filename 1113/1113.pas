var a:array[0..300]of char;
    s:string;
    i,k:longint;
begin
     readln(s);
     for i:=1 to length(s) do
     a[i]:=s[i];
     for i:=1 to length(s) do
     if a[i]=')' then
     begin
          k:=i-1;
          while a[k]<>'(' do
          k:=k-1;
          writeln(k-1,' ',i-1);
          a[k]:='0';a[i]:='0';
     end;
end.

