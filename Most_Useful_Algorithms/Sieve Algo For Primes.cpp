//                                   Problem Statement:
//  Sieve of Eratosthenes – Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.


//                                      Examples:
//                     Example 1:  Input: n =10 Output: 2 3 5 7
//                     Example 2: Input: n = 20  Output: 2 3 5 7 11 13 17 19 


//                                    Algorithm steps:
// 1.   From 1 to n, leaving 1, we will start from 2 to n, and mark numbers which are multiples of 2. 
// 2.   Perform this above step till the nth number 
// 3.   Then we will have some unmarked numbers left, which are eventually the prime numbers because
//       they are not divisible by any other number. And we get our answer. 


//                                              CODE


  #include <bits/stdc++.h>
  
  using namespace std;
  void SieveOfEratosthenes(int n) {
    bool prime[n + 1]; //creating a boolean array 
    memset(prime, true, sizeof(prime)); //initially set every value to true 
    for (int p = 2; p * p <= n; p++) {
      if (prime[p] == true) {
        for (int i = p * p; i <= n; i += p) 
    //check for all multiples of p less than n or squares of p and mark them false 
          prime[i] = false;
      }
    }
    // Print all prime numbers whose values are still true 
    for (int p = 2; p <= n; p++)
      if (prime[p] == true)
        cout << p << " ";
  }
  int main() {
    int n = 30;
    cout << "The prime numbers less than equal to " << n << " are" << endl;
    SieveOfEratosthenes(n);
    return 0;
  }
