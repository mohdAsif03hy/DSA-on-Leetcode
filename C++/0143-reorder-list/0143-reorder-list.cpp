/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* splitAtMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != nullptr)
            prev->next = nullptr;

        return slow;
    }

    ListNode* reverse(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return;

        // Split into two halves
        ListNode* rightHead = splitAtMid(head);

        // Reverse second half
        ListNode* right = reverse(rightHead);

        // Merge alternately
        ListNode* left = head;

        while (left != nullptr && right != nullptr) {

            ListNode* nextLeft = left->next;
            ListNode* nextRight = right->next;

            left->next = right;

            if (nextLeft == nullptr)
                break;

            right->next = nextLeft;

            left = nextLeft;
            right = nextRight;
        }
    }
};