#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head);
void display(ListNode * head);

int main()
{
    ListNode * z = new ListNode(2);
    ListNode * y = new ListNode(1, z);
    ListNode * x = new ListNode(1, y);
    
    ListNode * result = deleteDuplicates(x);

    display(result);

    return 0;
}

ListNode* deleteDuplicates(ListNode* head) {

    ListNode* t_head = head;

    while (head && head->next)
    {
        if(head->val == head->next->val)
            head->next = head->next->next;
        else
            head = head->next;
    }
    return t_head;
}

void display(ListNode * head){
    while(head->next){
        cout << head->val << " ";
        head = head->next;
    }
    cout << head->val << " ";
}