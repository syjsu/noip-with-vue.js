var 
  s,s2:string; X,C:real;
  male,female:array [1..39] of real;
  i,j,Y,Z,n,YN:byte; Int,Rea:integer;

begin
  readln(n);
  Y:=0; Z:=0;
  for i:=1 to n do 
    begin
      readln(s);
      s2:=copy(s,1,6);
      val(copy(s,(pos(' ',s)+1),1),Int,YN);
      val(copy(s,(pos('.',s)+1),(length(s)-pos('.',s))),Rea,YN);
      X:=Int+(Rea/100);
      if s2='female' 
        then begin
               inc(Z);
               female[Z]:=X;
             end
        else begin
               inc(Y);
               male[Y]:=X;
             end;
    end;
  for i:=2 to Y do 
    for j:=2 to Y do 
      if male[j]<male[j-1] 
        then begin
               C:=male[j];
               male[j]:=male[j-1];
               male[j-1]:=C;
             end;
  for i:=2 to Z do 
    for j:=2 to Z do 
      if female[j]>female[j-1] 
        then begin
               C:=female[j];
               female[j]:=female[j-1];
               female[j-1]:=C;
             end;
  for i:=1 to Y do 
    write(male[i]:0:2,' ');
  for i:=1 to (Z-1) do 
    write(female[i]:0:2,' ');
  writeln(female[Z]:0:2);
end.