#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, odd;
    
    
    cin >> n;
    
    odd = 0;
    
    int* a = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            odd = a[i];
        }
    }
    for (i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            a[i] += odd;
            cout << a[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
