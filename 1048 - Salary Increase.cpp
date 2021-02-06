#include <iostream>
 
using namespace std;
 
int main() {
    float salary, newSalary, moneyEarned;
    cin >> salary;
    int percentage;
    if(salary >= 0 && salary <= 400.00){
        percentage = 15;
        moneyEarned = salary*0.15;
        newSalary = salary + moneyEarned;
        printf("Novo salario: %0.2f\n", newSalary);
        printf("Reajuste ganho: %0.2f\n", moneyEarned);
        printf("Em percentual: %d %\n", percentage);
    } else if(salary >= 400.01 && salary <= 800.00){
        percentage = 12;
        moneyEarned = salary*0.12;
        newSalary = salary + moneyEarned;
        printf("Novo salario: %0.2f\n", newSalary);
        printf("Reajuste ganho: %0.2f\n", moneyEarned);
        printf("Em percentual: %d %\n", percentage);
    } else if(salary >= 800.01 && salary <= 1200.00){
        percentage = 10;
        moneyEarned = salary*0.1;
        newSalary = salary + moneyEarned;
        printf("Novo salario: %0.2f\n", newSalary);
        printf("Reajuste ganho: %0.2f\n", moneyEarned);
        printf("Em percentual: %d %\n", percentage);
    } else if(salary >= 1200.01 && salary <= 2000.00){
        percentage = 7;
        moneyEarned = salary*0.07;
        newSalary = salary + moneyEarned;
        printf("Novo salario: %0.2f\n", newSalary);
        printf("Reajuste ganho: %0.2f\n", moneyEarned);
        printf("Em percentual: %d %\n", percentage);
    } else if(salary >= 2000.00){
        percentage = 4;
        moneyEarned = salary*0.04;
        newSalary = salary + moneyEarned;
        printf("Novo salario: %0.2f\n", newSalary);
        printf("Reajuste ganho: %0.2f\n", moneyEarned);
        printf("Em percentual: %d %\n", percentage);
    } 
    
    return 0;
}