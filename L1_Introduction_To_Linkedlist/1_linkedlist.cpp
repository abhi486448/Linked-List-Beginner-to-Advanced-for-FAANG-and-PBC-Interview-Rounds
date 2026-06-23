#include<bits/stdc++.h>
using namespace std;

// struct Node
// {
//     public:
//         int data;
//         Node* next;
        
//     public:
//         Node(int value,Node* p){
//             data = value;
//             next = p;
//         }

//     public:
//         Node(int value){
//             data = value;
//             next = nullptr;
//         }
// };

// since struct don't have featurs which class provide so we will mostly use class

class Node
{
    public:
        int data;
        Node* next;
        
    public:
        Node(int value,Node* p){
            data = value;
            next = p;
        }

    public:
        Node(int value){
            data = value;
            next = nullptr;
        }
};

Node* convertArrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthOfLL(Node* head){
    int count=0;
    Node* mover = head;

    while (mover)
    {
        mover = mover->next;
        count++;
    }
    return count;
    
}

int checkIfPresent(Node* head, int value){
    Node* mover = head;

    while (mover)
    {
        if(mover->data == value){
            return 1;
        }
        mover = mover->next;
    }
    return 0;
}


int main(){


    // Node x = Node(5, nullptr);
    // cout<< x; // this will throw error
    // cout<< x.data;

    // mostly use
    // Node* x = new Node(5);

    // cout<< x-> data;

    vector<int> arr={81, 32, 63, 74, 35};

    Node* head = convertArrToLL(arr);

    // cout<< head->data;

    Node* mover = head;

    // while (mover->next != nullptr)
    // {
    //     cout<< mover->data<<" ";
    //     mover = mover->next;
    // }

    // int length = lengthOfLL(head);

    // cout<< length;

    int search = checkIfPresent(head, 63);
    cout<< search;

    

    return 0;

}
