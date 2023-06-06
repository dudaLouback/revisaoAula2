#include <iostream>
#include <stdlinb.h>

using namespace;

int calc(int numOne, inte numTwo, int calcOperador, int &aux){
    int result
    switch(calcOperador){
    case '+':
    result = numOne + numTwo;
    break;
    case '-':
    result = numOne - numTwo;
    break;
    case '*':
    result = numOne * numTwo;
    break;
    case '/':
    result = numOne / numTwo;
    break;
    default:
    aux = 0 ;
    return 0;
    }
    aux = 0;
    return result;
}

int main{
	int num1, num2, ;
	char operador;
	cout << "Escolha o primeiro número: \n";
	cin >> num1;
