// Write C program accept Bookid,Bookname,price from user and display it . Use Structure 

#include<stdio.h>
struct Books {
    int bid;
    char bname[20];
    float price;
} b;

void main(){
    printf("***Enter Book Details***\n\n");
    printf("Enter Book ID : ");
    scanf("%d",&b.bid);
    printf("Enter Book Name : ");
    scanf("%s",b.bname);
    printf("Enter Book Price : ");
    scanf("%f",&b.price);

    printf("\n***Book Details***\n\n");
    printf("Book ID :- %d\nBook Name :- %s\nBook Price :- %.2f\n",b.bid,b.bname,b.price);
}