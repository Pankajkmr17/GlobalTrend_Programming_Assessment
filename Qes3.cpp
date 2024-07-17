// Q 3. Given a non-empty binary tree, find the maximum path sum. A path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.The function should return an integer representing the maximum path sum. 

// Ans. .. 

#include <iostream> 

#include <algorithm> 

#include <climits> 

  

using namespace std; 

  

// Definition for a binary tree node. 

struct TreeNode { 

    int val; 

    TreeNode *left; 

    TreeNode *right; 

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} 

}; 

  

class Solution { 

public: 

    int maxPathSum(TreeNode* root) { 

        int max_sum = INT_MIN; 

        maxPathSumHelper(root, max_sum); 

        return max_sum; 

    } 

  

private: 

    int maxPathSumHelper(TreeNode* node, int& max_sum) { 

        if (!node) return 0; 

  

        // Recursively get the maximum path sum of the left and right subtrees 

        int left_sum = max(maxPathSumHelper(node->left, max_sum), 0); 

        int right_sum = max(maxPathSumHelper(node->right, max_sum), 0); 

  

        // Update the maximum path sum for the current node 

        int current_sum = node->val + left_sum + right_sum; 

        max_sum = max(max_sum, current_sum); 

  

        // Return the maximum path sum "starting" from the current node 

        return node->val + max(left_sum, right_sum); 

    } 

}; 

  

// Helper function to create a new TreeNode 

TreeNode* newNode(int data) { 

    TreeNode* node = new TreeNode(data); 

    node->left = node->right = nullptr; 

    return node; 

} 

  

int main() { 

    // Creating a sample binary tree 

    //       1 

    //      / \ 

    //     2   3 

    //    / \ 

    //   4   5 

    TreeNode* root = newNode(1); 

    root->left = newNode(2); 

    root->right = newNode(3); 

    root->left->left = newNode(4); 

    root->left->right = newNode(5); 

  

    Solution sol; 

    cout << "The maximum path sum is: " << sol.maxPathSum(root) << endl; 

  

    // Free the allocated memory 

    delete root->left->left; 

    delete root->left->right; 

    delete root->left; 

    delete root->right; 

    delete root; 

  

    return 0; 

} 