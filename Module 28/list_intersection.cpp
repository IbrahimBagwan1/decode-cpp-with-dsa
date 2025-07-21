#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA=0, countB=0;
        while(tempA!=NULL){
            countA++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            countB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;

        if(countA > countB){
            int diff = countA-countB;
            for(int i=1; i<=diff; i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            int diff = countB-countA;
            for(int i=1; i<=diff; i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};

// Helper function to print list from a node
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    // Create two linked lists that intersect
    // List A: 1 -> 2 \
    //                 -> 8 -> 9
    // List B:    3 -> 4 /

    ListNode* intersect = new ListNode(8);
    intersect->next = new ListNode(9);

    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = intersect;

    ListNode* headB = new ListNode(3);
    headB->next = new ListNode(4);
    headB->next->next = intersect;

    Solution sol;
    ListNode* result = sol.getIntersectionNode(headA, headB);
    if(result)
        cout << "Intersection at node with value: " << result->val << endl;
    else
        cout << "No intersection found.\n";

    return 0;
}
