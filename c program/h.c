#include<stdio.h>
main()
{
	float math,bio,phy,sum,avg;
	printf("name=harmanjotsingh\n");
	printf("rollno=2410997135\n");
	printf("enter three value");
	scanf("%f%f%f",&math,&bio,&phy);
	sum=math+bio+phy;
	avg=sum/3;
printf("sum of three values=%f",sum);
printf("\n average=%f",avg);
}

