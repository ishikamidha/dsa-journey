#include<bits/stdc++.h>
using namespace std;

void no_of_digit(int N){
    int count=0;
    while(N>0){
        int last_digit=N%10;
        count+=1;
        N=N/10;
        
    }
    cout<<count<<endl;
}

int main(){
     int t;
    cin>>t;
   for(int i=0;i<t;i++){
       int N;
       cin>>N;
       no_of_digit(N);
       
   }
}