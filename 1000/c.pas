var
        n,i,tot:longint;
        c:array[1..5]of longint;
        x,y:array[1..10]of longint;
procedure dg(t:longint);
var
        i:longint;
begin
        if t>5 then
        begin
                for i:=1 to n do
                if c[x[i]]=c[y[i]] then exit;
                tot:=tot+1;
        end
        else
        begin
                for i:=1 to 4 do
                begin
                        c[t]:=i;
                        dg(t+1);
                        c[t]:=0;
                end;
        end;
end;
begin
        readln(n);
        for i:=1 to n do
        readln(x[i],y[i]);
        tot:=0;
        dg(1);
        writeln(tot);
end.