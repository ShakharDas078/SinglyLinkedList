int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int c = 1, i = 1;
        SinglyLinkedListNode *ptr = head;
        while(ptr->next != NULL){
            c += 1;
            ptr = ptr->next;
        }
        if(positionFromTail == 0)
            return ptr->data;
        ptr = head;
        c = c - positionFromTail;
        while(i != c){
            ptr = ptr->next;
            i += 1;
        }
        return ptr->data;
}

