#include<stdio.h>
 main()
{
	float numhours,witheled,hoursrate,gpay,npay;
	printf("name=harmanjot singh\n");
	printf("roll no=2410997135\n");
	printf("enter no of hours\n");
	    scanf("%f",&numhours);
	printf("enter hourly rate of employee\n"); 
	printf("enter witheled salary on percentage\n");
scanf("%f %f",&hoursrate,&witheled);
gpay=numhours*hoursrate;
witheled=(witheled/100)*gpay;
npay=gpay-witheled;
printf("the gross salary is :%f\n",gpay);
printf("the net pay is:%f",npay);
}
