var t,m,n:longint;
function try(m,n:longint):longint;
begin
  if (m=0) or (n=1) then exit(1);
  if n>m then exit(try(m,m))
   else exit(try(m,n-1)+try(m-n,n));
end;
begin
  readln(t);
  while t>0 do
    begin
      dec(t);
      readln(m,n);
      writeln(try(m,n));
    end;
end.

//1.不含有空:从每个盘子里面拿出一个来也不影响最终的结果，即f[m,n]=f[m - n,n]
//2.含有的空的情况，只考虑一个空的就行，即f[m,n]=f[m,n - 1]