#include<iostream>
#include<set>

using namespace std;

int main()
{

    set<int> s1; //默认升序排序
    s1.insert(3);
    s1.insert(1);
    s1.insert(7);
    s1.insert(5);

    set<int>::iterator it;
    for(it = s1.begin(); it!=s1.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    set<int>::reverse_iterator it2;
    for(it2 = s1.rbegin() ; it2 != s1.rend() ; it2 ++)
        cout<<*it2<<" ";
    cout<<endl;

    set<int> s2(s1);//调用拷贝构造函数
    set<int> s3;//默认构造函数
    
    s3 = s2;//
    for(it = s3.begin(); it!=s3.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    s3.insert(10);
    s3.swap(s1);
    
    for(it = s1.begin(); it!=s1.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    for(it = s3.begin(); it!=s3.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

cout<<"***********************"<<endl;
    //将set容器中的最小值删除
    it = s3.begin();
    s3.erase(it);

    for(it = s3.begin(); it!=s3.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"-------------"<<endl;
    //将set容器中的最大值删除
    it = s3.end();
    it--;
    it = s3.erase(it);
    cout<<*it<<endl; //2,不知道为啥
    it++;//迭代器会重新指向set容器中的第一个元素
    cout<<*it<<endl;    //3

    for(it = s3.begin(); it!=s3.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    //如果删除的元素不在set中; erase函数如果需要删除的元素在set中返回true，否则返回false
    


#if 0
    //set容器不支持使用反向迭代器对元素进行删除
    set<int>::reverse_iterator it3 = s3.rbegin();
    s3.erase(it3);
    for(it = s3.begin(); it!=s3.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

#endif

    return 0;
}