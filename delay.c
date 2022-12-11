#include <time.h>
/* O usuário informa o tempo em segundos e o programa faz o tempo passar. */
void delay(s) {
  clock_t timeDelay = (s * 1000) + clock();
  while(timeDelay > clock());
}

/* Chama a função de espera e após o tempo executa a função passada por parâmetro. */
void timeout(int s, void function_pointer()) {
  delay(s);
  function_pointer();
}