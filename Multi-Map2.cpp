#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,string>mp;
    mp.insert({10,"neha"});
    mp.insert({20,"Ruchi"});
    mp.insert({30,"prano"});
    mp.insert({20,"qomo"});

    for(auto p:mp)
    {
 cout<< p.first<<","<< p.second<<"\n";
    }
    auto t = mp.find(10);
    if(t!=mp.end()){
        mp.erase(t);

    }

    else{
        cout<<"key not found";
    }

    mp.erase(10);
    for(auto p:mp){

        cout<<p.first<<","<<p.second<<"\n";

    }

}