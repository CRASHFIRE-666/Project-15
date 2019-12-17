#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout<<"Введите N"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Введите массив"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> b(n);
    cout<<"Введите массив"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int c;
    for (int i=0; i<n; i++)
    {
        c=a[i];
        a[i]=b[i];
        b[i]=c;
    }
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    for (int i=0; i<n; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
