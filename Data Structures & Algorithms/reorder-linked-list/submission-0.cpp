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
    ListNode* ReverseList(ListNode* head ){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            ListNode* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast && fast->next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* second = ReverseList(slow -> next);
        slow -> next = nullptr;
        ListNode* first = head;
        while(second && head){
            ListNode* tmp1 = first -> next;
            first -> next = second;
            ListNode* tmp2 = second -> next;
            second -> next = tmp1;
            second = tmp2 ;
            first = tmp1 ;
        }
    }
};
