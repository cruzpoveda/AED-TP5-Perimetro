/* Programa Perimetro, calcula el Perimetro de un rectangulo utilizando dos funciones
* Juan Cruz Poveda
* 13/5/15
*/

#include <iostream>

using namespace std;

float ingreso(){
	float aux=0;
	do{
		cout << "\nIngrese un numero:\n";
		cin >> aux;
	}while(aux <= 0);
	return aux;
}

float perimetro(float la, float lb){
	return la*2+lb*2;
}

int main(int argc, char** argv) {
	float la, lb;
	cout << "Programa para calcular el area de un rectangulo:";
	la = ingreso();
	lb = ingreso();
	cout << "\nEl perimetro de su rectangulo es:\n" << perimetro(la,lb);
	return 0;
}

