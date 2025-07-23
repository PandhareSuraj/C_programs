// Write C program to Calulate Employee Salary using Structure . 

// DA =50 % of Basic , HRA = 10 % of Basic , IT = 5 % of Basic , PT = 2 % of Basic

#include <stdio.h>
struct employee {
    int eid;
    char name[20];
    float basic;
    float DA;
    float HRA;
    float IT;
    float PT;
    float sal;
} e[50];

int main() {
    int n, i;
    printf("Enter how many records: \n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("\nEnter Employee Record no. %d\n", i+1);
        printf("Enter employee id: \n");
        scanf("%d", &e[i].eid);
        printf("Enter employee name: \n");
        scanf("%s", e[i].name);
        printf("Enter employee basic: \n");
        scanf("%f", &e[i].basic);
        e[i].DA = e[i].basic * 0.50;
        e[i].HRA = e[i].basic * 0.10;
        e[i].IT = e[i].basic * 0.05;
        e[i].PT = e[i].basic * 0.02;
        e[i].sal = e[i].basic + e[i].DA + e[i].HRA - e[i].IT - e[i].PT;
    }

    printf("\n\n***Employee Details***\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("EID \t\t Ename \t\t Ebasic \t\t DA \t\t\t HRA \t\t IT \t\t PT \t\t Total Salary \n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",
            e[i].eid, e[i].name, e[i].basic, e[i].DA, e[i].HRA, e[i].IT, e[i].PT, e[i].sal);
    }
    return 0;
}
