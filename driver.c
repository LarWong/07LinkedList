#include<stdio.h>
#include<stdlib.h>

#include "list.h"

int main(){
    struct node * front = NULL;
    printf("Initial list: \n");
    print_list(front);
    printf("Adding 0-9...\n");
    for (int i = 0; i < 10; i++){
        front = insert_front(front,i);
    }
    printf("New List:\n");
    print_list(front);
    printf("Freeing list...\n");
    front = free_list(front);
    printf("New list:\n");
    print_list(front);
    return 0;
}
