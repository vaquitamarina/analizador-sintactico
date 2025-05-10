#include <stdio.h> // Comentario de una línea

#define MAX_COUNT 10

/*
  Este es un comentario
  de múltiples líneas.
*/
struct Point {
  int x;
  char id;
};

int main() {
  int i = 0;
  struct Point p1;
  p1.x = 5;
  p1.id = 'A';

  if (p1.x > MAX_COUNT) {
    printf("Valor x: %d\n", p1.x);
  } else {
    while (i < 3) {
      i = i + 1;
    }
    printf("ID: %c, i: %d\n", p1.id, i);
  }
  return 0; // Fin del programa
}
