#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert nodes in level order
TreeNode* insertLevelOrder(int arr[], TreeNode* root, int i, int n) {
    // Base case for recursion
    if (i < n) {
        TreeNode* temp = new TreeNode(arr[i]);
        root = temp;

        // Insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

        // Insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

// Function to print tree nodes in InOrder fashion
void inOrder(TreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
}

vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;

    if(root == NULL) return ans;

    queue<TreeNode*> q;

    q.push(root);

    // vector<bool> temp(true, size);

    while (!q.empty())    
    {  
        int size = q.size();

        vector<int> level;

        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();

            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);

            level.push_back(node->val);
        }

        ans.push_back(level);
    }

    return ans;
    
}

void printLevelOrder(vector<vector<int>> tree){

    cout << "Level Order Traversal:\n";
    for (auto level : tree) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}


int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> result = levelOrder(root);


    printLevelOrder(result);

    

    return 0;
}