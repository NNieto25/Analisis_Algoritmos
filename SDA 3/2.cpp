#include <iostream>
#include "tree.h"
using namespace std;

int main(){
    node<char> *tree = new node<char>('G');
    
    tree->left = new node<char>('E');
    tree->left->left = new node<char>('A');
    tree->left->left->left = new node<char>('I');
    tree->left->left->right = new node<char>('B');

    tree->right = new node<char>('M');
    tree->right->left = new node<char>('C');
    tree->right->left->left = new node<char>('L');
    tree->right->left->left->right = new node<char>('D');
    tree->right->left->right = new node<char>('F');
    tree->right->right = new node<char>('K');
    tree->right->right->right = new node<char>('J');
    tree->right->right->right->left = new node<char>('H');

    cout<<"\nInorder traversal: "<<endl;
    inorder(tree);

    cout<<"\nPreorder traversal: "<<endl;
    preorder(tree);

    cout<<"\nPostorder traversal: "<<endl;
    postorder(tree);

    return 0;
}