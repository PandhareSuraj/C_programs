//program to input marks of 5 subjects,calculate grades

#include <stdio.h>

int main() {
    int p, c, m, b, co, total, per;
    
    printf("Enter marks of five subjects: \n");
    scanf("%d%d%d%d%d", &p, &c, &m, &b, &co);
    
    total = p + c + m + b + co;
    per = total / 5;

    if (per >= 90) {
        printf("Grade A\n");
    } else if (per >= 80) {
        printf("Grade B\n");
    } else if (per >= 70) {
        printf("Grade C\n");
    } else if (per >= 60) {
        printf("Grade D\n");
    } else if (per >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }
    
    return 0;
}
