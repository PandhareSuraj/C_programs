// Read the data from the file student.txt containing names of students and their phone numbers. Accept the name of a student from the user and use the linear search algorithm to check whether the name is present in the file and output the phone number; otherwise, output “student not in the list.ˮ

#include<stdio.h>
#include<string.h>

typedef struct stud {
    char name[20];
    int phone;
} stud;

int fileread(stud a[20]) {
    FILE *fp;
    int i = 0;
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 0;
    } else {
        while (fscanf(fp, "%19s%d", a[i].name, &a[i].phone) == 2) {
            i++;
        }
        fclose(fp);
    }
    return i;
}

void linearsearch(stud a[20], int n) {
    char str[20];
    int index, flag = 0;

    printf("Enter student name: ");
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        if (strcmp(str, a[i].name) == 0) {
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag == 1) {
        printf("Student Phone no.: %d\n", a[index].phone);
    } else {
        printf("Student not in list.\n");
    }
}

void main() {
    int n;
    stud a[20];

    n = fileread(a);
    
    linearsearch(a, n);
}

