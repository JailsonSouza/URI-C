#include <stdio.h>

int main(){
    float a, b, c, aux;
    scanf("%f %f %f", a, b, c);

    if ((b>a)&&(b>c)){
        printf("Chegoi\n");
        aux = b;
        b = a;
        a = aux;
    }
    if ((c>a)&&(c>b)){
        printf("Chegou aqdadui\n");
        aux = c;
        c = a;
        a = aux;
    }
    printf("Chegou aqui\n");
    if (a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }else if ((a*a) == ((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }else if ((a*a) > ((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((a*a) < ((b*b)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n"); 
    if ((a == b) && (b == c) && (c == a)){
        printf("TRIANGULO EQUILATERO\n");
    }else if (((a == b) && (b == a)) || ((b == c) && (c == b)) || ((c == a) && (a == c))){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}