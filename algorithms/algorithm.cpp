#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"binary search :: "<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"lower bound :: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound :: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a = 3;
    int b = 4;
    cout<<"max : "<<max(a,b)<<endl<<"min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s="abcdef";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate: "<<endl;
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"after sort: "<<endl;
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}