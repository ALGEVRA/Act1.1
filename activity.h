// =================================================================
//
// File: activity.h
// Author: Francisco Alejandro Velazquez Ledesma
// Date: 23/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <iostream>
using namespace std;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) ya que encontramos un ciclo for dentro del algoritmo y tiene su rango de repeticion en terminos de n, ademas // observamos que la variable de control unicamente se le suma una constante.
// =================================================================
	unsigned int sumaIterativa(unsigned int n) {
		int suma = 0;
		for(int i=1;i<=n;i++)
		{
			suma += i;
		}
		return suma;
	}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) debido a que tenemos una sola llamada recursiva en ejecución y su parámetro de control se le decrementa un valor constante.
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	int suma;
	if (n == 1) //Caso Base
	{
		suma = 1;
	}
	else //Caso General
	{
		suma = n + sumaRecursiva(n - 1);
	}
	return suma;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1) ya que es una sentencia simple, a medida que aumenta la cantidad de datos el numero de operaciones se mantiene constante.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
  int suma = (n * (n + 1))/2;
	return suma;
}
#endif /* ACTIVITY_H */