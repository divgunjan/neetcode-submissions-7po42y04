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
    // ListNode* rev(ListNode* head) {
    // ListNode* prev = nullptr;
    // ListNode* curr = head;
    // while (curr!=nullptr){
    //     ListNode* nextn = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = nextn;
    //   } 
    // return prev;
    // }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* tail= dummy;
        vector<int> sums;
        int carry =0;

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int sum = carry;
            if(l1!=nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr) {
                sum+=l2->val;
                l2 = l2->next;
                }
            sums.push_back(sum);
            
            carry = sum / 10;
            int digit = sum % 10;

            tail->next = new ListNode(digit);
            tail = tail->next;
        }
        ListNode* head = dummy->next;
        delete dummy;
    return head;
    }
};
