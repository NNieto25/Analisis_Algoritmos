#include "stringStack.h"

using namespace std;
void pushSentence(string, node **);
int main(){
    node *pStack = nullptr;
    string sentence;
    cout<< "Insert a sentence: ";
    getline(cin, sentence);
    pushSentence(sentence, &pStack);    
    printStack(pStack);
    return 0;
}


void pushSentence(string sentence, node **stack){
    int begin = 0, end = 0;
    for (string::iterator i = sentence.begin(); i != sentence.end(); i++)
    {
        if(*i == ' '){    
            push(D(sentence.substr(begin,end-begin)), stack);
            begin = end+1;
        }
        end++;
    }
    push(D(sentence.substr(begin,end - begin)),stack);
}