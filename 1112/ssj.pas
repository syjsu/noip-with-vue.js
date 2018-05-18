var map,vis:array[0..100,0..100] of boolean;
    i,j,n,m,a,ans:longint;
procedure dfs(x,y:longint);
begin
  if not map[x,y] or vis[x,y] then exit;
  vis[x,y]:=true;
  dfs(x-1,y);dfs(x,y-1);dfs(x+1,y);dfs(x,y+1);
end;
begin
  ans:=0;
  fillchar(vis,sizeof(vis),false);
  fillchar(map,sizeof(map),false);
  readln(n,m);
  for i:=1 to n do
    begin
      for j:=1 to m do
        begin
          read(a);
          if a=1 then map[i,j]:=true;
        end;
      readln;
    end;
  for i:=1 to n do
    for j:=1 to m do
      if not vis[i,j] and map[i,j] then
        begin
          inc(ans);
          dfs(i,j);
        end;
  writeln(ans);
end.