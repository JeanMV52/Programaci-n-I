#include<stdio.h>
int main()
{
    int num, fact=1, suma=0, i;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    for(i = 1; i<=num; i++){
        fact = fact * i;
        suma = suma + fact;
    }
    printf("La sumatoria de factoriales es: %d", suma);
    return 0;

}