//Q 2 . Given a string, find the length of the longest substring without repeating characters.The function should return an integer representing the length of the longest substring without repeating characters. 

 #include <iostream> 

#include <string> 

#include <unordered_map> 

#include <algorithm> 

using namespace std; 

  

int lengthOfLongestSubstring(const string& s) { 

    unordered_map<char, int> char_index_map; 

    int longest = 0; 

    int start = 0; 

  

    for (int end = 0; end < s.length(); ++end) { 

        if (char_index_map.find(s[end]) != char_index_map.end() && char_index_map[s[end]] >= start) { 

            start = char_index_map[s[end]] + 1; 

        } 

        char_index_map[s[end]] = end; 

        longest = std::max(longest, end - start + 1); 

    } 

  

    return longest; 

} 

  

int main() { 

    string s = "abcabcbb"; 

    cout << "The length of the longest substring without repeating characters is: "  

              << lengthOfLongestSubstring(s) << endl;  // Output: 3 

  

    return 0; 

} 