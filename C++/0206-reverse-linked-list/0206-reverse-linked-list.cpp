class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr)
        {
            ListNode* next = curr->next; // 1️⃣ store
            curr->next = prev;           // 2️⃣ reverse
            prev = curr;                // 3️⃣ shift prev
            curr = next;                // 4️⃣ shift curr
        }

        return prev;
    }
};
