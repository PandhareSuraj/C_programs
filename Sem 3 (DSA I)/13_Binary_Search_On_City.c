#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct city{
    char name[20];
    int pincode;
} city;


int ascfileread(city a[20])
{
    FILE *fp;
    int i=0;
    fp=fopen("cities.txt","r");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s%d", a[i].name, &a[i].pincode);
            i++;
        }
        fclose(fp);
    }
    return i;
}

int descfileread(city a[20])
{
    FILE *fp;
    int i=0;
    fp=fopen("cities2.txt","r");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s%d", a[i].name, &a[i].pincode);
            i++;
        }
        fclose(fp);
    }
    return i;
}

void ascbinarysearch(){
    int n,mid,first,last;
    char cname[20];
    city a[20];

    n=ascfileread(a);

    first = 0;
    last = n-1;

    for(int i=0; i<n; i++){
        printf("%s %d\n", a[i].name, a[i].pincode);
    }

    printf("\nEnter City: ");
    scanf("%s",&cname);

    while(first<=last)
    {
        mid=(first+last)/2;
        if(strcmp(cname,a[mid].name)==0)
        {
            printf("City Code: %d",a[mid].pincode);
            exit(0);
        }
        else if(strcmp(cname,a[mid].name)>0)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    printf("City Not In List\n");

}

void descbinarysearch(){
    int n,mid,first,last;
    char cname[20];
    city a[20];

    n=descfileread(a);

    first = 0;
    last = n-1;

    for(int i=0; i<n; i++){
        printf("%s %d\n", a[i].name, a[i].pincode);
    }

    printf("\nEnter City: ");
    scanf("%s",&cname);

    while(first<=last)
    {
        mid=(first+last)/2;
        if(strcmp(cname,a[mid].name)==0)
        {
            printf("City Code: %d",a[mid].pincode);
            exit(0);
        }
        else if(strcmp(cname,a[mid].name)<0)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    printf("City Not In List\n");

}


int main(){

    int i,flag=0;

    char key[20];

    city a[20];

    // ascbinarysearch();

    descbinarysearch();
}

