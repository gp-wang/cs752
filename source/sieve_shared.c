
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limits.h>
#include <math.h>

#define UPPER_BOUND 100000000

void count_primes();


int A[UPPER_BOUND + 1];
long count;

int main(){


  /* init */
  long n = UPPER_BOUND;
  long i = 0;
  for (i = 0; i <= n; i++){
    /* set all entries to true */
    A[i] = 1;
  }
  count = 0;

  if(!(n>1)) {
    printf("\nError: n must be > 1\n");
    return -1;
  }
  
    
  count_primes();
  printf("\nThe count of primes up to %ld is: %ld\n", n, count);

  return 0;
}



void count_primes(){
  long n = UPPER_BOUND;
  long n_sqrt = sqrt(UPPER_BOUND);

  long i = 0;
  for(i = 2; i <= n_sqrt; i++) {
    if(A[i]){
      long j = 0;
      for(j = i * i; j <= n; j += i){
	A[j] = 0;
      }
    }
  }

  for(i = 2; i <= n; i++){
    if(A[i]){
      count++;  
    }
  }
    
  return;
}
