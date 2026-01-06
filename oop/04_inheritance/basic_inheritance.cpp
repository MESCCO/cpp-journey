/**
 * ═══════════════════════════════════════════════════════════════════════
 *    Inheritance | Herencia
 * ═══════════════════════════════════════════════════════════════════════
 * 
 *    [EN] Introduction to class inheritance
 *    [ES] Introducción a la herencia de clases
 * 
 *    Author: MESCCO
 *    Date: January 2026
 * ═══════════════════════════════════════════════════════════════════════
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Person{
    private://Atributes
    string name;
    int age;
    public://Cosntructor
    Person(string,int);
    void show_person();
};

class Student : public Person{
    private:
    string studentCode;
    float finalScore;
    public:
    Student(string,int,string,float);
    void show_student();
};

Person :: Person(string _name,int _age){
    name = _name;
    age = _age;
}

Student ::Student(string _name,int _age,string _studentCode,float _finalScore) : Person(_name,_age){
    studentCode = _studentCode;
    finalScore = _finalScore;
}

void Person:: show_person(){
    cout<<"My name is: "<<name<<endl;
    cout<<"My age is : "<<age<<endl;
}

void Student :: show_student(){
    show_person();
    cout<< "My student code is: " << studentCode << endl;
    cout<< "My fianl Score is: " << finalScore << endl;
}


int main (){
    Person person1 = Person("Mescco",20);
    Student student1 = Student("Mescco",20,"246197",18.8);

    person1.show_person();
    student1.show_student();

    system("pause");
    return 0;
}
