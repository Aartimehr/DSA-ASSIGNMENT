
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode*head=llist;
    while(head!=NULL) {
        SinglyLinkedListNode*next=head->next;
        while(next!=NULL&&next->data==head->data)
            next=next->next;
        head->next=next;
        head=next;
        if(next!=NULL)next=next->next;
    }
    return llist;
}
