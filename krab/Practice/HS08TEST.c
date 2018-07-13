    #include<stdio.h>
int main()
{
	int X;
	float Y,d;
	scanf("%d", &X);
	scanf("%f",&Y);
	d= Y-X-0.50;
	if (X%5==0 && X<Y-0.5)
	{
		printf("%.2f", d );
	}
	else 
	{
		printf("%.2f",Y);
	}return 0;
	} 
