#include "queue.h"
#include <cstdlib>
#include <time.h>
using namespace std;
void crossBridge(node *,int);
int main(){
    srand(time(NULL));
    node *pQueue = nullptr;
    int n = 10; //Used to define amount of cars;
    for(int i = 0; i< n; i++){
        push(T(i+1), &pQueue);
    }
    crossBridge(pQueue, 90);//Oh boy :(
    return 0;
}

void crossBridge(node *queue, int probability){
    int crosses= 0, die = 0;
    while (queue)
    {
        if(rand()%100+1 <= probability){
            cout<<"Vehicle "<< queue->data.content <<" went full throttle"<<endl;
            crosses++;
        }
        else{
            cout<<"Vehicle "<< queue->data.content <<" went to heaven :'("<<endl;
            die++;
        } 
        probability-= 6;
        queue = queue->next;
    }
    cout<<"Amount of vehicles who crosses the bridge: "<< crosses<<endl;
    cout<<"Amount of vehicles who DO NOT crosses the bridge: "<<die<<endl;
}