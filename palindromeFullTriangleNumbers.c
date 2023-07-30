/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ************** Global variables section Start ************** */
int i, j, height;
/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */

/* ************* Global declaration section End   ************* */

int main() {
  /* *********** Sub-program declarations section Start ********* */

  /* *********** Sub-program declarations section End  ********** */

  /* **************** Sub-program section Start ***************** */
  printf("Enter height : ");
  scanf_s("%d", &height);
  for (i = 1; i <= height; i++) {
    int v = 1;
    for (j = i; j <= height; j++) {
      printf("  ");
    }
    for (j = 1; j < i; j++) {
      printf("%d ", v++);
    }
    for (j = 1; j <= i; j++) {
      printf("%d ", v--);
    }
    printf("\n");
  }

  /* ***************** Sub-program section End  ***************** */
  return 0;
}

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */