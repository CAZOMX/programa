#pragma once

#include<iostream>
#include<conio.h>
#include<Windows.h>

class  Figura {
private:
    int x, y;
    char character;
public:
    Figura(char character, int x, int y) {
  this->character = character;
  this->x = x;
  this->y = y;
    };
    int getX();
    int getY();
    char getCharacter();
    virtual void draw() = 0;
};
// clase cuadradolas caracteristicas de la clase padre figura
class Cuadrado :
    public Figura {
private:
    int lado, fill;
public:
    Cuadrado(char character, int x, int y, int lados, int fill) :
      Figura(character, x, y) {
      this->lado = lado;
      this->fill;
    };
    int getlado();
    int getFill();
    void draw();
};
// clase triangulo hereda las caracteristicas de la case padre figura
class Triangulo : 
    public Figura {
private:
    int altura;
public:
    Triangulo(char character, int x, int y, int altura) :
       Figura(character, x, y) {
       this->altura = altura;
    };
    int getaltura();
    void draw();
};
// clase circulo las caracteristicas de la case padre figura
class Circulo : 
    public Figura {
private:
    int radio;
public:
    Circulo(char character, int x, int y, int radio) : 
       Figura(character, x, y) {
       this->radio = radio;
    };
    int getradio();
    void draw();
};