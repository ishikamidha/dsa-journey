#include<bits/stdc++.h>
using namespace std;
int main(){
    //VECTOR
    vector<int> v={1,2,3,4,5,6};
    v.push_back(6);
    //v.emplace_bank
    //vector<pair<int,int>>vec; //v.push_back({1,2}) // v.emplace_bank(1,2)
    // vector<int> v(5,100)
    //vector<int>v1(v)




    /*vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<< " ";
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();
    
    */


    cout<<"Size:"<< v.size()<<endl;
    for(int x:v){
        cout<<x<<" ";


    }
    v.empty();
    sort(v.begin(), v.end());
    cout<<endl;
    

//MAP
map<string,int> m;
m["apple"]=1;
m["banana"]=2;
m["cherry"]=3;
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;

}
//SET(SORTED,UNIQUE)
set<int> s ={5,3,1,4,1,3};
//INSERT,EMPLACE,FIND,ERASE
for(int x : s){
    cout<<x<<" ";


}
cout<<endl;


//UNORDERED MAP
unordered_map<string,int> um;
um["apple"]=1;
um["banana"]=2;
um["cherry"]=3;
for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;

}



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


//PAIRS
pair<int, int> p = {1, 3};
cout << p.first << " " << p.second;

//PRIORITY QUEUE(MAX HEAP)
priority_queue<int> pq;
pq.push(3);
pq.push(1);
pq.push(5);
cout << pq.top();  // prints 5, largest first
pq.pop();


//MINIMUM HEAP
priority_queue<int, vector<int>, greater<int>> minHeap;
pq.push(3);
pq.push(1);
pq.push(5);
cout << pq.top();  
pq.pop();





return 0;}

