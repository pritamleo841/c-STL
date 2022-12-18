//Double ended queue - deletion/addition at both ends(dynamic)

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
        cout<<i<<" ";
    cout<<endl;
    // d.pop_front();
    d.push_back(3);
    for(int i:d)
        cout<<i<<" ";

    cout<<"print 1st index element"<<d.at(1)<<endl;

    cout<<"front"<<d.front()<<"back"<<d.back()<<endl;

    for(int i:d)
        cout<<i<<" ";
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
        cout<<i<<" ";
    cout<<endl;
}