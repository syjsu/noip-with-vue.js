var 
n,k,i,j:byte; s,D:string;
  name: array [1..100] of  string;
  time: array [1..100] of integer;
  C,YN:integer; 

begin 
  readln(n,k);
  for i:=1 to n do 
    begin
      readln(s);
      name[i]:=copy(s,1,(pos(' ',s)-1));
      delete(s,1,(pos(' ',s)-1));
      while pos(' ',s)<>0 do 
        begin
          delete(s,pos(' ',s),1);
        end;
      val(s,time[i],YN);
    end;
  for i:=2 to n do 
    for j:=2 to n do 
      if time[j]<time[j-1] 
        then begin
               C:=time[j];
               time[j]:=time[j-1];
               time[j-1]:=C;
               D:=name[j];
               name[j]:=name[j-1];
               name[j-1]:=D;
             end;
  writeln(name[k]);
end.