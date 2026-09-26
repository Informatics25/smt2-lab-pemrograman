#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int x) {
    if (!root) return new TreeNode(x);
    if (x < root->data) root->left = insert(root->left, x);
    else if (x > root->data) root->right = insert(root->right, x);
    return root;
}

int height(TreeNode* root) {
    if (!root) return -1;
    return 1 + max(height(root->left), height(root->right));
}

int main() {
    TreeNode* root = nullptr;
    
    // Memasukkan data secara BERURUTAN (1, 2, 3, 4, 5)
    // Karena setiap nilai lebih besar dari sebelumnya, semua simpul akan 
    // masuk ke cabang KANAN terus-menerus. 
    int values[] = {1, 2, 3, 4, 5};
    for (int v : values) {
        root = insert(root, v);
    }
    
    cout << "Tinggi Pohon Merosot (Degenerate): " << height(root) << "\n";
    // Output: 4. 
    // Ini berarti pohon membentuk rantai linear seperti Linked List (O(N)), 
    // bukan pohon biner seimbang O(log N).
    
    return 0;
}