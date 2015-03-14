#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cassert>
#include <iomanip>
#include <map>


/*
 * Below name decls, though cubersome, serves as some sort of
 * mnemonics for usage.
 */
using std::cout;    using std::endl;
using std::cin;     using std::cerr;  
using std::begin;   using std::end;           /* lib begin and end function (for arrays) */
using std::vector;
using std::string;  using std::setw;  
using std::left;    using std::right;         /* align print out result */
using std::istream; using std::ostream; using std::iostream;
using std::ifstream; using std::ofstream; using std::fstream;
using std::istringstream; using std::ostringstream; using std::stringstream;
using std::flush;		/* flush the output buffer w/o extra char */
using std::map;
/* #include "sieve.hpp" */


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

/* map: {number, false} */
map<long, bool> get_primes(long n){
  map<long, bool> numbers;
  
  if(!(n > 1)) {
    cout << "Please enter a positive number bigger than 1" << endl;
    return result;
  }
  else if(n == 2) {
    result.push_back
  }
    

  

}

int main(int argc, char **argv) {

  

  return 0;

}
