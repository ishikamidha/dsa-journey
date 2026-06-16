#include<bits/stdc++.h>
using namespace std;
void reverse_no(int n){
    int rev_no=0;
    int dup=n;
    while(n>0){
        int last_digit=n%10;
       
         rev_no=(rev_no*10)+last_digit;
         n=n/10;

    }
    if(rev_no==dup) cout<<"true";
    else cout<<"false";
    cout<<endl;
}
int main(){

int t;
    cin>>t;
   for(int i=0;i<t;i++){
       int n;
       cin>>n;
       reverse_no(n);
       
   }}