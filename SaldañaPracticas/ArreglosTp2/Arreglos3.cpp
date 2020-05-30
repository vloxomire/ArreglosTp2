/*Ejercicio #1  
Crear un programa donde se ingrese una oración y nos indique el largo de la oración.*/
#include<iostream>
#include<stdio.h>
//VARIABLES
const short indice = 40;
char oracion[40]{ '-' };
short contador = 0;
//INPUT
void Ingresar() 
{
	std::cout << "Ingrese una oración" << std::endl;
	std::cin.getline(oracion, 40);
};
void Largo() 
{
	for (int i = 0; i < indice; i++)
		if (oracion[i] != '\0')
		{
			contador++;
			
		}
		else 
		{
			i = indice;
		}
};
//OUTPUT
void Mostrar() 
{
	system("CLS");
	std::cout << "\n" << oracion << std::endl;
	std::cout   << oracion <<"\nEl largo de la oracion es "<<contador<< std::endl;
};
int main()
{
	Ingresar();
	Largo();
	Mostrar();
	return 0;
}
/*Ejercicio #2 
Similar al ejercicio anterior, solo que ahora ingresamos una letra y que nos diga cuántas  veces se repite.
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #3  
Crear un programa donde se ingrese una oración y nos indique la cantidad de vocales  que tiene.
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #4  
Crear un programa donde se ingrese una oración y se muestre como resultado las letras  invertidas.
    EJ: “Hola soy un programador”  RES: “rodamargorp nu yos aloH”
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #5  
Similar al ejercicio anterior, solo que esta vez mostramos las palabras invertidas, no las  letras.
    EJ: “Hola soy un programador”  RES: “programador un soy Hola”
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #6  
Crear un programa donde se ingrese una oración y nos muestre una combinación de  números compuesta por la cantidad de
letras de cada palabra.
    EJ: “Hola soy un programador”  RES: “4-3-2-11”
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #7 
Crear un programa donde se ingrese una oración y luego una palabra para verificar si  existe en la oración.
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #8 
Crear un programa donde se ingrese una oración y luego se pase cada una de sus letras  a mayúscula.
#include<iostream>
int main()
{
return 0;
}
/*Ejercicio #9 
Crear un programa donde se ingrese una oración y luego borre todas las vocales que  tenga.
#include<iostream>
int main()
{
return 0;
}
Ejercicio #10  
Crear un programa donde se ingrese una oración y luego se cifre utilizando el método  Caesar cipher​ con un desplazamiento configurable
#include<iostream>
int main()
{
	return 0;
}*/