/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */

/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */
short l, n, m, height, width;
/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter triangle height: ");
  scanf_s(" %hd", &height);
  width = 2 * height - 1;

  for (n = 0; n < height; n++) {
    for (m = 0; m < n; m++) {
      printf("  ");
    }
    for (l = width; l > 0; l--) {
      printf("* ");
    }
    printf("\n");
    width -= 2;
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */