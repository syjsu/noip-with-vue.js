    var
        a:array[1..100] of integer;
        n,i,ans,len,tmp,beg:integer;
    begin
        read(n);
        for i:=1 to n do read(a[i]);
        tmp:=0;
        ans:=0;
        len:=0;
        beg:=0;
        for i:=1 to n do
        begin
            if tmp+a[i]>ans then
            begin
                ans:=tmp+a[i];
                len:=i-beg;
            end
            else if (tmp+a[i]=ans) and (i-beg>len) then len:=i-beg;
            if tmp+a[i]<0 then
            begin
                beg:=i;
                tmp:=0;
            end
            else inc(tmp,a[i]);
        end;
        writeln(ans);
    end.
