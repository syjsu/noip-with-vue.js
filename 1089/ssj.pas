const max=2000; 
var s1,s2,s:ansistring;
    b:array[0..max] of integer;
    a:array[0..max+1] of integer;
    len,la,lb,i,p,n,j:integer;
begin
  readln(n);
	for j:=1 to n do
	begin
		readln(s);p:=pos(' ',s);
		s1:=copy(s,1,p-1);s2:=copy(s,p+1,length(s)-p);
		fillchar(a,sizeof(a),0);fillchar(b,sizeof(b),0);
		la:=length(s1);lb:=length(s2);
		for i:=la downto 1 do  a[la-i+1]:=ord(s1[i])-ord('0');
		for i:=lb downto 1 do  b[lb-i+1]:=ord(s2[i])-ord('0');
		if la>lb then len:=la 
		 else len:=lb;
		for i:=1 to len do 
      begin
        a[i+1]:=a[i+1]+(a[i]+b[i]) div 10;
        a[i]:=(a[i]+b[i]) mod 10;
      end;      
		if a[len+1]>0 then len:=len+1;
		for i:=len downto 1 do write(a[i]);   
		writeln;
	end;
end.