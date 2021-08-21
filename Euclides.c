#include <stdio.h>


typedef struct {
    int numerador, denominador;

}fraccion;

int mcd (fraccion *);//Calcula el maximo comun divisor y lo retorno

fraccion reduce(fraccion * , int); //Retorna la fraccion reducida

void muestraFraccion(fraccion);//Imprime por pantalla los valores


int main() {

    int  muestra1, muestra2, muestra3;

    fraccion f1;

    f1.numerador = 140;
    f1.denominador = 26;

    printf("Numerador inicial: %d\n", f1.numerador);
    printf("Denominador inicial: %d\n", f1.denominador);

    muestra1=mcd(&f1);

    printf("Maximo comun divisor: %d\n", muestra1);

    muestraFraccion(reduce(&f1, muestra1));
    printf("\n");


    fraccion f2;

    f2.numerador = 380;
    f2.denominador = 44;

    printf("Numerador inicial: %d\n", f2.numerador);
    printf("Denominador inicial: %d\n", f2.denominador);

    muestra2=mcd(&f2);

    printf("Maximo comun divisor: %d\n", muestra2);

    muestraFraccion(reduce(&f2, muestra2));
    printf("\n");

    fraccion f3;

    f3.numerador = 830;
    f3.denominador = 675;

    printf("Numerador inicial: %d\n", f3.numerador);
    printf("Denominador inicial: %d\n", f3.denominador);

    muestra3=mcd(&f3);

    printf("Maximo comun divisor: %d\n", muestra3);

    muestraFraccion(reduce(&f3, muestra3));
    printf("\n");

    return 0;
}

int mcd (fraccion *p){

    int r,a,b;

    a = p->numerador;
    b = p->denominador;

    do{
        r = a % b;
        a = b;
        b = r;

    }while(r!=0);

    return a;

}

fraccion reduce (fraccion *p, int x){
  int a, b;

  a = p->numerador / x;
  b = p->denominador / x;

  fraccion c = {a , b};

  return c;
}

void muestraFraccion(fraccion c){

   printf("Numerador fraccion reducida: %d\n", c.numerador);
   printf("Denominador fraccion reducida: %d\n", c.denominador);

}

