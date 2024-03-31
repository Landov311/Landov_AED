#include <iostream>
using namespace std;

class vdj{
private:
    int precio;
int rate;
string name;
public:
    vdj(int ,int ,string );
    void nombre_v();
    void rating_v();
    void precio_v();
};

vdj::vdj(int pr, int ra, string na){
precio=pr;
rate=ra;
name=na;
}
void vdj::nombre_v(){
    cout<<"El nombre del videojuego es:"<<name<<endl;
}
void vdj::precio_v(){
    cout<<"El precio del videojuegos es:"<<precio<<endl;
}
void vdj::rating_v(){
    cout<<"El rate del videojuegos es:"<<rate<<endl;
}

int main() {

    int a;
    int b;
    int trozos;
    double fal;
    double ti;
    cout << "ingrese el # de personas:";
    cin >> a;
    cout << "ingrese el # de pizzas:";
    cin >> b;
    trozos = b * 8;
    ti = trozos / a;
    fal = trozos % a;
    cout << "Cada persona tiene:" << ti << endl;
    cout << "Trozos faltantes:" << fal;

    vdj ma(120,9,"mario kart 8");
    ma.nombre_v();
    ma.precio_v();
    ma.rating_v();

    return 0;
}
