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

void insertInOrder(Node **list, int data) {
  Node *new = (Node *) malloc(sizeof(Node));
  if(new) {
    Node *p, *q;
    p = NULL; q = *list;
    while(q != NULL && data > q->data) {
      p = q;
      q = q->next;
    }
    new->data = data;
    new->next = q;
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
  insertInOrder(&list, 30);
  insertInOrder(&list, 2);
  insertInOrder(&list, 10);
  insertInOrder(&list, 400);
  printList(list);
  return 0;
}