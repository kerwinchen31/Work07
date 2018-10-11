#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node *n){
  while(n){
    printf("%d ", n->i);
    n = n->next;
  }
  printf("\n");
}

struct node * insert_front(struct node *n, int m){
  struct node *x = malloc(sizeof(struct node));
  x->i = m;
  x->next = n;
  return x;
}

struct node * free_list(struct node *n){
  while(n){
    struct node *x = n->next;
    free(n);
    n = x;
  }
  return n;
}
  
