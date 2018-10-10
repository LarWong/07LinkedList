#include<stdio.h>
#include<stdlib.h>

#include "list.h"


void print_list(struct node * start){
    while(start){
        printf("Node at %p, Val:  %d\n",start,start->i);
        start = start->next;
    }
}

struct node * insert_front(struct node * beginning, int val){
    struct node * new_first = (struct node *)malloc(sizeof(struct node));
    new_first->i = val;
    new_first->next = beginning;
    return new_first;
}

struct node * free_list(struct node * beginning){
    struct node * holder;
    while(beginning){
        holder = beginning;
        beginning = beginning->next;
        free(holder);
    }
    return beginning;
}

