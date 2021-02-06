#include<iostream>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int number, worked_hours_amount;
    float amount_per_worked_hour;
    cin >> number >> worked_hours_amount >> amount_per_worked_hour;
    float salary = worked_hours_amount * amount_per_worked_hour;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %0.2f\n", salary);
    return 0;
}