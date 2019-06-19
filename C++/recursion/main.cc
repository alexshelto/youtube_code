/*
Alex Shelton
C++ Recursion
 */


// An example of direct recursion
// void directRecFun()
// {
//     // Some code....

//     directRecFun();

//     // Some code...
// }

// // An example of indirect recursion
// void indirectRecFun1()
// {
//     // Some code...

//     indirectRecFun2();

//     // Some code...
// }
// void indirectRecFun2()
// {
//     // Some code...

//     indirectRecFun1();

//     // Some code...
// }

#include <iostream>
using namespace std;


//works its way down to 1 then calculates up from 1 -> num
int factorial(int num){
    //base case: without this the program will run forever
    if(num <= 1){return 1;} //ends the function
    else{ //return the num-1 back into the function to calculate again
        return(num * factorial(num-1));
    }
}

//calculate the sum of the first n natural numbers
int calc_sum(int n){
    if(n != 0){
        cout << "n = " << n+(n-1) << endl;
        return (n + calc_sum(n-1));
    }
    else{
        return n;
    }
}

void print_num(int num){
    if(num < 1)
        return;
    else{
        cout << num << ' ';
        (print_num(num-1));
        cout << num << ' ';
        return;
    }
}

int main(){
    cout << factorial(5) << endl;
    cout << calc_sum(3) << endl;

    print_num(20);
    return 0;
}