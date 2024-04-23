#include<iostream>
#include<map>

using namespace std;

class Student{
public:
    Student(){};
    Student(int id, string s):id(id),name(s){};

public:
    int id;
    string name;

    friend ostream& operator <<(ostream &out,Student &t){
        out<< t.name;
        return out;
    }
};


int main(){

    Student s1(1,"xiaoli");
    Student s2(2,"zhang");
    Student s3(3,"wang");

    map<int,Student> stus;

    stus.insert(pair<int,Student>(s1.id,s1));

    stus.insert(map<int,Student>::value_type(s2.id,s2));

    stus[3] = s3;

    map<int,Student>::iterator it ;

    for(it = stus.begin() ; it != stus.end() ; it ++)
    {
        pair<int,Student> p = *it;
        cout << p.first <<":"<<p.second.id <<" : " <<p.second.name<<endl;
    }

    map<int,Student>::iterator it2;
    it2 = stus.find(3);
    if(it2 == stus.end()) cout<<"cannot found"<<endl;
    else cout<<"3 :"<<(*it2).second<<endl;

    cout<<stus.at(3)<<endl;

    cout<<stus.at(30)<<endl; //抛出error

    return 0;
}