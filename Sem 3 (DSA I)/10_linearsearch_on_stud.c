#include<stdio.h>
#include<string.h>
typedef struct stud
{
    char name[20];
    float percentage;
} stud;

int fileread(stud a[20])
{
    FILE *fp;
    int i=0;
    fp=fopen("stud.txt","r");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s%f", a[i].name, &a[i].percentage);
            i++;
        }
        fclose(fp);
    }
    return i;
}

int linearsearch(int n){
    stud a[20];
    char str[20];
    int index,flag=0;
    
    n=fileread(a);
  
    printf("Enter student name :- ");
    scanf("%s",str);
    
    for(int i=0;i<n;i++){
        if(strcmp(str,a[i].name)==0){
            flag=1;
            index=i;
        }
    }

    if(flag==1){
        printf("Student Percenetage :-  %f",a[index].percentage);
    }
    else{
        printf("student not in list");
    }
}

void main()
{
    int i, n;
    char key[20];
    stud a[20];

    n = fileread(a);

    linearsearch(n);
}

