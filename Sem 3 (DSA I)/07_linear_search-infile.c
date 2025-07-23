#include<stdio.h>
#include<string.h>
typedef struct city
{
    char name[20];
    int pincode;
} city;

int fileread(city a[20])
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

int linearsearch(int n){
    city a[20];
    char str[20];
    int index,flag=0;
    
    n=fileread(a);
  
    printf("Enter city name :- ");
    scanf("%s",str);
    
    for(int i=0;i<n;i++){
        if(strcmp(str,a[i].name)==0){
            flag=1;
            index=i;
        }
    }

    if(flag==1){
        printf("City Code :-  %d",a[index].pincode);
    }
    else{
        printf("City Not in list");
    }
}

void main()
{
    int i, n;
    char key[20];
    city a[20];

    n = fileread(a);

    linearsearch(n);
}

