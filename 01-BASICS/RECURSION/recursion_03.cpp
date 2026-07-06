#include<bits/stdc++.h>
using namespace std;
void printReverse(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    printReverse(i-1,n);


   /* BACKTRACKING METHOD
     if(i>n){
          return
        };
        printNumber(i+1,n);
        cout<<i<<endl;
        
        int main(){
        int n;
        cin>>n;
        printNumber(1,n);
        }                   */
    
    
}
int main(){
  int n;
  cin>>n;
  printReverse(n,n);
}