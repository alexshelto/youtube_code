/*
Alex Shelton Linked list tutorial 
C++
 */


#include <string>
#include <iostream>

using namespace std;


struct Node{
    string data;
    Node* next; // ptr -> next 
};

class lilist{
public:
    lilist(){head = NULL;}

    void show();
    void insert_front(string name);
    void add(string name);
    void remove(string target);

private:
    Node* head;
};



void lilist::show(){
    cout << '\n';
    
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp -> data << endl;
        tmp = tmp -> next;
    }
}


void lilist::insert_front(string name){
    Node* tmp = new Node;
    tmp -> data = name;
    tmp -> next = head;
    head = tmp;
}

void lilist::add(string name){
    Node* tmp = new Node;
    tmp -> data = name;
    tmp -> next = NULL;

    //Test #1 size:
    if(head == NULL){
        head = tmp;
    }
    else{
        Node* insert = head;
        while(insert -> next != NULL){
            insert = insert -> next;
        }
        //once we have gotten to the last node:
        insert -> next = tmp;
    }
}

void lilist::remove(string target){
    //step 1: check head
    if(head -> data == target){
        if(head -> next == NULL)
            head = NULL;
        else{
            Node* dptr = head;
            head = head -> next;
            delete dptr;
        }
    }
    //if not head:
    else{
        Node* cursor = head;
        Node* trail; //trails 1 behind cursor

        while(cursor -> next != NULL){
            trail = cursor;
            cursor = cursor -> next;

            if(cursor -> data == target){
                trail -> next = cursor -> next;
                delete cursor;
            }
        }
    }
}


int main(){

    lilist linklist;

    string name;

    for(int i = 0; i < 5; i++){
        cout << "Enter a name: ";
        cin >> name;
        linklist.insert_front(name);
    }

    cout << "enter name to delete:  ";
    cin >> name;
    linklist.remove(name);
    linklist.show();

    cout << "enter name to delete:  ";
    cin >> name;
    linklist.remove(name);

    linklist.show();


    cout << "enter name to delete:  ";
    cin >> name;
    linklist.remove(name);
    linklist.show();


    return 0;
}