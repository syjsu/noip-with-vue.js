var max,min,i,j,x,t1,t2,t3,t4:longint;
    p:boolean;
    a:array[1..5,1..5] of longint;
    begin
      p:=false;
      for i:=1 to 5 do
      begin
      for j:=1 to 5 do
      read(a[i,j]);
      readln;
      end;

      for i:=1 to 5 do
      begin
      max:=0;
      min:=maxlongint;
     for j:=1 to 5 do
      begin
        if max<a[i,j] then
        begin
        max:=a[i,j];
        t1:=i;
        t2:=j;
        end;
        end;

       for x:=1 to 5 do
        begin
        if min>a[x,t2] then
        begin
          min:=a[x,t2];
          t3:=x;
          t4:=t2;
          end;
          end;
          if (t1=t3) and (t2=t4) then
          begin
            write(t1,' ',t2,' ',a[t1,t2]);
            p:=true;
            end;
            end;
            if p=false then
            write('not found');
            end.