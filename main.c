#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int main(){
  struct node *a;
  a = insert_front(NULL, 4);
  printf("node a: ");
  print_list(a);
  a = insert_front(a, 7);
  printf("added 7 to front, node a: ");
  print_list(a);
  a = insert_front(a, 2);
  printf("added 2 to front, node a: ");
  print_list(a);
  printf("freeing nodes\n");
  free_list(a);
  printf("node a, freed (0 and then junk values): ");
  print_list(a);
  return 0;
}
