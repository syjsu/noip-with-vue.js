var map:array[1..10,1..10] of boolean;
    sum,n:longint;
procedure dfs(m:integer);//m列
var i,p,q:longint;//p行q列
    flag:boolean;
begin
  if m<=n then
    for i:=1 to n do
      begin
        flag:=false;
        for q:=1 to m do
          if map[i,q] then flag:=true;
        p:=i;q:=m;
        while (p-1>=1) and (q-1>=1) do
          begin
            dec(p);dec(q); 
            if map[p,q] then flag:=true; 
          end;  
        p:=i;q:=m;
        while (p+1<=n) and (q-1>=1) do
          begin
            inc(p); 
            dec(q); 
            if map[p,q] then flag:=true; 
          end;  
        if not flag then
          begin 
            map[i,m]:=true; 
            dfs(m+1);
            map[i,m]:=false;
          end;
      end;
  if m>n then inc(sum);
end;
begin
  readln(n);
  fillchar(map,sizeof(map),false);
  sum:=0;
  dfs(1);
  writeln(sum);
end.