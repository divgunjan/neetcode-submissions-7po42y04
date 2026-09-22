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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return {};
        vector<int> v;   
        for(int i=0;i<lists.size();i++){
            ListNode* temp = lists[i];
            while(temp!=nullptr){
                v.push_back(temp->val);
                temp = temp->next;  
            }
        }
        sort(v.begin(), v.end());

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for(int x:v){
            ListNode* newNode = new ListNode(x);
            if(head == nullptr){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
    return head;
    }
};
