/*Swap the two string in C without using third string*/

#include <stdio.h>
#include<string.h>

int main()
{
    //char str1[150],str2[150];
    int i,length1, length2;
    length1=length2=0;
    char str1[200] = "Mahesh";
    char str2[200] = "Deshmukh";
    length1 = strlen(str1);
    length2 = strlen(str2);
    for(i = 0; i < (length2) ;i++)
    {
        str1[length1+i]= str2[i];
    }
    for(i=0;i<length1;i++)
    {
        str2[i] = 0;
    }
    for(i = 0; i < (length1) ;i++)
    {
        str2[i]= str1[i];
    }
    str2[i]= '\0';
    for(i = 0; i < (length2) ;i++)
    {
        str1[i]= str1[length1+i];
    }
    str1[i]= '\0';
    printf("\nstr 1 = %s",str1);
    printf("\nstr 2 = %s",str2);
	return 0;
}
