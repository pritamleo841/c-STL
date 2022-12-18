#include<iostream>
#include<queue>

using namespace std;

int main(){
    //creates max heap
    priority_queue<int>maxH;

    //creates min heap
    priority_queue<int,vector<int>,greater<int>>minH;
    
    maxH.push(1);
    maxH.push(2);
    maxH.push(3);
    maxH.push(4);

    cout<<"size : "<<maxH.size()<<endl;

    int n = maxH.size();
    for(int i=0;i<n;i++){
         cout<<maxH.top()<<" ";
         maxH.pop();
    }
    cout<<endl;

    minH.push(1);
    minH.push(2);
    minH.push(3);
    minH.push(4);

    cout<<"size : "<<minH.size()<<endl;
    
    int m = minH.size();
    for(int i=0;i<m;i++){
         cout<<minH.top()<<" ";
         minH.pop();
    }
    cout<<endl;

    cout<<minH.empty()<<" "<<maxH.empty();
}