#include <stdbool.h>
#include <stdlib.h>

// Helper function to compute the height of a tree while also checking balance
int height(struct TreeNode* node, bool* isBalanced) {
    if (node == NULL) {
        return 0; // Null node has height 0
    }
    
    // Get the height of the left and right subtrees
    int leftHeight = height(node->left, isBalanced);
    int rightHeight = height(node->right, isBalanced);
    
    // If any subtree is unbalanced, propagate the unbalanced flag
    if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
        *isBalanced = false;
        return -1; // Return -1 to indicate an unbalanced subtree
    }
    
    // Return the height of the current node
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// Function to determine if the binary tree is balanced
bool isBalanced(struct TreeNode* root) {
    bool isBalancedFlag = true;
    height(root, &isBalancedFlag);
    return isBalancedFlag;
}
