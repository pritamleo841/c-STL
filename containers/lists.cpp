//Lists - doubly linked lists

#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.erase(l.begin());
    for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.push_back(3);

    l.pop_front();

    cout<<"size"<<l.size();
    cout<<endl;
    list<int>n=l;

    for(int i:n)
        cout<<i<<" ";
    cout<<endl;

    list<int>m(4,100);
    for(int i:m)
        cout<<i<<" ";
    cout<<endl;
    
}