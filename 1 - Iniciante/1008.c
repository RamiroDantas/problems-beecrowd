// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int id, workHours;
    double hourValue, salary;
    
    scanf("%d\n %d\n %lf", &id, &workHours, &hourValue);
    
    salary = hourValue * workHours;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}