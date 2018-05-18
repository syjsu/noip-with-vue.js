var
a,b:ansistring;
la,lb,i,t,j,z:longint;
ac:boolean;
ans:array[1..26,1..5000]of longint;
m,k,max:array[1..5000]of longint;
begin
ac:=true;
fillchar(ans,sizeof(ans),0);
readln(a);
readln(b);
la:=length(a);
lb:=length(b);
for i:=1 to lb do
begin
inc(k[ord(b[i])-64]);
ans[ord(b[i])-64,k[ord(b[i])-64]]:=i;
end;
for i:=1 to la do
for j:=k[ord(a[i])-64] downto 1 do
begin
max[ans[ord(a[i])-64,j]]:=max[ans[ord(a[i])-64,j]-1]+1;
for z:=ans[ord(a[i])-64,j]+1 to lb do if max[z]<max[ans[ord(a[i])-64,j]]then max[z]:=max[ans[ord(a[i])-64,j]]else break;
end;
writeln(max[lb]);
ac:=true;
readln;
end.
