#include "operationQueue.h"
#include <cstdlib>
#include <time.h>
using namespace std;
string names[] = {"Nestor", "Eduardo", "Alejandra", "Santiago", "El bicho", "King Flyp", "Elizabeth","Don Bosco"};//8
operation ops[] = {operation("Retiro",4.0),operation("Deposito",2.0),operation("Consulta",3.5),
                    operation("Actualizacion",5.0) , operation("Pagos",2.0) };//5
double averageTime(node *);

int main(){
    srand(time(NULL));
    node *pQueue = nullptr;
    for(int i = 0; i< rand()%10 + 1; i++)
    {
        push(T(names[rand()%8],ops[rand()%5], rand()%10 + 1), &pQueue);
    }
    printQueue(pQueue);
    cout<<"\nAverage time: " << averageTime(pQueue)<<" mins "<<endl;
    
}

double averageTime(node *queue){
    int queueSize = size(queue);
    double counter = 0;
    while (queue)
    {
        counter += queue->data.op.time * queue->data.opTimes;
        queue = queue->next;
    }
    return counter /= queueSize;
}