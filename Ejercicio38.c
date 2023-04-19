#include<stdio.h>
int main()
{
    int num=0, i, r=0;
    printf("Ingrese un numero entero para mostrar su tabla de multiplicar: ");
    scanf("%d", &num);
    for(i=1; i<=10; i++){
        r = num * i;
        printf("\n%d * %d = %d", num, i, r);
    }
    return 0;
}