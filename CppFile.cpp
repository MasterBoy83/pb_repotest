#include<iostream>

using namespace std;

/// fun() ///
void fun()
{
    //Fun
    cout<<"Hello"<<endl;
}
//Main
int main()
{
    int tab[4] = {1,2,3,4};
    int a = 9;
    fun();
    cout<<"Zmienna a:"<<a<<endl;
    
    cout<<"Tab: "<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}
