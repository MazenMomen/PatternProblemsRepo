/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */
short i, j, height, width;
/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */

/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter the height of the triangle : ");
  scanf_s("%hd", &height);
  for (i = 1; i <= height; i++) {
    width = 1;
    for (j = height; j >= i; j--) {
      printf("%hd ", width);
      width++;
    }
    printf("\n");
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */