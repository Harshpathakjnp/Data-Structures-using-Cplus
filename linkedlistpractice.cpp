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

public:
    void printall()
    {
        cout<<this->data<<",";
        while (this->next != NULL)
        {
            cout << this->next->data << ",";
            this->next = this->next->next;
        }
    }
};
void addlast(Node **head, int data)
{
    Node *newnode = new Node(data);
    Node *temp = *head;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void addfirst(Node **head, int data)
{
    Node *newnode = new Node(data);
    Node *temp = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        temp = *head;
        *head = newnode;
        (*head)->next = temp;
    }
}
void deletenode(Node **head, int num)
{
    Node *temp = *head;
    Node *prev = NULL;

    if (temp != NULL && temp->data == num)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != num)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;

        prev->next = temp->next;

        delete temp;
    }
}

void reversenode(Node **head)
{
    Node *current = *head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main()
{
    int i, count = 0;
    Node *head = NULL;
    for (i = 1; i <= 10; i++)
    {
        addlast(&head, i);
    }
    reversenode(&head);
    head->printall();

    return 0;
}