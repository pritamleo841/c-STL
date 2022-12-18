//Dynamic array

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>v={1,2,3,4};
    cout<<v.capacity()<<endl;

    v.push_back(5);
    cout<<v.capacity()<<endl;

    cout<<"size"<<v.size()<<endl;
    cout<<"Element at 2nd index"<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<" "<<"back"<<v.back()<<endl;

    v.pop_back();

    cout<<v.size()<<endl;

    for(int i:v)
        cout<<i<<" ";

    vector<int>vv(5,1);
    cout<<"capacity"<<vv.capacity();
    for(int i:vv)
        cout<<i<<"-";
    vector<int>l = v;
    for(int i:l)
        cout<<i<<",";
}