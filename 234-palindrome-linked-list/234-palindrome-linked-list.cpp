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
        string str;
        if(head->next==NULL){
            return true;
        }
        while(head){
            str.push_back(head->val);
            head = head->next;
        }
        string x = str;
        reverse(str.begin(),str.end());
        if(x==str){
            return true;
        }
        return false;
    }
    
};