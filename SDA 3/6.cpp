#include <iostream>
#include "tree.h"
using namespace std;

template <class T>
bool isIdentical(node<T> *firstTree, node<T> *secondTree);

int main(){
    //Tree creations 

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

    node<int> *treeB = new node<int>(9);
    // Left subTree
    treeB->left = new node<int>(5);
    treeB->left->left = new node<int>(3);
    treeB->left->left->right = new node<int>(4);
    //Right subTree
    treeB->right = new node<int>(13);
    treeB->right->right = new node<int>(19);
    treeB->right->left = new node<int>(11);
    treeB->right->left->left = new node<int>(10);
    treeB->right->left->right = new node<int>(12);

    node<int> *treeC = new node<int>(9);
    // Left subTree
    treeC->left = new node<int>(5);
    treeC->left->left = new node<int>(3);
    treeC->left->left->right = new node<int>(4);
    //Right subTree
    treeC->right = new node<int>(13);
    treeC->right->right = new node<int>(19);
    treeC->right->left = new node<int>(11);
    treeC->right->left->left = new node<int>(10);
    treeC->right->left->right = new node<int>(85);

    cout<<"\nTree A and Tree B are identical? R//" << isIdentical(treeA,treeB)<<endl;
    cout<<"\nTree A and Tree C are identical? R//" << isIdentical(treeA,treeC)<<endl;
    cout<<"\nTree B and Tree C are identical? R//" << isIdentical(treeB,treeC)<<endl;
    return 0;
}

template <class T>
bool isIdentical(node<T> *firstTree, node<T> *secondTree){
    if (firstTree && secondTree)
    {
        if(firstTree->data == secondTree->data){
        return true && isIdentical(firstTree->left,secondTree->left) && isIdentical(firstTree->right, secondTree->right);
        }
        return false;
    }
    else if(!firstTree && !secondTree){
        return true;
    }
    else return false;
}