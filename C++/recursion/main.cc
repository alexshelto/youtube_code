/*
Alex Shelton C++ Recursion Tutorial
 */


#include <iostream>
using namespace std;


//Base case: ending point for your function

void print_num(int num){
    //base case:
    if(num < 1)
        return;
    else{ //if number size > 1
        //cout << num << endl;
        print_num(num-1); /// 
        cout << "Leaving recursive function" << endl;
        cout << num << endl;
        return;
    }
}

int factorial(int n){
    //base case:
    if(n <= 1)
        return 1;
    else{
        //return (n-1)
        return(n* factorial(n-1));
    }



}


int main(){
    print_num(10);

    return 0;
}