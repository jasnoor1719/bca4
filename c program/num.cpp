#include<stdio.h>
#include<string.h>
int main()
{
	int num,sum,r;
	printf("name=jasnoor kaur\n");
	printf("roll no=2410997165\n");
	printf("enter a number whose sum you need");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
printf("the sum is %d",sum);
switch(sum)
{

	case 1:
		printf("the sum of given number is one");
		break;
		case 2:
		printf("the sum of given number is one");
      	break;	
		case 3:
		printf("the sum of given number is one");
	   	break;
		case 4:
		printf("the sum of given number is one");
			break;	
		case 5:
		printf("the sum of given number is one");
			break;		
		case 6:
		printf("the sum of given number is one");	
			break;		
		case 7:
		printf("the sum of given number is one");
			break;
		case 8:
		printf("the sum of given number is one");	
			break;
		case 9:	
		printf("the sum of given number is one");
		break;
		default:
		printf("the sum is bigger than digit 9.");
			
}
}
