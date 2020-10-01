#include <iostream>
#include "tree.h"
using namespace std;

template <class T>
node<T>* copyTree(node<T> *);

int main(){
    //Tree creation
    node<int> *treeA = new node<int>(9);
    // Left subTree
    treeA->left = new node<int>(5);
    treeA->left->left = new node<int>(3);
    treeA->left->left->right = new node<int>(4);
    //Right subTree
    treeA->right = new node<int>(13);
    treeA->right->right = new node<int>(19);
    treeA->right->left = new node<int>(11);
    treeA->right->left->left = new node<int>(10);
    treeA->right->left->right = new node<int>(12);

    node<int> *copyOfTree = copyTree(treeA);
    
    cout<<"\nOriginal tree: " << endl;
    inorder(treeA);
    cout<<"\nA copy of the tree: " << endl;
    inorder(copyOfTree);
    return 0;
}
template <class T>
node<T>* copyTree(node<T> *tree){
    if (tree)
    {
        node<T> *aux = new node<T>(tree->data);
        aux->left = copyTree(tree->left);
        aux->right = copyTree(tree->right);
        return aux;
    }
    return nullptr;
} 