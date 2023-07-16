/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */

/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */
short l, n, m, height, width = 1;
/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter triangle height: ");
  scanf_s(" %hd", &height);

  for (n = 0; n < height; n++) {
    for (m = height - n; m >= 0; m--) {
      printf("  ");
    }
    for (l = 0; l < width; l++) {
      if (l == 0 || n == 0 || l == width - 1 || n == height - 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }

    printf("\n");
    width += 2;
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */