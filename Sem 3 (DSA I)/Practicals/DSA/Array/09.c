// Read the data from the file cities.txt containing names of cities and their STD codes. Accept the name of a city from the user and use the linear search algorithm to check whether the name is present in the file and output the STD code; otherwise, output “city not in the list.ˮ

#include<stdio.h>
#include<string.h>

typedef struct city {
    char city[20];
    char std[10];  
} city;

int fileread(city a[20]) {
    FILE *fp;
    int i = 0;
    fp = fopen("cities.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 0;
    } else {
        while (fscanf(fp, "%19s %9s", a[i].city, a[i].std) == 2) {
            i++;
        }
        fclose(fp);
    }
    return i;
}

void linearsearch(city a[20], int n) {
    char str[20];
    int flag = 0;

    printf("Enter city name: ");
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        if (strcmp(str, a[i].city) == 0) {
            flag = 1;
            printf("City STD code: %s\n", a[i].std);
            break;
        }
    }

    if (flag == 0) {
        printf("City not in list.\n");
    }
}

void main() {
    city a[20];
    int n = fileread(a);
    
    if (n > 0) {
        linearsearch(a, n);
    } else {
        printf("No data available.\n");
    }
}
