/**
 * ═══════════════════════════════════════════════════════════════════════
 *       Destructors | Destructores
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    [EN] Learning to use a destructor
 *    [ES] Aprendiendo a usar un destructor
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * ═══════════════════════════════════════════════════════════════════════
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Dog {
    private:
    string name;
    string race;

    public:
    Dog(string,string);//Constructor
    ~Dog();//Destructor

    void show_date();
    void jugar();

};

//Constructor
Dog :: Dog(string _name, string _race){
    name = _name;
    race = _race;
}

//Destructor
Dog ::~Dog(){
}

void Dog:: show_date(){
    cout<<"Nombre del perro: "<< name << endl;
    cout<<"Raza del perro: "<< race << endl;
}
void Dog:: jugar(){
    cout<<name<<" esta jugando"<<endl;
}

int main (){
    Dog p1 = Dog("Akiles","salchicha");
    Dog p2 = Dog("Rango","doberman");

    p1.show_date();
    p1.~Dog(); //Destruye el objeto
    p2.show_date();
    p2.jugar();
    

    system("pause");
    return 0;
}