#include <iostream>
#include<conio.h>
#include <cctype>
using namespace std;

main() {
    double a,b;
    char operador;
    cout<<"***** CALCULADORA *****"<<endl;
    cout<<"+) Suma "<<endl;
    cout<<"-) Resta "<<endl;
    cout<<"*) Multiplicacion "<<endl;
    cout<<"/) Division "<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    if (cin.fail()) {
    cout<<"Error: entrada invalida. Ingrese solo numeros." << endl;
    return 0;
    }
    if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
	cout<<"Ingrese el operador (+, -, *, /): "<<endl;
    cin>>operador;
	}
	if (cin.fail()) {
    cout<<"Error: entrada invalida. Ingrese solo numeros." << endl;
    return 0;
    }
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    if (cin.fail()) {
    cout<<"Error: entrada invalida. Ingrese solo numeros." << endl;
    }
    switch (operador) {
    case '+':
    cout<<"Resultado: "<<a+b<< endl;
    break;
    case '-':
    cout<<"Resultado: " <<a-b<< endl;
    break;
    case '*':
    cout<<"Resultado: " <<a*b<< endl;
    break;
    case '/':
    if (b != 0) {
    cout<<"Resultado: "<<a/b<<endl;
    } else {
    cout<<"Error: division entre cero no esta definida."<<endl;
    }
    break;
    default:
    cout<<"Error: operador invalido." << endl;
    break;
    }
    getch();
}

