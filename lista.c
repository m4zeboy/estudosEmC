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

void insertEnd(Node **list, int data) {
  Node *new = (Node *) malloc(sizeof(Node));
  if(new) {
    Node *p, *q;
    p = NULL; q = *list;
    new->data = data;
    new->next = NULL;
    while(q != NULL) {
      p = q;
      q = q->next;
    }
    if(p == NULL) {
      *list = new;
    } else {
      p->next = new;
    }
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
  insertEnd(&list, 1);
  insertEnd(&list, 2);
  insertEnd(&list, 3);
  insertEnd(&list, 4);
  printList(list);
  return 0;
}