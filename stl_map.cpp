#include<iostream>
#include<map>
using namespace std;



int main(){
map<int,string> m;
m[1]="Tushar";
m[13]="Sahu";
m[5]="Kumar";
m.insert({6,"is"});

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

    return 0;
}