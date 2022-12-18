//First In First Out

#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string>q;
    q.push("pritam");
    q.push("sanchari");
    q.push("sharma");

    cout<<q.front()<<" "<<q.back()<<endl;

    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;

    cout<<"size"<<" : "<<q.size();
}