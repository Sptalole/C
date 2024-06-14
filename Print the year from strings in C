// C Program to find the total
// number of distinct flags
#include <stdio.h>
#include <string.h>

// function to find the total
// number of distinct flags
int calculate_year(char *input)
{
	char str2[10];
	char str3[10];
	int i,count, flag;
	i= count = flag = 0;

    while(*input)
    {
        //add in string if character is digit
        if ((*input >= '0') && (*input <='9'))
		{
		    if(flag == 0)
            {
                count++;
                str2[i] = *input;
                i++;
            }
            else
            {
                str3[i] = *input;
                count++;
                i++;
            }
		}
		else if (*input == '-')
        {
            count =i= 0;
            if(flag == 0)
                str2[0]= '\0';
            str3[0]= '\0';
        }
        if(count == 4)
        {
            flag++;
            i =count = 0;
            count=0;
        }
        input++;
    }

    printf("Str2=%s\nStr3=%s\n",str2,str3);

    //check both the year from string if its same then reduce flag by 1
    if(strcmp(str2,str3)==0)
        flag--;

	return flag;
}

// Driver code
int main()
{
    char *str = "UN was established on 24-10-1945."
                "India got freedom on 15-08-1945.";

	 printf("Year Count = %d",calculate_year(str));

	return 0;
}
