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
    vector<float> b(n);
    b[0]=0;
    float sum=0;
    for (int i=1; i<n; i++)
    {
        sum+=a[i];
        b[i]=sum/i;
    }
    for (int i=0; i<n; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
