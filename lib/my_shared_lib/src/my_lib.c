#include "my_lib.h"

#include <stdio.h>

static int is_init = 0;

void my_lib_init() {
  if (is_init) {
    return;
  }

  is_init = 1;
}


void my_lib_print_int(int num) {
  if (!is_init) {
    printf("[ERROR] Lib wasn`t init\n");
  }
  
  printf("[OK] Passed num %d", num);
}
