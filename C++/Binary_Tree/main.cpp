

#include <iostream>
using namespace std;


// Binary tree node declaration
struct node {
    int val;
    node *left;
    node *right;
};


class btree {
    public:
        btree();
        ~btree();

        void insert(int value);
        node *search(int value);
        void destroy_tree();
        void in_order() const;

        void show() const;

    private:


        void show(node *leaf) const;
        void destroy_tree(node *leaf);
        void insert(int value, node *leaf);
        node *search(int value, node *leaf);
        void in_order(node *leaf) const;

        node *root;
};

// Public member functions
btree::btree() {
    root = NULL;
}

btree::~btree() {
    destroy_tree();
}

void btree::destroy_tree() {
    destroy_tree(root);
}



void btree::insert(int value) {
    if(root != NULL) {
        insert(value, root);
    }
    else {
        root = new node;
        root -> val = value;
        root -> left = NULL;
        root -> right = NULL;
    }
}

node *btree::search(int value) {
    return search(value, root);
}


void btree::in_order() const {
    if(root != NULL) {
        in_order(root);
        cout << endl;
    }
    else {
        cout << "tree is empty" << endl;
    }
}



// Private member functions 

// Recursively Delete all nodes of the tree
void btree::destroy_tree(node *leaf) {
    if(leaf == NULL) {
        return;
    }

    // Delete both subtrees
    destroy_tree(leaf -> left);
    destroy_tree(leaf -> right);

    // Then delete the node
    cout << "deleting " << leaf -> val << endl;
    delete leaf;
}

void btree::insert(int value, node *leaf) {
    // Insert on left hand side
    if(value < leaf -> val) {
        // If the left leaf is not null recursively call insert on next node
        if(leaf -> left != NULL) insert(value, leaf -> left);

        // Else create new node and update the value
        else {
            leaf -> left = new node;
            leaf -> left -> val = value;
            leaf -> left -> left = NULL;  //set left child to NULL
            leaf -> left -> right = NULL; //set right child to NULL
        }
    }
    // Insert on right hand side
    else if(value >= leaf -> val) {
        if(leaf -> right != NULL) insert(value, leaf -> right);

        // Else create a new node and update the value
        else {
            leaf -> right = new node;
            leaf -> right -> val = value;
            leaf -> right -> left = NULL;  //set left child to NULL
            leaf -> right -> right = NULL; //set right child to NULL
        }
    }
}


node *btree::search(int value, node *leaf) {
    if(leaf != NULL) {
        if(leaf -> val == value) {
            return leaf;
        }
        if(value < leaf -> val) {
            return search(value, leaf -> left);
        }
        else {
            return search(value, leaf -> right);
        }
    }
    else {
        return NULL;
    }
}

void btree::in_order(node *leaf) const {
    if(leaf != NULL) {
        in_order(leaf -> left);
        cout << leaf -> val << " ";
        in_order(leaf -> right);
    }
}




int main() {
    btree tree; //declaring the binary tree

    // Inserting
    tree.insert(6);
    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(10);
    tree.insert(20);
    tree.insert(8);

    
    tree.in_order();

    return 0;
}
