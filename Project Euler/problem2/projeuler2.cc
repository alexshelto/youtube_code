#include<iostream>
using namespace std;

int fibonacci(int n);



int main(){
  int total = 0;
  int i = 0;
  while(fibonacci(i) < 400000){
    if(fibonacci(i) % 2 == 0){//even number:
      total = total + fibonacci(i);
    }
    i++;
  }
  cout << total << endl;
  return 0;
}


int fibonacci(int n){
  if(n == 1)
    return n;
  else if(n == 2)
    return 1;
  else{
    return(fibonacci(n+2) - fibonacci(n-1));
  }
}
