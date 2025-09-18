#include<stdio.h>

int nth_prime(int num)
{
    int PrimeCount =0,i =0, flag,prime = 1;
    while (PrimeCount != num)
    {
        flag = 0;
        prime++;
        for(i = 2 ; i <= (prime/2); i++)
        {
             if((prime % i)== 0)
             {
               flag = 1;
             }
        }

        if(flag == 0)
            PrimeCount++;

    }
    return prime;

}

int main ()
{
    int num;
    printf("Enter nth position");
    scanf("%d",&num);

    printf("%d",nth_prime(num));
    return 0;


}
