#include<iostream>
#include<queue>

using namespace std;

int main(){
    deque<int> d = {10,20,30,40};

    //头部插入
    d.push_front(100);

    for(auto it = d.begin();it!=d.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    d.pop_front();
    for (auto it = d.begin(); it != d.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    d.erase(d.begin());
    for (auto it = d.begin(); it != d.end(); it++)
        cout<<*it<<" ";
    cout<<endl;





}
