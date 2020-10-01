#include <iostream>
#include "tree.h"
#include <queue>
using namespace std;

template <class T>
void treeBFS(node<T> *);

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
    
    //BFS implementation
    cout<<"BFS traversal:  " << endl;
    treeBFS(tree);
    return 0;
}
template <class T>
void treeBFS(node<T> *tree){
    queue<node<T> *> levelQueue;
    levelQueue.push(tree);

    while (!levelQueue.empty()){
        node<T> *aux = levelQueue.front();
        levelQueue.pop();
        cout << aux->data << " ";

        if (aux->left){
            levelQueue.push(aux->left);
        }
        if (aux->right){
            levelQueue.push(aux->right);
        }
    }   
}