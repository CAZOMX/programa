#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include"figuras.h"
#include"Programa.h"

using namespace std;
void Programa::inicio() {
	menu();
}
void Programa::menu()
{
	int opc = 1, * ptrfig;
	int x=0, y=0, lado, altura, radio, fill=2;
	char q='-';

	cout << "Carlos Andres zuniga Ojeda 2-O 22110091" << endl;
	cout << "Proyecto Programacion orientada Objetos" << endl;
		system("PAUSE");
		system("CLS");
		while (opc == 1)
		{
			ptrfig = new int;
			cout << "que figura deseas dibujar"<< endl;
			cout << " 1 -> cuadrado" << endl;
			cout << " 2 -> triangulo" << endl;
			cout << " 3 -> circulo" << endl;
			cin >> *ptrfig;
			system("cls");
			if (*ptrfig == 1) {
				do {
					cin >> fill;
					system("cls");
					cout << "introduce el lado del cuadrado ";
					cin >> lado;
					system("cls");
				} while (lado <= 0);
				//inicializamos el puntero para el cuadrado con su direccion de memoria y se dibuje en la pantalla
				Cuadrado* s = new Cuadrado(q, x, y, lado, fill);
				s->draw();
				delete s;
			}
			if (*ptrfig == 2) {
				do {
					cout << "introduce la altura de el triangulo";
					cin >> altura;
					system("cls");
				} while (altura <= 0);
				//inicializamos el puntero para el cuadrado con su direccion de memoria
				Triangulo* t = new Triangulo(q, x, y, altura);
				t->draw();
				delete t;
			}
			if (*ptrfig == 3) {
				do {
					cout << "Introduce el radio del circulo";
					cin >> radio;
					system("cls");
				} while (radio <= 0);
				//inicializamos el puntero para el cuadrado con su direccion de memoria
				Circulo* c = new Circulo(q, x, y, radio);
				c->draw();
				delete c;
			}

	}
}