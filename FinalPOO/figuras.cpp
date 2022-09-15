#include "figuras.h"
#include <iostream>
#include<iomanip>
#include<conio.h>
#include<Windows.h>

using namespace std;
int Cuadrado::getlado() 
{
	return lado;
}
int Cuadrado::getFill()
{
	return fill;
}
void Cuadrado::draw()
{
	char cha, matrix[100][100];
	int x, y, s, f;
	int i = 0, j = 0;
	cha = getCharacter();
	s = getlado();
	f = getFill();
	x = getX();
	y = getY();
	char opcion = _getch();
	while (opcion != 'e') {
		system("cls");
		cout << "E -> Salir\t";
		for (i; i < s; i++) {
			for (j = 0; j < s; j++) {
				if (f == 0) {
					if (i == 0 || j == 0 || i == s - 1 || j == s - 1) {
						matrix[i][j] = cha;
					}
					else {
						matrix[i][j] = ' ';
					}
				}
				else {
					matrix[i][j] = cha;
				}
			}
		}
		for (i = 1; i < y; i++) cout << " " << endl;
		for (i = 0; i < s; i++) {
			cout << setw(x);
			for (j = 0; j < s; j++) {
				cout << matrix[i][j];
			}
			cout << "   " << endl;
		}
		opcion = _getch();
		switch (opcion) {
		case 'w': y--; break;
		case 's': y++; break;
		case 'a': x--; break;
		case 'd': x++; break;
		}
	}
}
char Figura::getCharacter() {
	return character;
}
int Triangulo::getaltura() {
	return altura;
}

void Triangulo::draw() {
	char cha;
	int x, y, h;
	int i = 0, j = 0;
	cha = getCharacter();
	h = getaltura();
	x = getX();
	y = getY();
	char opcion = _getch();

	while (opcion != 'e') {
		system("cls");
		cout << "E -> Salir\t";
		for (i = 1; i < y; i++) cout << " " << endl;
		for (i = 1; i <= h; i++) {
			cout << setw(x);
			for (j = 1; j <= h - i; j++) cout << " ";
			for (j = 1; j <= 2 * i - 1; j++) cout << cha;
			cout << endl;
		}
		opcion = _getch();
		switch (opcion) {
			case 'w': y--; break;
		case 's': y++; break;
		case 'a': x--; break;
		case 'd': x++; break;
		}
	}
}
int Circulo::getradio() {
	return radio;
}
void Circulo::draw() {
	char cha;
	int x, y, r;
	int i = 0, j = 0;
	cha = getCharacter();
	r = getradio();
	x = getX();
	y = getY();
	char opcion = _getch();

	while (opcion != 'e') {
		system("cls");
		cout << "E -> Salir\t";
		for (i = 1; i < y; i++) cout << " " << endl;
		for (j = 0; j <= r * 2; j++) {
		cout << setw(x);
		for (i = 0; i <= r * 2; i++) {
	if (pow(i - r, 2) + pow(j - r, 2) <= pow(r, 2)) cout << cha;
		else cout << " ";
			}
		cout << endl;
		}
		opcion = _getch();
		switch (opcion) {
		case 'w': y--; break;
		case 's': y++; break;
		case 'a': x--; break;
		case 'd': x++; break;
		}
	}
}

int Figura::getX() {
	return x;
}

int Figura::getY() {
	return y;
}

