#include <iostream>
using namespace std;

class BST
{
private:
    int data;
    BST *left;
    BST *right;

public:
    BST();
    BST(int val);
    BST *insert(BST *root, int val);
    void Inorder(BST *root);
};

BST::BST()
    : data(0), left(NULL), right(NULL)
{
}

BST::BST(int val)
{
    this->data = val;
    this->left = NULL;
    this->right = NULL;
}

BST *BST ::insert(BST *root, int val)
{
    if (!root)
    {
        // chen vao nut dau tien nut root la
        return new BST(val);
    }
    else
    {
        // neu root khong null thi ta so sanh voi no;
        if (val < root->data)
        {
            // ta chen sang ben trai neu nut ms co val < nut root
            root->left = insert(root->left, val);
        }
        else if (val > root->data)
        {
            // ta chen sang ben phai neu nut moi co val > nut root;
            root->right = insert(root->right, val);
        }
    }

    // tra ve nut root sau khi da chen;
    return root;
}

void BST::Inorder(BST *root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
int main()
{
    BST b;
    BST *root = NULL; // ban dau cay chua co nut nao thi root la nut goc;
    root = b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);
    b.Inorder(root);
    return 0;
}