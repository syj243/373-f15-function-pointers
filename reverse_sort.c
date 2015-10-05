int compare(int a, int b){
  return b-a;
}

int compare_q(const void *a, const void *b){
  return *(const int*)b - *(const int*)a;
}
