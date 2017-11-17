typedef struct Element {
  int data;
  struct Element *next;
} list_element;

list_element* init_element(int);
void add_element(int,list_element*);
void print_list(list_element*);