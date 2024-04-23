#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> lst;

    lst.push_back(10); //尾部插入一个元素
    lst.push_front(20); //头部插入一个元素


    //构造一个迭代器
    list<int>::iterator it;
    for(it = lst.begin(); it !=lst.end() ;it++)
        cout<<*it<<" ";
    cout<<endl;
#if 0
    lst.pop_front();
    for(it = lst.begin(); it !=lst.end() ;it++)
        cout<<*it<<" ";
    cout<<endl;
#endif
    
#if 0
    //返回第一个结点
    int x = lst.front();
    cout<<"front: "<<x<<endl;
    x = lst.front();
    cout<<"front: "<<x<<endl;

#endif
    lst.push_back(30);
    lst.push_back(40);
    //20,10,30,40
#if 0
    list带参构造

    lst.push_back(30);
    lst.push_back(40);

    //list容器的反向迭代器
    list<int>::reverse_iterator it1;
    for(it1 = lst.rbegin() ; it1 != lst.rend(); it1 ++)
        cout<<*it1<<" ";
    cout<<endl;
    
    //构造对象初始化为3个5
    list<int> lst1(3,5);

    list<int>::iterator it2;
    for(it2 = lst1.begin(); it2 !=lst1.end() ;it2++)
        cout<<*it2<<" ";
    cout<<endl;

    //带参构造，参数是迭代器
//    list<int> lst2(lst.begin()+1,lst.begin()+2);  error,list的迭代器不能+n，只能++


    list<int> lst3(lst);

    for(it = lst.begin(); it !=lst.end() ;it++)
        cout<<*it<<" ";
    cout<<endl;
#endif

    //list赋值
    list<int> lst4,lst5;
    lst4.assign(lst.begin(),--lst.end());
    list<int>::iterator it2;
    for(it2 = lst4.begin() ; it2 != lst4.end(); it2++)
        cout<<*it2<<" ";
    cout<<endl;

    lst5.assign(5,6);

    for(it2 = lst5.begin() ; it2 != lst5.end(); it2++)
        cout<<*it2<<" ";
    cout<<endl;

    lst4.swap(lst5);

    for(it2 = lst4.begin() ; it2 != lst4.end(); it2++)
        cout<<*it2<<" ";
    cout<<endl;

    for(it2 = lst5.begin() ; it2 != lst5.end(); it2++)
        cout<<*it2<<" ";
    cout<<endl;

    //在30位置插入一个50
    for(it2 = lst5.begin() ; it2!= lst5.end();it2++)
    {
        if(*it2 == 30)
            break;
    } 
    if(it2 != lst5.end())
        lst5.insert(it2,50);
    
    for(it2 = lst5.begin() ; it2 != lst5.end() ;it2++)
        cout<<*it2<<" ";
    cout<<endl;

    //反转lst5
    lst5.reverse();
    for(list<int>::iterator it_tem = lst5.begin(); it_tem != lst5.end(); it_tem++)
        cout<<*it_tem<<" ";
    cout<<endl;

    return 0;
}
