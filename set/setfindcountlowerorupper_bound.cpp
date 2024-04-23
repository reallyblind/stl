#include<iostream>
#include<set>

using namespace std;

class CStudent{
public:
    CStudent(int id, string name):SId(id),SName(name){};

    int SId;
    string SName;
};

class StuFunctor{
public:
    bool operator()(const CStudent&s1,const CStudent& s2)const{
        return (s1.SId>s2.SId);
    }

};


int main()
{
    set<int,less<int>> s1;
    set<int,greater<int>> s2;

    s1.insert(1);
    s1.insert(5);
    s1.insert(3);
    s1.insert(7);
    s1.insert(10);
    s1.insert(9);
    s1.insert(4);

    s2.insert(1);
    s2.insert(5);
    s2.insert(3);

    set<int>::iterator it;
    cout<<"s1 :";
    for(it = s1.begin(); it != s1.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"s2 :";
    for(it = s2.begin(); it != s2.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    set<CStudent,StuFunctor> stu;

    stu.insert(CStudent(10,"lina"));
    stu.insert(CStudent(2,"xiaom"));
    stu.insert(CStudent(5,"huawei"));
    stu.insert(CStudent(130,"apple"));
    stu.insert(CStudent(50,"mingming"));

    set<CStudent,StuFunctor>::iterator it1;
    for(it1 = stu.begin(); it1 != stu.end(); it1 ++)
        cout<<it1->SId<<" ";
    cout<<endl;

    for(it = s1.begin(); it != s1.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;

    pair<set<int>::iterator, set<int>::iterator> p = s1.equal_range(20);
    cout << *(p.first) << endl;
    cout << *(p.second) << endl;

    return 0;
}


