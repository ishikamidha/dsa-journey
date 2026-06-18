#include<bits/stdc++.h>
using namespace std;

void primeNo(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count+=1;
        if((n/i)!=i){
            count+=1;
        }
        }
        
        
    }
    if(count==2){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }




}
int main(){
       int t;
    cin>>t;
   for(int i=0;i<t;i++){
       int n;
       cin>>n;
       primeNo(n);

}}