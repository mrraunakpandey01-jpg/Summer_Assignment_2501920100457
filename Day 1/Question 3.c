 #include <stdio.h>
  int main() {
      int i, n;
      int factorial = 1;
      printf("Enter the number n:" );
      scanf("%d", &n);
      
      for(i = 1; i <= n; i++){
          factorial = factorial * i;
          printf("Factorial of n %d is %lld\n", n, factorial);
      }
      return 0;
  }
