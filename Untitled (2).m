for i=1:1180
    A(i,1)=norm(f(i,1),f(i,2));
end
figure;
plot( A(:,1),'r');
ylim([0,1.5]);
hold on;