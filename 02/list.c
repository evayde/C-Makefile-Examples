#include<stdio.h>
#include<stdlib.h>
#include "list.h"

list_element* init_element(int data) {
  list_element *new = malloc(sizeof(*new));
  new->data = data;
  new->next = NULL;

  return new;
}

void add_element(int data, list_element *list) {
  list_element *new = init_element(data);

  while(list->next != NULL)
    list = list->next;

  list->next = new;
}

void print_list(list_element *list) {
  while(list != NULL) {
    printf("%d\n", list->data);
    list = list->next;
  }
}