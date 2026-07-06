#include<bits/stdc++.h>
using namespace std;

//PARAMETERIZED 
void sum_of_first_N(int i,int sum){
    if(i<1){
        cout<<sum;
        return;

    }
    sum_of_first_N(i-1,sum+i);    
}
int main(){
  int n;
  cin>>n;
  sum_of_first_N(n,0);
}

//FUNCTIONAL
/* int  sum_of_first_n(int n){
            if(n==0){
            return 0;}
            else{
             return n+sum_of_first_n(n-1);
            }
}
            int main(){
            int n;
            cin>>n;
            cout<<sum_of_first_n(n);
              }







*/