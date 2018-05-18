var o,p,s,a:string;
t,k,i,n,m:longint;
 begin
   readln(s);
   k:=0;
   t:=1000;
   n:=length(s);
   delete(s,n,1);
   s:=s+' ';
   for i:=1 to n do
   begin
   if s[i]=' ' then
   if k<t then
   begin
     t:=k;
     k:=0;
     o:=copy(s,i-t,t);
   end
else k:=0
else k:=k+1;
end;
   write(o);
 end.
