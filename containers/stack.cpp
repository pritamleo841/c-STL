#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string>s;
    s.push("pritam");
    s.push("sanchari");
    s.push("sharma");

    cout<<"top : "<<s.top();
    cout<<endl;
    s.pop();

    cout<<"top : "<<s.top();
    cout<<endl;

    cout<<"size"<<s.size();
    cout<<endl;
    cout<<"empty"<<s.empty();
    cout<<endl;
}