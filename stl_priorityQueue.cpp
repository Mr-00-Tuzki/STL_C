#include<iostream>
#include<queue>

using namespace std;



int main(){
    //Max Heap creation
    priority_queue<int> maxi;

    //Min Heap creation
    priority_queue<int,vector<int>,greater<int> > mini;

   cout<<"Max Heap->"<<endl;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" "<<endl;
        maxi.pop();
    }
    cout<<"Min Heap->"<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m=mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" "<<endl;
        mini.pop();
    }
    
    // empty() operation
    cout << " Empty or not-> " << mini.empty() << endl;


    return 0;
}