// Write a C program to display memory size of the union

#include<stdio.h>
union stud{
    int rollno;
    char name[20];
    float salary;
} e;
void main(){
    printf("Size of the union is %d",sizeof(e));
}