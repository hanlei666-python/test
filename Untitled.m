figure;
f1=[f1followerparam0{:,1}];
j=1;
for i=1:1154
    if f1(i,1)~=0
        F1(j,1)=f1(i,1)/(10^6)-40;
        j=j+1;
    end
end
F11=F1;
F11(:,1)=2;
plot(F1(:,1),F11(:,1),'g.');
hold on;
f2=[f2followerparam0{:,1}];

m=[mleadersend0{:,1}];
m(:,1)=m(:,1)/(10^6);
M=m;
M(:,1)=1;
plot(m(:,1),M(:,1),'b.');
hold on;


%plot(master_xy(:,2),master_xy(:,1),'r');
title('Triggered or not')
xlabel('time');
ylabel('True');
%xlim([-1 99]);
ylim([0 4]);
hold on;