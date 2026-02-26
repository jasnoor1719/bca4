#include<stdio.h>
int main()
{
    float basicsalary,bonus=0,sales,netsalary;
    printf("harmanjot singh\n");
    printf("2410997135\n");
    printf("enter the value of basicsalary\n");
    scanf("%f",&basicsalary);
    printf("enter the value of sales\n");
    scanf("%f",&sales);
    if(basicsalary>8000)
    {
        if(sales==500){
            bonus=basicsalary*20/100;
        }
        else{
            bonus=0; //no bonus
        }
    }else if (basicsalary>=6000&&basicsalary<=8000)
{
    if (sales==200){
        bonus=basicsalary*15/100;
    }
    else{
        bonus=basicsalary*5/100;
    }
}  else if (basicsalary<=4000 && basicsalary<=6000)
{
    if(sales==100){
        bonus=basicsalary*10/100;
    }
    else{
        bonus=basicsalary*5/100;
    }
}else if( basicsalary<4000)
{
    if(sales==50)
    {
        bonus=basicsalary*5/100;
    }
      }
    else  {
        bonus=300;
    }
netsalary=basicsalary+bonus;
printf("the netsalary of the workers is:%f\n",netsalary);
}
