#include <cstdio>

int func1(int n) {
  int sum;
  
  sum = 0;
  for (int i = 0; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return (sum);
}

int main() { 
	printf("%d\n", func1(16)); 
  printf("%d\n", func1(34567));
  printf("%d\n", func1(27639));
}
// O(N)
