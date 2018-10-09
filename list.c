#include<stdio.h>
#include<stdlib.h>

void print_list(struct node * start){
  if (start){
    printf("Value at node: %d",start->i);
    print_list(start->next);
  }

}

struct node * insert_front(struct node * beginning, int val){


}

struct node * free_list(struct node * beginning){


}
