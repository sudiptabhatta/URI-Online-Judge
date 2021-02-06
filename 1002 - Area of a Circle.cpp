#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    double R;
    cin >> R;
    double area = pi * R * R;
    printf("A=%0.4f\n",area);
    return 0;
}