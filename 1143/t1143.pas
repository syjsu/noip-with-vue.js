var 
  d:byte; n,i,j,k,X,Y,Lese,Bigst,S:integer;
  City: array [-50..1074,-50..1074] of integer;

begin
  readln(d);
  readln(n);
  for i:=1 to n do 
    begin
      readln(X,Y,Lese);
      for j:=(X-d) to (X+d) do 
        for k:=(Y-d) to (Y+d) do 
          City[j,k]:=City[j,k]+Lese;
    end;
  Bigst:=0;
  s:=0;
  for i:=1 to 1024 do 
    for j:=1 to 1024 do 
      if City[i,j]>Bigst 
        then begin
               S:=1;
               Bigst:=City[i,j];
             end
        else if City[i,j]=Bigst
               then inc(S);
  writeln(S,' ',Bigst);
end.