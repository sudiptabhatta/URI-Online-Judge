#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string a, b, c;
    cin >> a >> b >> c;
    if(a == "vertebrado"){
        if(b == "ave" && c == "carnivoro"){
            cout << "aguia" << endl;
        } else if(b == "ave" && c == "onivoro"){
            cout << "pomba" << endl;
        } else if(b == "mamifero" && c == "onivoro"){
            cout << "homem" << endl;
        } else if(b == "mamifero" && c == "herbivoro"){
            cout << "vaca" << endl;
        } 
    } else if (a == "invertebrado"){
        if(b == "inseto" && c == "hematofago"){
            cout << "pulga" << endl;
        } else if(b == "inseto" && c == "herbivoro"){
            cout << "lagarta" << endl;
        } else if(b == "anelideo" && c == "hematofago"){
            cout << "sanguessuga" << endl;
        } else if(b == "anelideo" && c == "onivoro"){
            cout << "minhoca" << endl;
        } 
    }
    
    return 0;
}