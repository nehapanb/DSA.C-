#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>up;
    up.insert({10,"anu"});
    up.insert({10,"Neha"});
    up.insert({10,"ruchi"});

    for(auto p:up)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
}
