#include <bits/stdc++.h>
using namespace std;
class ListNode;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* temp = new ListNode();
        int carry = 0;
        ListNode* cur = temp;
        while (l1 || l2 || carry)
         {
            int s = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = s / 10;
            cur->next = new ListNode(s % 10);
            cur = cur->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return temp->next;
    }
};
