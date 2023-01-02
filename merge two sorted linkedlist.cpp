#include <iostream>
using namespace std;

// you can also use class
struct Node
{
    int data;
    Node *next;
};

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
Node *createLinkedList(int n)
{
    int a; // this variable will be used to read the input from user

    Node *head = NULL; // after creating the linkedlist we will returns it's head
    Node *tail = NULL; // we will be inserting the new node at tail ex: if linked list is 1->2->null
                       //  new node will be inserted behind 2 => tail->next = new Node()

    // we will need to read the n inputs from user and create n nodes;
    for (int i = 0; i < n; i++)
    {
        cin >> a;                // reading input from user
        Node *temp = newNode(a); // a new Node will be created and it's pointer will be saved in temp

        if (head == NULL)
        {
            // if linkedlist is empty then first node will be head and tail both
            head = temp;
            tail = temp;
        }
        else
        {
            // if the linkedlist isn't empty then the newNode will be attached to tail and tail will become new Node
            tail->next = temp; // attaching the newNode to tail
            tail = temp;       // changing the tail to new Node
        }
    }

    return head;
}

/**
 * printLinkedList will print all the elemets of linked list
 * */
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-> "; // print the data of head
        head = head->next;           // move the head to next node
    }
    cout << "null\n";
}

/**
 * mergeTwoSortedLinkedList will take head for two sorted linked list as input and will merge them such that the final linked list is sorted
 * */
Node *mergeTwoSortedLinkedList(Node *head1, Node *head2)
{
    Node *ptr1 = head1;//ptr1 is a pointer which will point head1 basically first linkedlist
    Node *ptr2 = head2;//ptr2 is a pointer which will point head2 basically second linked list
    Node *head = new Node();//to merge them we make a newnode because we need to arrange them properly
    head->data=0;//just take any value in it .its of no use but a ptr cannot point n null thing thats why we need value
    Node *ptr3 = head;//here we point ptr3 on head in this the sorted linked list will merge in this

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)//if first linked list(ll) data is smaller it will placed first 
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;//or if 2nd then 2nd ll data will print first
            ptr2 = ptr2->next;
        }ptr3 = ptr3->next;//as if for moving to next node we will just use next
    }
    

    while (ptr1 != NULL)//we are using this if the size of 1st ll is bigger 2nd the elements are left it can be printed after the mergingof both as it is
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)//we are using this if the size of 2st ll is biggerthen 1st then the elements are left it can be printed after the mergingof both as it is
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return head->next;//here we are returning head->next because we used head for temprory purpose because a pointer cannot point to a null object
}

int main()
{
    // your code goes here
    int n, m;
    cin >> n >> m;
    Node *head1 = createLinkedList(n);
    cout << "first linkedList: ";
    printLinkedList(head1);

    Node *head2 = createLinkedList(m);
    cout << "second linkedList: ";
    printLinkedList(head2);

    Node *head = mergeTwoSortedLinkedList(head1, head2);

    cout << "sorted linkedList: ";
    printLinkedList(head);
    return 0;
}
