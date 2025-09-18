#include<stdio.h>


int main ()
{

int arr[2][3];
int i =0, j=0;
for(i = 0; i < 2 ; i ++)
{
    for(j =0; j < 3 ; j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(i = 0; i < 2 ; i ++)
{   printf("\n");
    for(j =0; j < 3 ; j++)
    {
        printf("%d\t",arr[i][j]);
    }
}

return 0;
}
