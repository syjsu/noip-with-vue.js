var i,j,k,n,l:longint;
	f:array[0..2000,0..2000] of longint;
begin
	readln(n,k);
	fillchar(f,sizeof(f),0);
	for j:=1 to k do f[1,j]:=1;
	for i:=2 to n do 
		for j:=1 to k do 
			for l:=1 to i-2 do 
				f[i,j]:=(f[i,j]+(f[l,j-1]*f[i-l-1,j-1])mod 9901)mod 9901;
	writeln((f[n,k]-f[n,k-1]+9901)mod 9901);
end.