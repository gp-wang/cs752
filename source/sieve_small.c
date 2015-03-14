/*
  Input: an integer n > 1
 
  Let A be an array of Boolean values, indexed by integers 2 to n,
  initially all set to true.
 
  for i = 2, 3, 4, ..., not exceeding √n:
  if A[i] is true:
  for j = i2, i2+i, i2+2i, ..., not exceeding n :
  A[j] := false
 
  Output: all i such that A[i] is true.
*/

/* @(#)sieve.c
 */

/* #include <config.h> */
/* #include "sieve.h" */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limits.h>
#include <math.h>

#define UPPER_BOUND 100000

void count_primes();

/* +1 for easier indexing */
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


/* done!TODO: add decl */
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
