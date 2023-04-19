#include <stdio.h>
int main()
{
    int num, dig1, dig2, prim, ult, i;
    printf("Ingrese un numero entero de dos digitos: ");
    scanf("%d", &num);
    if(num < 10 || num > 99){
        printf("Por favor, ingrese un numero entero de dos digitos: ");
        return 0;
    }
    dig1 = num / 10;
    dig2 = num % 10;
    if(dig1 < dig2){
        prim = dig1;
        ult = dig2;
    }else{
        prim = dig2;
        ult = dig1;
    }    
    printf("Los enteros comprendidos entre %d y %d son: ", prim, ult);
    for(i = prim + 1; i < ult; i++){
        printf("\n%d", i);
    }
    return 0;


}
