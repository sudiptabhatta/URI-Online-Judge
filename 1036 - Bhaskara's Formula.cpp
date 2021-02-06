#include <bits/stdc++.h>
using namespace std;
 
int main() {
	double A,B,C;
	cin >> A >> B >> C;
	double x = pow(B, 2) - 4*A*C;
	
	if(x < 0 || A == 0){
		cout << "Impossivel calcular" << endl;
	} else {
		double result1 = (-B + sqrt(x))/(2*A);
		double result2 = (-B - sqrt(x))/(2*A);
		printf("R1 = %0.5f\n", result1);
		printf("R2 = %0.5f\n", result2);
	}
	
}