class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int sz = 0;
        ListNode* temp = head;

        while(temp != NULL){
            temp = temp->next;
            sz++;
        }

        // delete head
        if(sz == n){
            return head->next;
        }

        ListNode* prev = head;

        for(int i=1;i<(sz-n);i++){
            prev = prev->next;
        }

        ListNode* toDel = prev->next;
        prev->next = toDel->next;
        delete toDel;

        return head;
    }
};
