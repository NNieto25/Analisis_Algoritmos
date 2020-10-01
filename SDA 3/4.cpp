#include <iostream>
#include "tree.h"
using namespace std;

template <class T>
void printInterval(int, int, node<T>*);

int main(){
    //Tree creation
    node<int> *tree = new node<int>(9);
    // Left subTree
    tree->left = new node<int>(5);
    tree->left->left = new node<int>(3);
    tree->left->left->right = new node<int>(4);
    //Right subTree
    tree->right = new node<int>(13);
    tree->right->right = new node<int>(19);
    tree->right->left = new node<int>(11);
    tree->right->left->left = new node<int>(10);
    tree->right->left->right = new node<int>(12);

    cout << "\nPrinting interval: \n"; 
    printInterval(5,11, tree);
    return 0;
}

template <class T>
void printInterval(int lower, int higher, node<T> *tree){
    if (tree)
    {
        if (tree->data >= lower && tree->data <= higher)
        {
            printInterval(lower, higher, tree->left);
            cout << (tree)->data << " ";
            printInterval(lower, higher, tree->right);
        }
        else if(tree->data <= lower){
            printInterval(lower, higher, tree->right);
        }
        else if(tree->data >= higher){
            printInterval(lower, higher, tree->left);
        }
    }
}