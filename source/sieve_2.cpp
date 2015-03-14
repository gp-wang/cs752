#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cassert>
#include <iomanip>
#include <cmath>
#include <cstring>

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

/* #include "sieve_2.hpp" */

long countEratosthenesSieve(int upperBound) {
  long count = 0;
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
	                        /* cout << m << " "; */
	      ++ count;
                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)
            if (!isComposite[m])
	      {
		++count;
		/* cout << m << " "; */
	      }
                
      delete [] isComposite;
      return count;
}

int main(int argc, char **argv) {

  cout << countEratosthenesSieve(100000000) << endl;

  return 0;

}
