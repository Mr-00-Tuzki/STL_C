#include<iostream>
#include<set>
using namespace std;



int main(){
set<int> s;
//insert()-used for pushing element into set
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(6);
s.insert(0);
s.insert(0);
s.insert(0);
/*for (int i = 0; i < s.size(); i++)
{                                              //Doesn't work int set
    cout<<s[i]<<endl;           
}
*/
cout<<"Before erase->"<<endl;
for(int i:s){
    cout<<i<<" "<<endl;
}

s.erase(s.begin());
cout<<"After erase->"<<endl;
for(int i:s){
    cout<<i<<" "<<endl;
}

//Count function-check the number is present or not
cout<<"6 is present or not-> "<<s.count(6);

    return 0;
}