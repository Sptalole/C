#include<stdio.h>
int main()
{
int a,b,number,sum =0;
a =0 ;
b =1;
printf("\nLength you wanted to print fibonacci series\n");
scanf("%d",&number);
printf("\n%d",a);
while (number)
{
    a = sum;
    sum = b + sum;
    b = a;
    printf(" %d",sum);
    number --;
}

}
