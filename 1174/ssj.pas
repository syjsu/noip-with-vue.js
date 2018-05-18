uses math;
var num:array[1..12] of integer;
    vis:array[1..12] of boolean;
    n,maxx:longint;
procedure dfs(x:longint);
var sum,i:longint;
begin
  if x>n then
    begin
      sum:=0;
      for i:=1 to n-1 do inc(sum,(num[i]-num[i+1])*(num[i]-num[i+1]));
      inc(sum,(num[n]-num[1])*(num[n]-num[1]));
      maxx:=max(maxx,sum);
    end
	 else for i:=2 to n do
          if not vis[i] then
            begin
              vis[i]:=true;num[x]:=i;
              dfs(x+1);
              vis[i]:=false;num[x]:=0;
            end;
end;
begin
  fillchar(vis,sizeof(vis),false);
  readln(n);
  num[1]:=1;maxx:=0;
  dfs(2);
  writeln(maxx);
end.