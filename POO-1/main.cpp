//
//  main.cpp
//  POO-1
//
//  Created by Juan Renato on 23/08/24.
//

#include <iostream>
using namespace std;

class Persona {
    string nombre;
    string fechaNacimiento;
    double estatura;
    
public:
    Persona(string nombre, string fechaNacimiento, double estatura){
        this->nombre = nombre;
        this->fechaNacimiento = fechaNacimiento;
        this->estatura = estatura;
    }
    
    void saludar(string nombre){
        cout << "Hola mi nombre es " << nombre << endl ;
    }
    
    ~Persona(){
        cout << "Destruir" << endl ;
    }
};

int main(int argc, const char * argv[]) {
  
    Persona* persona1 = new  Persona("Juan", "2001-09-28", 1.78);
    persona1->saludar("Juan");
    
    delete persona1;
    
    return 0;
}
