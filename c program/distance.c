#include<stdio.h>
#include<math.h>
main()
{
	float u,t,a,ut,at,distance;
	printf("name=harmanjot singh\n");
	printf("roll no=2410097135\n");
	printf("enter the value of u");
	scanf("%f",&u);
	printf("enter the value of t");
	scanf("%f",&t);
	printf("enter the value of a");
	scanf("%f",&a);
	distance=u*t+(a*pow(t,2)/2);
	printf("result=%f",distance);
}
