/*
Alex Shelton Linked list tutorial 
C++
 */



#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Node{
    string data;
    Node* next;
};

class lilist{
public:
    lilist(){head = NULL;}
    void show();
    void add(string name); //adds to the end of a linked list
    void insert_front(string name);
    void remove_node(string target);

private:
    Node* head;
};

void lilist::show(){
    cout <<'\n';
    Node* printptr = head;
    while(printptr != NULL){
        cout << printptr -> data << endl;
        printptr = printptr -> next;
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
    //setting up the newly created node to become the new tail
    tmp -> data = name;
    tmp -> next = NULL;

    //Test #1: is the size = 1:
    if(head == NULL){
        head = tmp;
    }
    else{
        Node* insert = head;
        //getting to the last index
        while(insert -> next != NULL){
            insert = insert->next;
        }
        insert -> next = tmp;
    }
}

void lilist::remove_node(string target){
    //Chech #1: If the head is the target:
    if(head -> data == target){
        if(head -> next == NULL){ //only the head size 1
            head = NULL;
        }
        else{//nodes following the head
            Node* dptr = head;
            head = head -> next;
            delete dptr;
        }
    }
    else{
        Node* cursor = head;
        Node* trail; //trail is 1 behind the cursor
        
        while(cursor -> next != NULL){
            trail = cursor;
            cursor = cursor -> next;

            if(cursor -> data == target){
                trail -> next = cursor -> next;
                delete cursor;
            }
        }

    }

    cout << "Name was not found." << endl;
}


int main(){
    lilist linklist;
    
    string name;
    for(int i = 0; i < 5; i++){
        cin >> name;
        linklist.insert_front(name);
    }
    cout << "Enter: ";
    cin >> name;
    linklist.add(name);

    linklist.show();

    cout << "Enter a name to delete: ";
    cin >> name;
    
    linklist.remove_node(name);
    linklist.show();


    cout << "Enter a name to delete: ";
    cin >> name;
    
    linklist.remove_node(name);
    linklist.show();
    

    return 0;
}