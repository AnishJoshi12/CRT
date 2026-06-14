#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertAtBeginning(node *&head, int value)
{
    node *newnode = new node(value);
    newnode->next = head;
    head = newnode;
}
void insertAtEnd(node *&head, int value)
{
    node *newnode = new node(value);
    // If list is empty
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    // Traverse till last node
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    // Attach new node at end
    temp->next = newnode;
}

void display(node *head)
{
    if(head == NULL)
    {
        cout << "Head is null";
        return;
    }
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }    
}

int main()
{
    node *head = NULL;

    insertAtBeginning(head, 5);
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 1);

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    display(head);

    return 0;
}