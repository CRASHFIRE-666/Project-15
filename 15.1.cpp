#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, space;
    
    
    cin >> n;
    
    
    int* a = new int [n];
    
    int* b = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cin >> b[i];
    }
    
    for (i = 0; i < n; i++){
        space = a[i];
        a[i] = b[i];
        b[i] = space;
    }
    
    for (i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
