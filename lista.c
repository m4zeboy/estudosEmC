#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void insertStart(Node **list, int data) {
  Node *new = (Node *) malloc(sizeof(Node));
  if(new) {
    new->data = data;
    new->next = *list;
    *list = new;
  }
}

void printList(Node *list) {
  if(list) {
    printf("%d -> ", list->data);
    printList(list->next);
  }
}

int main(void) {
  Node *list = NULL;
  insertStart(&list, 1);
  insertStart(&list, 2);
  insertStart(&list, 3);
  insertStart(&list, 4);
  printList(list);
  return 0;
}