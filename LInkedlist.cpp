#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node start(0);
    Node *n = new Node(1);
    start.next = n;
    Node *n1 = new Node(2);
    Node *loop = &start;
    n->next = n1;
    Node *n2 = new Node(5);
    n1->next=n2;
    
    while (1)
    {
        if (loop->next == NULL)
            return 0;
        cout << loop->next->data << ",";
        loop = loop->next;
        
    }

    return 0;
}