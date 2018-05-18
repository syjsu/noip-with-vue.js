uses math;
var n,i:longint;
    t,f:array[0..100000] of longint;
begin
  fillchar(f,sizeof(f),0);
  readln(n);
  for i:=1 to n do readln(t[i]);
  f[1]:=t[1];f[2]:=t[2];
  for i:=3 to n do
    f[i]:=min(f[i-1]+t[i]+t[1],f[i-2]+t[1]+2*t[2]+t[i]);
  writeln(f[i]);
end.

//如果是还剩最后两个人，那么就可以是先把1,2运过去，然后1回来，再把那两个送过去，然后2回来接1,最后1,2再过去.
//如果是还剩最后一个人，那么就是用1回来接他，然后一起过去。