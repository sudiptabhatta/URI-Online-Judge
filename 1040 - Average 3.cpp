#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float a, b, c, d, e;
    cin >> a >> b >> c >> d;
    float average = (a*2 + b*3 + c*4 + d*1)/(2+3+4+1);
    printf("Media: %0.1f\n", average);
    if(average >= 7.0){
        cout << "Aluno aprovado." << endl;
    } if(average < 5.0){
        cout << "Aluno reprovado." << endl;
    } if(average >= 5.0 && average <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> e;
        printf("Nota do exame: %0.1f\n", e);
        float reAverage = (average + e)/2;
        if(reAverage >= 5.0){
        	cout << "Aluno aprovado." << endl;
    		printf("Media final: %0.1f\n", reAverage);
        } else {
        	cout << "Aluno reprovado." << endl;
    		printf("Media final: %0.1f\n", reAverage);
        }
    }
    return 0;
}