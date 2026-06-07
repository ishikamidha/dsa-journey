#include<bits/stdc++.h>
using namespace std;
int main(){
    //VECTOR
    vector<int> v={1,2,3,4,5,6};
    v.push_back(6);
    cout<<"Size:"<< v.size()<<endl;
    for(int x:v){
        cout<<x<<" ";


    }
    cout<<endl;


//MAP
map<string,int> m;
m["apple"]=1;
m["banana"]=2;
m["cherry"]=3;
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;

}
//SET
set<int> s ={5,3,1,4,1,3};
for(int x : s){
    cout<<x<<" ";


}
cout<<endl;


// STACK
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
cout << "Top: " << st.top() << endl;
st.pop();
cout << "Top after pop: " << st.top() << endl;

// QUEUE
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
cout << "Front: " << q.front() << endl;
q.pop();
cout << "Front after pop: " << q.front() << endl;

return 0;}


