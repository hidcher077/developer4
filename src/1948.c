#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int max_prime_divisor(int a) {
    if (a == 0) {
        return -1; 
    }
    if (a < 0) {
        a = -a; 
    }

  
    
    for (int i = a / 2; i >= 2; i--) {
        if (a % i == 0 && is_prime(i)) {
           
            return i;
        }
    }
    
}

int main() {
    int a, divisor;
    
    printf("Введите целое число a: ");
    scanf("%d", &a);
    
    divisor = max_prime_divisor(a);
    
    if (divisor != -1) {
        printf("Наибольший простой делитель числа %d: %d\n", a, divisor);
    } else {
        printf("n/a\n");
    }
    
    return 0;
}