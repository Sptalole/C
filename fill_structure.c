// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct mark_record
{
    int math;
    int hindi;
    int science;
};
struct student_record
{
    char name[20];
    int roll_no;
    int dob;
    struct mark_record mark;
};

// how to fetch data of all element.

int main()
{
    // Write C code here

    struct student_record obj;
    struct student_record *obj2;
    obj2 = &obj;
    obj.roll_no = 10;
    obj.dob = 15011995;
    strcpy(obj.name, "sagar");
    // obj.name = "sagar";
    obj.mark.math = 90;
    obj.mark.hindi = 83;
    obj.mark.science = 95;

    printf("\nStudent mark in math = %d\n", obj2->mark.math);
    printf("Student mark in hindi = %d\n", obj2->mark.hindi);
    printf("Student mark in science = %d\n", obj2->mark.science);
    printf("Student name = %s\n", obj2->name);
    printf("Student dob =%d\nRoll_no=%d\n", obj2->dob, obj2->roll_no);
    return 0;
}

/*OUTPUT*/
/*
Student mark in math = 90
Student mark in hindi = 83
Student mark in science = 95
Student name = sagar
Student dob =15011995
Roll_no=10
*/
