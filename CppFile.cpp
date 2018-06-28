#include<iostream>
#include<string>

//NAMESPACE
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
	//fun2()
    fun2();
    cout<<"Zmienna a:"<<a<<endl;
    
    cout<<"Tab: "<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}
