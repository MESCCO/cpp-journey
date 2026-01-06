/**
 * ═══════════════════════════════════════════════════════════════════════
 *    Classes in C++ | Clases en C++
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    Exercise 1: Rectangle Class
 *    Ejercicio 1: Clase Rectángulo
 * 
 *    [EN] Build a class called Rectangle with attributes: length and width,
 *         and methods: perimeter() and area()
 *    [ES] Construir una clase llamada Rectangulo con atributos: largo y ancho,
 *         y métodos: perimetro() y area()
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * 
 * ═══════════════════════════════════════════════════════════════════════
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangle{
    private: 
    float length;
    float width;

    public:
    Rectangle(float ,float );
    void perimeter();
    void area();
};

Rectangle::Rectangle(float _length,float _width){
    length = _length;
    width = _width;
}
void Rectangle::perimeter(){
    cout<<"The perimeter of the rectangle is "<<(length*2) + (width*2)<<" m"<<endl;
}

void Rectangle::area(){
    cout<<"The area of the rectangle is "<<length * width<<" m2"<<endl;
}

int main(){
    Rectangle p1 = Rectangle(20,30);
    Rectangle p2(20,40);
    Rectangle p3(70,90);

    p1.perimeter();
    p2.area();

    p3.perimeter();
    p3.area();

    system("pause");
    return 0;
}