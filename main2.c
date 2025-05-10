int main() {
  int i, suma = 0;
  float promedio;
  char letra = 'A';

  for (i = 0; i < 10; i++) {
    suma = suma + i;
  }

  if (suma > 0) {
    promedio = (float)suma / 10;
  } else {
    promedio = 0.0;
  }

  while (i > 0) {
    i = i - 1;
  }

  return 0;
}
