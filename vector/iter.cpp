#include<iostream>
#include<vector>

using namespace std;

int main()
{

#if 0
    vector<int> vecIntA;
    int iArray []= {100,1,20,30,40};

    vector<int> vecIntB;
    vecIntA.assign(iArray,iArray+5);


    //构造一个迭代器对象
    vector<int>::iterator it;

    //让迭代器it指向 vecIntA 容器中的第一个元素
    it = vecIntA.begin();

    cout << *it << endl;

    //通过循环使用迭代器遍历 vecIntA 的元素
    for(it = vecIntA.begin() ; it!= vecIntA.end();it++){
            cout<<*it<<" ";
    }
    cout<<endl;

#endif

#if 0
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator it = v.begin()+3;

    v.insert(it,8);

    cout<< *it <<endl;

    for(it = v.begin(); it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
#endif

    //删除元素后导致迭代器失效
    vector<int> cond = {1,2,3,3,3,3,4,5,6};

    vector<int>::iterator it;

#if 0
    for(it = cond.begin(); it != cond.end() ;)
    {
        if(*it == 3)
            cond.erase(it);//it可能失效
        else   
            it++;

    }
#endif

    for(it = cond.begin() ; it != cond.end();)
    {
        if(*it == 3){
            it = cond.erase(it);//推荐使用
        }
        else it++;
    }


    return 0;
}