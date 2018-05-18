uses math;
var m,n,k,l,kk,ll,d,x,y,p,q,i,maxa:word;//nÎªÁÐ
    z,h:array[0..10000]of word;
    zz,hh:array[0..10000]of 0..1;
begin
  read(m,n,k,l,d); kk:=k; ll:=l;
  for i:=1 to d do begin
   read(x,y,p,q);
   if x=p then inc(z[min(y,q)])
    else inc(h[min(x,p)]);
  end;
  while ll>0 do begin
   for i:=1 to n-1 do
    if z[i]>z[maxa] then maxa:=i;
   zz[maxa]:=1;
   z[maxa]:=0;
   dec(ll);
  end;
  while kk>0 do begin
   for i:=1 to m-1 do
    if h[i]>h[maxa] then maxa:=i;
   hh[maxa]:=1;
   h[maxa]:=0;
   dec(kk);
  end;
  for i:=1 to m-1 do if hh[i]=1 then
   if k>1 then begin
    write(i,' ');
    dec(k);
   end else writeln(i);
  for i:=1 to n-1 do if zz[i]=1 then
   if l>1 then begin
    write(i,' ');
    dec(l);
   end else writeln(i);
end.