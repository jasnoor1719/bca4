#include<iostream>
using namespace std;

int power(int base,int exponent)
{
if(exponent==0)
return 1;
else
return base*power(base,exponent-1);
}
int sumofnumbers(int num) {
   
    if (num == 1)
        return 1;
    else
    return num + sumofnumbers(num - 1);
}

int main(){
int exponent,base;
cout<<"khushi\n";
cout<<"2410997187\n";
cout<<"enter the exponent ";
cin>>exponent;
cout<<"enter the base";
cin>>base;
cout << base<<"raised to the power of " << exponent << " is " << power(base, exponent) << endl;
int sum=sumofnumbers(10);
cout<<"sum 0f 10 numbers\n"<<sum;
return 0;
}




