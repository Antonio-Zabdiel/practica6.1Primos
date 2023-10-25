/*
el usuario debe ingreesar un numero n y este nos debe decir ni n es primo o si no lo es
regresa 0 en casi de qye bi lo sea y 1 en caso de que si lo sea
*/
#include<stdio.h>

int Primo(int);

int main(){
    int result;
    int val;

    printf("ingresa un numero entero para saber si es primo: ");
    scanf("%d", &val);

    result = Primo(val);

    if (result == 1){
        printf("el numero %d es %d por lo tanto es primo", val ,result);
    } else {
        
        printf("el numero %d es %d por lo tanto no es primo", val ,result);
    }
    return 0;
}

/*
valor de inicio un entero
por fuerza bruta hace todas las pruebas posibles y determina cuantas veces se puede dividir un numero y su modulo sea 0
si esto pasa mas de 2 veces nos dira que no es primo y si pasa 2 veces dira que si lo es
regresara 0 si no es primo o regresara 1 en caso de que el numero si sea primo
*/
int Primo(int num){
    int i = 0;
    int j = 0;

    if (num == 0 || num == 1){
        return 0;//no son primos
    } else {
        for (i = num; i >= 1; i--){
            if(num%i == 0){
                j++;
            } else {}
        }
    }
    
    if(j == 2){
        return 1;
    } else {
        return 0;
    }
}