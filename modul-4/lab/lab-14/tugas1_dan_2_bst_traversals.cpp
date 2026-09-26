#include <iostream>
using namespace std;

// Struktur Simpul Pohon Biner
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
};

// Menyisipkan nilai ke BST secara rekursif
TreeNode* insert(TreeNode* root, int x) {
    if (!root) return new TreeNode(x); // Jika kosong, buat simpul baru
    
    if (x < root->data) {
        root->left = insert(root->left, x);
    } else if (x > root->data) {
        root->right = insert(root->right, x);
    }
    // Jika x == root->data, duplikat diabaikan
    return root;
}

// Penelusuran PRE-ORDER (Akar -> Kiri -> Kanan)
void preOrder(TreeNode* root) {
    if (!root) return;
    cout << root->data << " "; 
    preOrder(root->left);
    preOrder(root->right);
}

// Penelusuran IN-ORDER (Kiri -> Akar -> Kanan)
void inOrder(TreeNode* root) {
    if (!root) return;
    inOrder(root->left);
    cout << root->data << " "; // Harus tercetak berurutan!
    inOrder(root->right);
}

// Penelusuran POST-ORDER (Kiri -> Kanan -> Akar)
void postOrder(TreeNode* root) {
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    TreeNode* root = nullptr;
    
    // Menyisipkan data sesuai Tugas 1
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        root = insert(root, v);
    }
    
    cout << "Pre-order  : ";
    preOrder(root);
    cout << "\n";
    
    cout << "In-order   : ";
    inOrder(root); // Verifikasi: harusnya 20 30 40 50 60 70 80
    cout << "\n";
    
    cout << "Post-order : ";
    postOrder(root);
    cout << "\n";
    
    return 0;
}