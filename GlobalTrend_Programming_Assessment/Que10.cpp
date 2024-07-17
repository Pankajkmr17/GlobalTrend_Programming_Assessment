//Q 10. Write a function to check if a given string contains only alphabetic characters.The function should return true if the string contains only alphabetic characters, and false otherwise. 


#include <iostream> 

#include <string> 

#include <cctype>  // For isalpha 

  

using namespace std; 

  

// Function to check if a given string contains only alphabetic characters 

bool isAlphabetic(const string& str) { 

    for (char c : str) { 

        if (!isalpha(c)) { 

            return false; 

        } 

    } 

    return true; 

} 

  

int main() { 

    string testString1 = "HelloWorld"; 

    string testString2 = "Hello World123"; 

  

    cout << boolalpha;  // Print bool values as true/false 

  

    cout << "The string \"" << testString1 << "\" contains only alphabetic characters: " 

         << isAlphabetic(testString1) << endl; 

  

    cout << "The string \"" << testString2 << "\" contains only alphabetic characters: " 

         << isAlphabetic(testString2) << endl; 

  

    return 0; 

} 