k1=0.65;
k2=0.65;
for i=1:1099
   w(i,1)=0;
   if max(x(i,1),y(i,1))>k*z(i,1)+k2*exp(-i/10) 
       w(i,1)=1;
   end
end
figure;
plot(w,'r*');
ylim([-2 2]);
hole on;


[http]
	proxy = http://127.0.0.1:10809
	sslVerify = false
[https]
	proxy = http://127.0.0.1:10809