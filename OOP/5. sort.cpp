//Name: Chinmay Singhania
//Roll Number: SECOC338
//Division: C

#include<iostream>
#include<limits>
using namespace std;

template<class T>
T selection_sort() //Template function
{
    T a[5];
    T temp;
    for(int i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
    cout<<a[i]<<"\n";
    }
};

int main()
{
    cout<<"Integer sorting...\n";
    selection_sort<int>();
    cout<<"Floating sorting...\n";
    selection_sort<float>();
}



