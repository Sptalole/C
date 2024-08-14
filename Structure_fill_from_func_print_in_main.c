//Employee record should contain employee name , no.  And department...you have to use structure for this...in main create object and pass it to function and get initialize it there and print in main?

#include<stdio.h>
#include<string.h>

struct employee{
 char name[50];
 int id_no;
 char department[50];
};

void fillstruct(struct employee *emp, const char *name, int no, const char *dept){
    
/*If the string name we have passed through func want to copy to dynamic string so the steps are from line 15 to 20. Otherwise only 19 and 20 line are enough*/
    int size = sizeof(emp->name);
    char *str = (char*) malloc(sizeof(char) * size);
    strncpy(str, name, sizeof(emp->name) -1);
    printf("String = %s",str);
    strncpy(emp->name, str, sizeof(emp->name) -1);
    emp->name[sizeof(emp->name)-1] = '\0';
    emp->id_no= no;
    strncpy(emp->department, dept, sizeof(emp->department) -1);
    emp->department[sizeof(emp->department)-1] = '\0';
}

void printstruct(struct employee *emp){
    printf("%s\n",emp->name);
    printf("%d\n",emp->id_no);
    printf("%s\n",emp->department);
}
int main()
{
    struct employee emp;

    fillstruct(&emp, "SAGAR",123, "IT");
    printstruct(&emp);
}
