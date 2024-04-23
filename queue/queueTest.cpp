#include<iostream>
#include<queue>

using namespace std;

int main(){

    //默认构造方式构造一个队列容器
    queue<int> q1;

    //入队
    q1.push(1);
    q1.push(3);
    q1.push(5);
    q1.push(7);

    //queue容器也没有提供迭代器，因为不能遍历
//    cout<<q1.front()<<endl;
//    q1.pop();//删除队首，出队

    while(q1.empty()!=true)
    {
        cout<<q1.front()<<endl;
        q1.pop();//删除队首，出队
    }


    return 0;

    return 0;
}
