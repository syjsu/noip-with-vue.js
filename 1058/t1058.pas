var 
  s,X:string; i,j,k,C:integer ;
  W: array [1..100] of string ;
  L: array [1..100] of  word  ;

begin
  readln(s);
  s[length(s)]:=' ';
  k:=0;
  while pos(' ',s)<>0 do 
    begin
      inc(k);
      W[k]:=copy(s,1,(pos(' ',s)-1));
      L[k]:=length(W[k]);
      delete(s,1,pos(' ',s));
    end;
  if k=1 
    then writeln(W[1])
    else begin
           for i:=2 to k do 
             for j:=2 to k do 
               if L[j]<L[j-1] 
                 then begin
                        C:=L[j];
                        L[j]:=L[j-1];
                        L[j-1]:=C;
                        X:=W[j];
                        W[j]:=W[j-1];
                        W[j-1]:=X;
                      end;
           writeln(W[1]);
         end;
end.