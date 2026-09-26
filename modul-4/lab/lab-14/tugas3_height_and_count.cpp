#include <iostream>
#include <algorithm> // untuk std::max
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

// Mengukur tinggi pohon
int height(TreeNode* root) {
    if (!root) return -1; // Tinggi pohon kosong adalah -1 (akar tunggal = 0)
    return 1 + max(height(root->left), height(root->right));
}

// Menghitung jumlah total simpul
int countNodes(TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    TreeNode* root = nullptr;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        root = insert(root, v);
    }
    
    cout << "Tinggi (Height) pohon  : " << height(root) << "\n";
    cout << "Jumlah simpul (Nodes)  : " << countNodes(root) << "\n";
    
    return 0;
}