//
// Accumulate the histogram of 2^i factors for 3n+1 for odd n.
//
// We expect this to follow a 1/2^i pattern.
//

#include <cstdio>

int main() {
  const int N_LIMIT_SHIFT = 20;
  const int N_LIMIT = 1 << N_LIMIT_SHIFT;
  int histo[N_LIMIT_SHIFT+1] = {};
  int count = 0;

  printf("Counting factors of 2 of 3n+1 for 1 <= n < %d, for odd n...\n\n", N_LIMIT);
    
  for (int n = 1; n < N_LIMIT; n += 2) {
    count++;

    int collatz = 3*n + 1;

    int n_factors_of_2 = 0;
    while (collatz % 2 == 0) {
      n_factors_of_2++;
      collatz /= 2;
    }

    histo[n_factors_of_2]++;
  }

  printf("Count: %10d %9.4lf%%\n\n", count, (double)count/(double)count*100.0);

  printf("Powers of 2 factor histogram:\n\n");

  for (int i = 0; i < N_LIMIT_SHIFT+1; i++) {
    printf("2^%2d:  %10d %9.4lf%%\n", i, histo[i], (double)histo[i]/(double)count*100.0);
  }
}
