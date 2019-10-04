# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int opt;
    float a,b,c;
    char repet;
    do{
    printf ("1-Suma\n");
    printf ("2-Resta\n");
    printf ("3-Multiplicacion\n");
    printf ("4-Division\n");
    printf ("Introduce 1 para la suma\n");
    scanf ("%d",&opt);
    printf("Introduce la primer cantidad");
    scanf ("%f",&a);
    printf("Introduce la segunda cantidad");
    scanf ("%f",&b);
    switch (opt){
        case 1:
            c=a+b;
            break;
        case 2:
            c=a-b;
            break;
        case 3:
            c=a*b;
            break;
        case 4:
            while (b==0){
            printf("introduce un valor\n");
            scanf("%f",&b);
            }
            c=a/b;
            break;
        default:
        printf ("introduce una opcion\n");
                }
                printf("El resultado es:%f\n",c);
                printf("Desea hacer otra operacion S N:\n");
                repet=getch();
        }while (repet=='S'||repet=='S');
}
