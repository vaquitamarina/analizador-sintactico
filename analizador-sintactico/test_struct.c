#include <stdio.h>

struct Persona {
    int edad;
    char nombre;
    float altura;
};

int main(){
    struct Persona p1;
    p1.edad = 25;
    p1.altura = 1.75;
    return 0;
}
