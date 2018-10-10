#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int main(){
  struct node a;
  struct node b;
  struct node c;
  //a = malloc(3 * sizeof(int));
  a.i = 1;
  b.i = 2;
  c.i = 3;
  a.next = &b;
  b.next = &c;
  c.next = 0;
  print_list(&a);
  return 0;
}
