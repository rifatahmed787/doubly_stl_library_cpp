#include<bits/stdc++.h>
using namespace std;
 
int main(){
    list<int>myList={1,2,3, 3, 4,5};
    list<int>newList=myList;
    newList.pop_front();
    newList.pop_back();
    newList.push_back(100);
    newList.push_front(50);
    newList.insert(newList.begin(), 1);
    // newList.insert(next(newList.begin(), 1), 1);
    newList.erase(next(newList.begin(),1));
    replace(newList.begin(), newList.end(), 100, 6);
    auto findValue= find(newList.begin(), newList.end(), 1);
    if(findValue==newList.end()){
        cout<<"not found";
    }else{
        cout<<"found";
    }
    cout<<endl;
    for(int val:newList){
        cout<<val<<endl;
    }
    return 0;
}