#include<iostream>

using namespace std;

/// fun() ///
void fun()
{
    //Function HEllo
    cout<<"Hello"<<endl;
}

void fun2()
{
    fun();
    cout<<"World"<<endl;
}
//Main
int main()
{
    int tab[4] = {1,2,3,4};
    int a = 9;
    //call
	cout<<"fun2()"<<endl;
    fun();
    cout<<"Zmienna a:"<<a<<endl;
    
    cout<<"Tab: "<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}
