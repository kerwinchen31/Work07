#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node *n){
  while((n->next)){
    printf("%d ", n->i);
    n++;
  }
  printf("%d\n",n->i);
}
