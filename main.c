#include <invalid header> // Esto debería fallar
#include <my_header.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT 100
#define PI 3.14159

struct Point {
  int x;
  char id;
};

int main() {
  // Literales enteros
  int a = 12345;
  int b = -999999999999; // Fuera de rango
  int c = +42;

  // Literales flotantes
  float d = 3.14;
  float e = .5;
  float f = -.1321;
  float g = 123.;    // Punto al final
  float h = 1.2e10;  // Notación científica
  float i = 1.2e-10; // Notación científica negativa

  // Caracteres
  char ch1 = 'a';
  char ch2 = '\n'; // Carácter especial
  char ch3 = 'ab'; // Inválido, más de un carácter

  // Cadenas
  char *str1 = "Hello, World!";
  char *str2 = "This is a string with a " quote " inside.";
  char *str3 = "Unclosed string"; // Esto debería fallar

  // Operadores
  int sum = a + b;
  int diff = a - b;
  int mult = a * b;
  int div = a / b;
  int mod = a % b;
  int and = a && b;
  int or = a || b;
  int not = !a;
  int shift_left = a << 2;
  int shift_right = a >> 2;

  // Comentarios
  // Esto es un comentario de una línea
  /* Esto es un comentario
       de varias líneas /
    / Comentario no cerrado

    // Identificadores
    int _validIdentifier123 = 0;
    int 123invalidIdentifier = 0; // Esto debería fallar

    return 0;
}
