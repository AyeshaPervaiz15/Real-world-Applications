#include <stdio.h>

int main() {
    printf("Program for Calculating Bonus with If statements");
    int salary, workingHours, bonus =0 , totalSalary = 0;
    salary = 2000;

    printf("\nEnter your Working Hours: ");
    scanf("%d", &workingHours);
    if (workingHours < 5){
        bonus = 1000;
    }

    if (workingHours <= 10 && workingHours >5){
        bonus = 2500;
    }

    if(workingHours <= 15 && workingHours > 10 ){
        bonus = 3000;
    }

    if(workingHours > 15){
        bonus = 4000;
    }
    totalSalary = salary + bonus;
    printf("\n%d", totalSalary);
    return 0;
}
