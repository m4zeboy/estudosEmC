#include <stdio.h>
/* Cria uma sequencia de caracteres 'aleatórios'*/
void createHash(char *destiny, int length) {
  int i = 0 ;
  char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789!@#$%¨&*()";
  srand(time(NULL));
  while(i < length) {
    destiny[i] = letters[rand() % 73];
    i = i + 1;
  }
}