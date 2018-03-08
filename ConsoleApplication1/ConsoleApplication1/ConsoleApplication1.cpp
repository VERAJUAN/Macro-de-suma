// ConsoleApplication1.c
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>

#define MAX(a, b) ((a)>(b)?(a):(b)) //el condicional ternario está encerrado entre paréntesis, lo que significa que se va a realizar dicha condicional cuando se llame al macro.
#define MAX2(a, b)  a > b ? a : b  //el condicional ternario no está encerrado entre paréntesis, por lo tanto se interpreta como un elemento más

#define SUM(a,b) (a + b)
#define SUM2(a,b) a + b


int f() { 
	return 3;
}

void main(void) {

	int x = 3;
	int m1 = MAX(x, f() + 1) * 2; //m1 toma el valor *2 de x o del retorno de la función f +1, según cuál es mayor.
	int m2 = MAX2(x, f() + 1) * 2; //m2 toma el valor de b sumado 1*2 (se multiplican estos haciendo que al valor retornado por f se le sume 2), obvia la x, y hace que sea igual que escribirlo como MAX2(x, f()) + 1 * 2. 
	int s1 = SUM(x, f() + 1) * 2; //s1 realiza la suma de (x + f() + 1) *2
	int s2 = SUM2(x, f() + 1) * 2; //s2 toma el valor de la suma de (f()+1) * 2, obvia la x.
	
	printf("%i\n", m1); //Imprimirá el valor entero almacenado en m1, consecuencia del macro con la condicional cerrada por paréntesis.
	printf("%i\n", m2); //Imprimirá el valor entero almacenado en m2, consecuencia del macro con la condicional sin cerrar con paréntesis.
	printf("%i\n", s1); //Imprimirá el valor entero almacenado en s1, consecuencia del macro con la sumatoria cerrada por paréntesis.
	printf("%i\n", s2); //Imprimirá el valor entero almacenado en s1, consecuencia del macro con la sumatoria sin cerrar con paréntesis.

	system("pause");


}

