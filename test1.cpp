#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a1={10,20,30};
    vector<int> a2;
    //Explicit iterator;
    vector<int>::iterator it;
    it=a1.begin();
    while(it!=a1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<a1.size();
    cout<<endl;
    a1.push_back(87);
    cout<<a1.capacity();
    cout<<endl;
    a1.pop_back();
    a1.shrink_to_fit();
    cout<<a1.capacity();
    cout<<endl;
    a1.insert(a1.end()-1,{99,100,101});
    a1.emplace(a1.begin()+1,90);
    a2.insert(a2.begin(),a1.begin(),a1.end());
    a1.emplace_back(60);
    a1.erase(a1.begin());
    it=a2.begin();
    while(it!=a2.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    return 0;
}