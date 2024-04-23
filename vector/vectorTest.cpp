#include<iostream>
#include<vector>

using namespace std;

int main()
{

#if 0
    int iarr[] = {1,2,3,4,5};
    vector<int > v1(iarr,iarr+5);//左闭右开[)

    vector<int> v2(3,10);//存储3个10
    for(int i = 0; i < 3 ; i++)
        cout<<v2[i]<<" ";
    cout<<endl;

    vector<int> v3(v1);
    vector<int> v4 = v1;
    
    for(int i = 0; i < 3 ; i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    
#endif

#if 0
    vector<int> vecIntA,vecIntB,vecIntC,vecIntD;
    int iArray[] = {0,1,2,3,4};

    vecIntA.assign(iArray,iArray+5); 

    vecIntB.assign(iArray,iArray+4);

    for(int i = 0 ; i < vecIntB.size() ; i++)
        cout<<vecIntB[i]<<" ";
    cout<<endl;

    for(int i = 0 ; i < vecIntA.size() ; i++)
        cout<<vecIntA[i]<<" ";
    cout<<endl;

    vecIntC.assign(10,10);
    for(int i = 0 ; i < vecIntC.size() ; i++)
        cout<<vecIntC[i]<<" ";
    cout<<endl;

    vecIntA.swap(vecIntC);
    for(int i = 0 ; i < vecIntA.size() ; i++)
        cout<<vecIntA[i]<<" ";
    cout<<endl;
    for(int i = 0 ; i < vecIntC.size() ; i++)
        cout<<vecIntC[i]<<" ";
    cout<<endl;
   
    vecIntD = vecIntA;
    for(int i = 0 ; i < vecIntC.size() ; i++)
        cout<<vecIntC[i]<<" ";
    cout<<endl;
#endif

#if 0
    vector<int> v1;
    cout<<"v1:size: "<<v1.size()<<endl;

    if(v1.empty()){
        cout<<"v1 is a empty"<<endl;
    }
    
    int iArray[] = {0,1,2,3,4};
    v1.assign(iArray,iArray+5);

    //容器变长    
    v1.resize(10);
    for(int i = 0 ; i <v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //容器变短
     v1.resize(3);
    for(int i = 0 ; i <v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
#endif


    int a[] = {1,2,3,4};
    vector<int> v1(a,a+sizeof(a)/sizeof(*a));
    for(int i = 0 ; i <v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //使用下标法访问vector容器中的元素，并且下标越界
  //  v1[2] = 100;//如果下标越界，可能会导致程序异常终止

 //   v1.at(8) = 100;//出问题会报错

    //末尾插入一个圆素

    v1.push_back(10);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //删除末尾的元素
    v1.pop_back();
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;



    v1.insert(v1.begin()+2,100);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //在指定位置插入多个元素
    v1.insert(v1.begin()+3,3,1000);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    int b[] = {40,50,60,70,80,90};
    //将指定的区间中的元素插入到指定位置
    v1.insert(v1.begin()+7,b+1,b+5);

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector<int> v2(b,b+sizeof(b)/sizeof(*b));

    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    
    v1.insert(v1.end(),v2.begin(),v2.begin()+4);
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    

    return 0;

}