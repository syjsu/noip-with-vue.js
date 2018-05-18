program exe_1129;
var
  a,b,m,n,k:longint;
  c:string;
  x:array[1..202,1..202] of longint;
procedure check(p,q:longint);
begin
  if (x[p,q]=1) or (x[p,q]=2) or (x[p,q]=3) or (x[p,q]=4) or (x[p,q]=5) or (x[p,q]=6) or (x[p,q]=7) or (x[p,q]=8) or (x[p,q]=9)
    then begin
      x[p,q]:=0;
      check(p-1,q);
      check(p,q+1);
      check(p+1,q);
      check(p,q-1);
    end;
end;
begin
  readln(m,n);
  for a:=2 to m+1 do begin
    readln(c);
    for b:=2 to n+1 do begin
      val(copy(c,1,1),x[a,b],k);
      delete(c,1,1);
    end;
  end;
  for a:=2 to m+1 do begin
    for b:=2 to n+1 do begin
      if (x[a,b]=1) or (x[a,b]=2) or (x[a,b]=3) or (x[a,b]=4) or (x[a,b]=5) or (x[a,b]=6) or (x[a,b]=7) or (x[a,b]=8) or (x[a,b]=9)
        then begin
          check(a-1,b);
          check(a,b+1);
          check(a+1,b);
          check(a,b-1);
          x[a,b]:=0;
          k:=k+1;
        end;
    end;
  end;
  writeln(k);
end.
