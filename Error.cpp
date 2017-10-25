#include 
using namespace std;

class Clase { //Clase principal, cuenta con la variable numero
public:
int numero;
Clase(int x):numero(x){} //constructor de la Clase
};

class Clasedos :public virtual Clase{ //colocar virtual evita que se cree la misma variable(numero)repetidas veces y evitar un error de ambigüedad
public:
int numerodos;
Clasedos(int x,int y):Clase(x),numerodos(y){} //como esta puesto virtual, se debe declarar Clase en cada "hijo"
Clasedos(int y):numerodos(y),Clase(0){}

};

class Clasetres :public virtual Clase{ //colocar virtual evita que se cree la misma variable(numero)repetidas veces y evitar un error de ambigüedad
public:
int numerotres;
Clasetres(int x,int y):numerotres(y),Clase(x){} //como esta puesto virtual, se debe declarar Clase en cada "hijo"
Clasetres(int y):numerotres(y),Clase(0){}
};

class Clasecuatro : public Clasetres, Clasedos{
int numerocuatro;
public:
Clasecuatro(int x,int b,int c,int d):Clasetres(b),Clasedos(c),numerocuatro(d),Clase(x){} //igualmente en este "nieto", se debe llamar al constructor de la clase base

};

int main(){
Clasecuatro a(1,2,3,4);
a.numero=2;
cout<<a.numero;
return 0;
}
