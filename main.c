#include <stdio.h>

void create_array(int a[3][4]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("enter %d row %d column", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}
void display_array(int a[3][4]) {
  printf("Array in matrix format:\n");
  for (int i = 0; i < 3; i++) {
    printf("[ ");
    for (int j = 0; j < 4; j++) {
      printf("%d ", a[i][j]);
    }
    printf("]\n");
  }
}
void Gussian_method(int a[3][4]) {
  for (int i = 1; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (i > j) {
        int c = a[i][j] / a[j][j];
        for (int k = 0; k < 4; k++) {
          a[i][k] = a[i][k] - c * a[j][k];
        }
      }
    }
  }
}

int main() {
  int a[3][4];
  create_array(a);
  display_array(a);
  Gussian_method(a);
  display_array(a);

  return 0;
}