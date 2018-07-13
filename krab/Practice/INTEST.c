#include<stdio.h>
int main()
{
int a,b,i,j=0;
scanf("%d %d",&a,&b);
int z[a];
for(i=0;i<a;i++)
 
{
scanf("%d",&z[i]);
if(z[i]%b==0)
j=j+1;
}
printf("%d",j);
return 0;
 
}
 
