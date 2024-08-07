//Employee record should contain employee name , no.  And department...you have to use structure for this...in main create object and pass it to function and get initialize it there and print in main?

#include<stdio.h>
#include<string.h>

struct employee{
 char name[50];
 int id_no;
 char department[50];
};

void fillstruct(struct employee *emp, const char *name, int no, const char *dept){
    strncpy(emp->name, name, sizeof(emp->name) -1);
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
