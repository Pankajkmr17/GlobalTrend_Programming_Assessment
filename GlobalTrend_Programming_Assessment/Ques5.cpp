// Q 5.  Write a function to rotate an array to the right by k steps.The function should modify the array in place to achieve the rotation. 
 #include <iostream> 

#include <vector> 

#include <algorithm>  // For std::reverse 

  

using namespace std; 

  

void rotateArray(vector<int>& nums, int k) { 

    int n = nums.size(); 

    k = k % n; // In case k is greater than the array size 

  

    // Helper lambda function to reverse a portion of the array 

    auto reverse = [](vector<int>& arr, int start, int end) { 

        while (start < end) { 

            swap(arr[start], arr[end]); 

            start++; 

            end--; 

        } 

    }; 

  

    // Step 1: Reverse the entire array 

    reverse(nums, 0, n - 1); 

    // Step 2: Reverse the first k elements 

    reverse(nums, 0, k - 1); 

    // Step 3: Reverse the remaining n - k elements 

    reverse(nums, k, n - 1); 

} 

  

int main() { 

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; 

    int k = 3; 

  

    rotateArray(nums, k); 

  

    cout << "Rotated array: "; 

    for (int num : nums) { 

        cout << num << " "; 

    } 

    cout << endl; 

  

    return 0; 

} 