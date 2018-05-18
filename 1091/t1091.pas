var 
  n,Q,i:byte;
  P: array [1..100] of Char;
  X: array [1..100,1..2] of integer;
  Qs: array [1..100]  of integer;

begin
  readln(n,Q);
  for i:=1 to n do 
    begin
      read(P[i]);
      case P[i] of 
        'C':readln(X[i,1]);
        'R':readln(X[i,1],X[i,2]);
        'T':readln(X[i,1]);
      end;
    end;
  for i:=1 to Q do 
    readln(Qs[i]);
  for i:=1 to Q do 
    case P[Qs[i]] of 
      'C':writeln('Circle ',X[Qs[i],1]);
      'R':writeln('Rectangle ',X[Qs[i],1],' ',X[Qs[i],2]);
      'T':writeln('Triangle ',X[Qs[i],1]);
    end;
end.