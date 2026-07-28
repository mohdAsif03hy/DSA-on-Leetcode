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

    ListNode* splitAtMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != nullptr)
            prev->next = nullptr;

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right)
    {
        ListNode dummy(-1);
        ListNode* tail = &dummy;

        while (left != nullptr && right != nullptr)
        {
            if (left->val <= right->val)
            {
                tail->next = left;
                left = left->next;
            }
            else
            {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        if (left != nullptr)
            tail->next = left;
        else
            tail->next = right;

        return dummy.next;
    }

    ListNode* mergeSort(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* rightHead = splitAtMid(head);

        ListNode* left = mergeSort(head);
        ListNode* right = mergeSort(rightHead);

        return merge(left, right);
    }

    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};