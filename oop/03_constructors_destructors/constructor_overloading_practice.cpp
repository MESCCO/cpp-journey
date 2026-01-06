/**
 * ═══════════════════════════════════════════════════════════════════════
 *    Constructor Overloading | Sobrecarga de Constructores
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    Exercise 1: Time Class
 *    Ejercicio 1: Clase Tiempo
 * 
 *    [EN] Build a Time class with integer attributes: hours, minutes, seconds.
 *         The class must contain 2 constructors:
 *         - First: Time(int, int, int) with three parameters
 *         - Second: Time(int) with only seconds, which breaks down the integer
 *           into hours, minutes and seconds
 *    [ES] Construir una clase Tiempo con atributos enteros: horas, minutos, 
 *         segundos. La clase debe contener 2 constructores:
 *         - Primero: Tiempo(int, int, int) con tres parámetros
 *         - Segundo: Tiempo(int) con solo segundos, que desensambla el número
 *           entero en horas, minutos y segundos
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * 
 * ═══════════════════════════════════════════════════════════════════════
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Time {

    private:
    int hours;
    int minutes;
    int seconds;
    
    public:
    Time(int,int,int);
    Time(long);

    void show_time();

};

Time ::Time(int _hours,int _minutes,int _seconds){
    hours = _hours;
    minutes = _minutes;
    seconds = _seconds;
}

Time ::Time(long _time){
    hours = int(_time/3600);
    minutes = int((_time - (hours*3600))/60);
    seconds = int(_time - ((hours*3600)+(minutes*60)));
}

void Time::show_time() {
    cout<<"The time is: "<< hours <<":"<<minutes<<":"<<seconds<<endl; 
}

int main(){
    Time p1 = Time(12,11,34);
    Time p2 = Time(43894);

    p1.show_time();
    p2.show_time();

    system("pause");
    return 0;
}