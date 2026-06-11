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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int cnt=0;
        // check if k nodes exist kr rha h ya nahi
        while(cnt<k){
            if(temp==nullptr)
            return head;

            temp=temp->next;
            cnt++;
        } 
        // recursivelly call for rest of the LL
        ListNode* prevNode=reverseKGroup(temp,k);

        //reverse the current group
        temp=head; cnt=0;
        while(cnt<k){
           ListNode* ptr=temp->next;
           temp->next=prevNode;
           prevNode=temp;
           temp=ptr;
           cnt++; 
        }
        return prevNode;
    }
};