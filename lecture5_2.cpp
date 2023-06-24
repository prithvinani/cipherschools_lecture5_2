#include <iostream>
using namespace std;
int main()
{
    int a[4];
    cout<<"enter 5 integers"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"the given 5 integers are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}