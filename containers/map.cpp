#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string>m;

    m[1]="pritam";
    m[2]="sharma";

    m.insert({3,"sanchari"});
    for(auto i:m)
        cout<<i.first<<":"<<i.second<<endl;

    cout<<"finding 3-> "<<m.count(3)<<endl;

    m.erase(3);

    cout<<"after erase"<<endl;
    for(auto i:m)
        cout<<i.first<<":"<<i.second<<endl;
    
    auto it = m.find(2);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" : "<<(*i).second<<endl;
    }

}