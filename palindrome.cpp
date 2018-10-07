#include <iostream>
using namespace std;
int palindrome(int value) {
  int temp = value, rev = 0;
  while(temp > 0) {
    int l = temp % 10;
    rev = rev * 10 + l;
    temp /= 10;
  }
  if(rev == value) {
      return 1;
  }else 
  return 0;
}
int main() {
  int v;
  cout<<"Enter a value : "<<endl;
  cin>>v;
  if(palindrome(v)) {
      cout<<"Is A plaindrome!"<<endl;  
  }else 
  cout<<"Not a Palindrome "<<endl;
  return 0;
}
