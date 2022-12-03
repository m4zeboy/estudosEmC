int buscaBinaria(int vetor[], int inicio, int fim, int busca) {
  int metade = (fim + inicio) / 2;
  if(inicio == fim && vetor[inicio] != busca) {
    return -1;
  } else {
    if(busca > vetor[metade]) {
      return buscaBinaria(vetor, metade + 1, fim, busca);
    } else if(busca == vetor[metade]) {
      return metade;
    } else {
      return buscaBinaria(vetor, inicio, metade - 1, busca);
    }
  }
}