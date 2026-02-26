#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main()
{
	int secretno,guess,numberguess;
	printf("harmanjot singh");
	printf("2410997135");
int turns=5;
int turn=1;
	srand(time(0));
	numberguess=rand()%100+1;
   printf("Welcome to the Number Guessing Game!\n");
   printf("you have %d to guess numbers between 1 to 100 for a turn");
    while(turn<turns)
	 {
    	printf("enter your guess using %d\n",turn+1);
    	scanf("%d",&guess);
    	turn++;
    	if(guess<numberguess)
    	{
    		printf("your guess is too low \n");
    	}
		 	else if(guess>numberguess){
	printf("your guess is too high \n");  
	}
else
}
printf("your enter value is not right you lose the game ");
return 0;
    			
}


    
   
