/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */

/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */
short n, m, height, width = 1;
/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter triangle height: ");
  scanf_s(" %hd", &height);

  for (n = 1; n <= height; n++) {
    for (m = 1; m <= width; m++) {
      printf("%hd ", m);
    }
    printf("\n");
    width++;
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */