#include<stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    while(num > 10){
        num = num / 10;
    }
    printf("El primer digito del numero introducido es: %d ", num);
    return 0;
}
