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
  printf("Enter half diagonal length : ");
  scanf_s("%d", &height);
  for (i = 1; i < height; i++) {
    for (j = i; j <= height; j++) {
      printf("  ");
    }
    for (j = 1; j < i; j++) {
      if (j == 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    for (j = 1; j <= i; j++) {
      if (j == i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (i = 1; i <= height; i++) {
    for (j = 1; j <= i; j++) {
      printf("  ");
    }
    for (j = i; j < height; j++) {
      if (j == i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    for (j = i; j <= height; j++) {
      if (j == height) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  /* ***************** Sub-program section End  ***************** */
  return 0;
}

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */