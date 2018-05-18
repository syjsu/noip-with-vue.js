const max=2000; 
var sa,sb,sc:ansistring;
	b:array[0..max] of integer;
	a:array[0..max+1] of integer;
	len,la,lb,i,p,n,j:integer;
begin
	readln(n);
	for j:=1 to n do
	begin
		readln(sc); 
		p:=pos(' ',sc);
		sa:=copy(sc,1,p-1);
		sb:=copy(sc,p+1,length(sc)-p);  
		fillchar(a,sizeof(a),0);  fillchar(b,sizeof(b),0);   //数组初始化
		la:=length(sa); lb:=length(sb); 
		for i:= la downto 1 do  a[la-i+1]:=ord(sa[i])-ord('0');  //数据存储 
		for i:= lb downto 1 do  b[lb-i+1]:=ord(sb[i])-ord('0');  //数据存储
		if  la>lb then len:=la 
			else  len:=lb;
		for i:=1 to len do 
		begin
			a[i+1]:=a[i+1]+(a[i]+b[i]) div 10;  //计算与进位同时处理，
			a[i]:=(a[i]+b[i]) mod 10;
		end;      
		if a[len+1]>0 then  len:=len+1;
		for i:=len downto 1 do  write(a[i]);   
		writeln;
	end;
end.