// Q 6. Write a function to find the factorial of a given number.The function should return the factorial of the number. 


#include <iostream> 

  

using namespace std; 

  

// Function to calculate factorial of a number 

int factorial(int n) { 

    // Base case: factorial of 0 is 1 

    if (n == 0) 

        return 1; 

     

    int result = 1; 

    for (int i = 1; i <= n; ++i) { 

        result *= i; 

    } 

    return result; 

} 

  

int main() { 

    int n = 5; 

    cout << "Factorial of " << n << " is: " << factorial(n) << endl; 

    return 0; 

} 