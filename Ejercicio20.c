#include<stdio.h>
int main()
{
    int num, a, b, cont = 1;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    while(num > 10){
        a = num / 10; 
        b = num % 10;
        cont++;
        num = a;
    }
    printf("El numero de digitos del numero es: %d", cont);
    return 0;
    
}