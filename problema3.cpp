#include <iostream>
#include <cmath>

long long largest_prime_factor(long long n) {
    long long max_prime = -1;

    for (long long i = 2; i <= n; i += 1) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    return max_prime;
}

int main() {
    long long number = 600851475143; 
    long long result = largest_prime_factor(number);

    std::cout << "The largest prime factor of " << number << " is: " << result << std::endl;
    return 0;
}
