#include<stdio.h>

int main(){

    unsigned int x = 1;
    char *c = (char*)&x;


    if(*c ==1)
        printf("Little endian");
    else    
        printf("Big endian");

        return 0;

}