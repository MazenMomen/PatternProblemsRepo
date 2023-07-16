/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */
short height, i, j, width = 1;
/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */

/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter the triangle's height : ");
  scanf_s("%hd", &height);
  for (i = 1; i <= height; i++) {
    for (j = 1; j <= width; j++) {
      if (i == 1 || i == height || j == width || j == 1) {
        printf("%hd ", j);
      } else
        printf("  ");
    }
    printf("\n");
    width++;
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */