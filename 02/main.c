#include<stdio.h>

#include "list.h"

int main(int argc, char **argv) {
  list_element *root = init_element(1);
  add_element(2,root);
  add_element(3,root);

  print_list(root);

  return 0;
}