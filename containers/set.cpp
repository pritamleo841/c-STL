#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int>s; //sorted order

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for(auto i:s)
        cout<<i<<endl;

    set<int>::iterator it = s.begin();
    s.erase(it);
    cout<<"after erase"<<endl;
    for(auto i:s)
        cout<<i<<endl;

    cout<<"5 is present or not?"<<s.count(5)<<endl;
    cout<<"5 is present or not?"<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(3);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it;
    }
    cout<<endl;
    cout<<"value present ar itr :: "<<*itr<<endl;

}