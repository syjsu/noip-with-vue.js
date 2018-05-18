Program h;
Var     y,r,x,p:real;
begin
        read(r,x,p);
        y:=x*exp(ln(((100+r)/100))*p);
        write(y:0:2)
end.