#include<iostream>
#include<stack>

using namespace std;

int main()
{
    //默认构造stack
    stack<int> stk;

    //入栈
    stk.push(1);
    stk.push(3);
    stk.push(5);
    stk.push(7);

    //stack容器没有迭代器
    stk.pop(); //直接出栈，并且没有返回值

    while(stk.empty() != true)
    {
        cout << stk.top()<<endl;
        stk.pop();
    }


    return 0;

}

    


