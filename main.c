#include <math.h>
#include <stdio.h>

#define PI 3.14159265
#define MAX_POINTS 100

// Estructura para representar un punto en 2D
struct Point {
  float x;
  float y;
  char label;
};

/*
 * Calcula la distancia entre dos puntos usando
 * la fórmula de la distancia euclidiana.
 */
float distance(struct Point *p1, struct Point *p2) {
  float dx = p1->x - p2->x;
  float dy = p1->y - p2->y;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  struct Point points[MAX_POINTS];
  points[0].x = 1.5e2;   // 150 en notación científica
  points[0].y = -2.3e-1; // -0.23
  points[0].label = 'A';

  points[1].x = 0.0;
  points[1].y = 0.0;
  points[1].label = 'B';

  float d = distance(&points[0], &points[1]);
  printf("Distancia entre \" %c \" y  \" %c \" : %f\n", points[0].label,
         points[1].label, d);

  return 0;
}
