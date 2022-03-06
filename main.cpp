#include <iostream>
#include <stdio.h>
#include"biblioteca.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv){
	 
	 int opcion, a, b;
	 
	 cout << "Ingrese el numero de la operacion a realizar: " << endl;
	 cout << "1.Suma" <<endl;
	 cout << "2.Division" <<endl;
	 cin >> opcion;
	 
	 cout << "Ingrese el primer numero: " <<endl;
	 cin >> a;
	 cout << "Ingrese el segundo numero: " <<endl;
	 cin >> b;
	 
	  if (opcion == 1){
	 	cout << "La suma es: " <<suma(a,b);
	 }
	  if (opcion == 2){
	 	cout << "La division es: " <<division(a,b);
	 }
	 cout << endl;
	 getchar();
	return 0;
}
