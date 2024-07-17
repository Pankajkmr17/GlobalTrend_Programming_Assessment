// Q 9. Write a function to find the maximum difference between any two elements in an array.The function should return the maximum difference between any two elements in the array. 


#include <iostream> 

#include <vector> 

#include <climits>  // For INT_MAX and INT_MIN 

  

using namespace std; 

  

// Function to find the maximum difference between any two elements in an array 

int maxDifference(const vector<int>& nums) { 

    if (nums.empty()) { 

        return 0; // If the array is empty, return 0 

    } 

  

    int minElement = INT_MAX; 

    int maxElement = INT_MIN; 

  

    // Iterate through the array to find the minimum and maximum elements 

    for (int num : nums) { 

        if (num < minElement) { 

            minElement = num; 

        } 

        if (num > maxElement) { 

            maxElement = num; 

        } 

    } 

  

    // Calculate and return the difference between the maximum and minimum elements 

    return maxElement - minElement; 

} 

  

int main() { 

    vector<int> nums = {1, 2, 90, 10, 110}; 

    cout << "The maximum difference between any two elements in the array is: "  

         << maxDifference(nums) << endl; 

  

    return 0; 

} 