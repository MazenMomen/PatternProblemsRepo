/* ****************** Includes section Start ****************** */
#include <stdio.h>
#include <stdlib.h>
/* ****************** Includes section End   ****************** */

/* ***************** Definition section Start ***************** */

/* ***************** Definition section End   ***************** */

/* ************** Global variables section Start ************** */

/* ************** Global variables section End   ************** */

/* ************* Global declaration section Start ************* */
short n, m, columnNum, rowNum;
/* ************* Global declaration section End   ************* */

/* *********** Sub-program declarations section Start ********* */

/* *********** Sub-program declarations section End  ********** */

/* **************** Sub-program section Start ***************** */
int main() {
  printf("Enter number of rows: ");
  scanf_s(" %hd", &rowNum);
  printf("Enter number of columns: ");
  scanf_s(" %hd", &columnNum);

  for (n = 0; n < rowNum; n++) {
    for (m = 0; m < columnNum; m++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
/* ***************** Sub-program section End  ***************** */