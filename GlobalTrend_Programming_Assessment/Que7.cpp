// Q 7. Write a function to compute the sum of the digits of a given number.The function should return the sum of the digits of the number. 


#include <iostream> 

  

using namespace std; 

  

// Function to compute the sum of the digits of a given number 

int sumOfDigits(int n) { 

    int sum = 0; 

  

    // Ensure the number is positive for digit extraction 

    n = abs(n); 

  

    while (n > 0) { 

        sum += n % 10; // Add the last digit to sum 

        n /= 10;       // Remove the last digit 

    } 

  

    return sum; 

} 

  

int main() { 

    int n = 12345; 

    cout << "The sum of the digits of " << n << " is: " << sumOfDigits(n) << endl; 

  

    return 0; 

} 