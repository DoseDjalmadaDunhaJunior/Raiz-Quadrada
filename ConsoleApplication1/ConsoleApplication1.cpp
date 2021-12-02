/*
A ideia desse algoritmo gira em torno da logica X1 = X0 - (F(X0)/F'(X0))
X0 = um chute da resposta
F(XO) = valor montado da seguinte forma x^(potencia da raiz) - valor de dentro da raiz
F'(0) = valor de cima derivado
*/

#include <iostream>
#include <math.h>
using namespace std;
float raizQuadrada(float valor, float chute) {
    float resp = chute;
    for (int i = 0; i < 10; i++) {
        resp = resp - (pow(resp,2) - valor) / (2 * resp);
    }
    return resp;
}

float raizCubica(float valor, float chute) {
    float resp = chute;
    for (int i = 0; i < 10; i++)
    {
        resp = resp - (pow(resp,3) - valor) / (3* pow(resp,2));
    }

    return resp;
}


int main()
{
    //cout << raizQuadrada(25, 2)<<endl;
    cout << raizCubica(1000, 9) << endl;
    //cout << "Hello World!\n";
}