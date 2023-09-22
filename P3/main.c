#include <stdio.h>
int main(){
    int x,y,a,b,t,q,d,j=0,k=0,m=0,n=0;
    scanf("%d%d%d%d%d%d%d",&x,&y,&a,&b,&t,&q,&d);
    if(d>x)
        j=90-(d-x);
    else
        j=90;
    if(t==1)
        j+=10;
    m=j*q/100-a;
    
    if(d>y)
        k=90-(d-y);
    else
        k=90;
    if(t==2)
        k-=10;
    n=k*q/100-b;
    
    if(n<=0&&m<=0)
        printf("giveup");
    else if(n<=m&&n>=0)
        printf("TOZ8 %d",n);
    else
        printf("SVT40 %d",m);
}