/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */

/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */
short n, m, height;
/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter triangle height: ");
  scanf_s(" %hd", &height);
  for (n = height; n > 0; n--) {
    for (m = n; m > 0; m--) {
      if (n == 1 || m == 1 || m == n || n == height) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */