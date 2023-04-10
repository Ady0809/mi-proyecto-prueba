#include <iostream>
#include <math.h>
using namespace std;

long int calcCuadrado(int num);

float calcularRaiz(int num);

long int calcCuadrado(int num){
    return pow(num, 2);
}
float calcularRaiz(int num){
    return sqrt(num);
}
