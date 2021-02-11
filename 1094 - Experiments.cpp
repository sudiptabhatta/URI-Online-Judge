#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, amount, total = 0, Coelho = 0, Rato = 0, Sapo = 0;
    char type;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> amount >> type;
        total = total + amount;
        if(type == 'C'){
            Coelho = Coelho + amount;
        }
        if(type == 'R'){
            Rato = Rato + amount;
        }
        if(type == 'S'){
            Sapo = Sapo + amount;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", Coelho);
    printf("Total de ratos: %d\n", Rato);
    printf("Total de sapos: %d\n", Sapo);
    printf("Percentual de coelhos: %0.2f %\n", ((float)Coelho/(float)total)*100.00);
    printf("Percentual de ratos: %0.2f %\n", ((float)Rato/(float)total)*100.00);
    printf("Percentual de sapos: %0.2f %\n", ((float)Sapo/(float)total)*100.00);
    
    return 0;
}