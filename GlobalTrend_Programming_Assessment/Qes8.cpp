// Q 8. Write a function to find the greatest common divisor (GCD) of two numbers. The function should return the GCD of a and b. 


#include <iostream> 

  

using namespace std; 

  

// Function to find the greatest common divisor (GCD) of two numbers 

int gcd(int a, int b) { 

    while (b != 0) { 

        int temp = b; 

        b = a % b; 

        a = temp; 

    } 

    return a; 

} 

  

int main() { 

    int a = 56; 

    int b = 98; 

    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl; 

    return 0; 

} 