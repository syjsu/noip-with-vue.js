var
 n,m,j,k,l:longint;
begin
 read(j,k,l);
 if (j+k<l) or (k+l<j) or (j+l<k) then write('NO')
 else if (j=k) and (k=l)then write('Equilateral')
 else if (j*j+k*k=l*l) or (k*k+l*l=j*j) or (j*j+l*l=k*k) then write('Right')
 else write('General');
end.