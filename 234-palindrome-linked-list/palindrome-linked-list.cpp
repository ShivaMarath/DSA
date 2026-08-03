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
    bool isPalindrome(ListNode* head) {
        vector<int> compare;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        while(fast!= NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        while(slow != NULL){
            compare.push_back(slow->val);
            slow = slow->next;
        }

        reverse(compare.begin() , compare.end());
        for(int i = 0; i<compare.size(); i++){

            if(temp->val != compare[i])return false;
            if(temp->val == compare[i]){
                temp = temp->next;
            }
            
        }
        return true;

    }
};