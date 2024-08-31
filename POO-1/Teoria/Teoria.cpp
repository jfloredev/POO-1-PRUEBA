//
//  Teoria.cpp
//  POO-1
//
//  Created by Juan Renato on 26/08/24.
//

#include "Teoria.hpp"
#include "iostream"

#include "vector"
using namespace std;

enum class Color {
    Rojo,
    Verde,
    Azul
};

void mostrarColor(Color parm1){
    switch (parm1) {
        case Color::Azul:
            cout << "El color elegindo es el azul "<<static_cast<int>(parm1) << endl;
            break;
        case Color::Rojo:
            cout << "El color elegindo es rojo " <<static_cast<int>(parm1)<< endl;
            break;
        case Color::Verde:
            cout << "El color elegindo es el verde "<<static_cast<int>(parm1) << endl;
            break;
        default:
            break;
    }
};

struct Point1 {

private:
    int x = 0;
    int y = 0;
public:
    
    Point1(int x, int y): x(x), y(y){
    };
    
};


class PointClass {
    int x = 0;
    int y = 0;
    
    
    /*
     por defecto
     por copia
     por asignacion
     por muf
     por parametro
     */
};


void ejemplo(){
    

    PointClass p2;

}


struct par {
    int first = 0;
    int second = 0;
};


void ejemplo3(){
    
    pair<int , double> p1 = {10, 20};
    pair<int , double> p2;
    
    
}




void print(const vector<int>& v){
    
    for (const auto& item  : v) {
        cout << item << " ";
    }
}




void ejemplov(){
    vector<int> v = {10, 30, 40};
    print(v);
}


vector<int> concatenar(vector<int>& v1, vector<int>& v2){
    vector<int> v3;
    for(int i = 0; i < v1.size(); i++){
        v3.push_back(v1[i]);
    }
    for(int i = 0; i < v2.size(); i++){
        v3.push_back(v2[i]);
    }
    return v3;
}

void ejemplo5(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};
    vector<int> v3 = concatenar(v1, v2);
}


int main(){


    ejemplo5();

    return 0;
}
