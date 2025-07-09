#include <stdio.h>

struct Persona {
    int edad;
    char nombre;
};

int main(){
    struct Persona p1;
    int resultado;
    p1.edad = 25;
    resultado = p1.edad > 18 ? 1 : 0;
    printf("Hola Mundo");
    for (int i=0;i<9;i++)
    {
        fprintf(stdout, "hola");
    }
    return 0;
}