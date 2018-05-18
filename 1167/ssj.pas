const dx:array[1..8] of integer=(-1,-1,-1,0,0,1,1,1);
      dy:array[1..8] of integer=(-1,0,1,-1,1,-1,0,1);
var n,sum,i,j:longint;
    map:array[1..10,1..10] of longint;
    vis:array[1..10,1..10] of boolean;
procedure dfs(x,y:longint);
var k,nx,ny:longint;
begin
  if (x=1) and (y=n) then begin inc(sum);exit; end;
  for k:=1 to 8 do
    begin
      nx:=x+dx[k];ny:=y+dy[k];
      if (nx>0) and (nx<=n) and (ny>0) and (ny<=n) and (map[nx,ny]=0) and not(vis[nx,ny]) then
        begin
          vis[nx,ny]:=true;
          dfs(nx,ny);
          vis[nx,ny]:=false;
        end;
    end;
end;
begin
  fillchar(map,sizeof(map),0);
  fillchar(vis,sizeof(vis),false);
  sum:=0;
  readln(n);
  for i:=1 to n do
    begin
      for j:=1 to n do read(map[i,j]);
      readln;
    end;
  vis[1,1]:=true;
  dfs(1,1);
  writeln(sum);
end.