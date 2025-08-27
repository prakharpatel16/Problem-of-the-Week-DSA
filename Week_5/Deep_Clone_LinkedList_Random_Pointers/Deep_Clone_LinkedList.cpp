// Author: Prakhar Patel
// Date: 2025-08-27
// Description: Minimal C++ template for competitive programming with fast I/O

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast;
    #include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val){
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution{
public:
    Node* copyRandomList(Node* head){
        if(!head) return NULL;

        Node* curr = head;
        while(curr){
            Node* clone = new Node(curr->val);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }
        curr = head;
        while(curr){
            if(curr->random){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* cloneHead = head->next;
        while(curr){
            Node* clone = curr->next;
            curr->next = clone->next;
            if(clone->next) clone->next = clone->next->next;
            curr = curr->next;
        }

        return cloneHead;
    }
};