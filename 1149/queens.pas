program queens;  {http://oj.noi.cn/oj/#main/show/1149  1149问题}
var
 s,zx,fx:array [-1000..1000] of boolean;
 n,i,ans:longint;


procedure try(newx:longint);
var
 newy:longint;
begin
 for newy:=1 to n do
  begin
   if s[newy] and zx[newx-newy] and fx[newx+newy] then
    begin
     s[newy]:=false; zx[newx-newy]:=false; fx[newx+newy]:=false;
     if newx<n then try(newx+1) else inc(ans);
     s[newy]:=true; zx[newx-newy]:=true; fx[newx+newy]:=true
    end;
  end;
end;


BEGIN
 for i:=-1000 to 1000 do
  begin
   s[i]:=true;
   zx[i]:=true;
   fx[i]:=true;
  end;
 ans:= 0;
 readln(n);
 try(1);             {try参数表示行 即是newx }
 write(ans);
 END.
