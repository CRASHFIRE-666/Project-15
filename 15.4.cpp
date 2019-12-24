#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, max, min, maxi, mini;
    
    
    cin >> n;
    
    int* a = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    
    max = a[0];
    min = a[0];
    maxi = 0;
    mini = 0;
    
    
    for (i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
            maxi = i;
        }
        if (a[i] < min){
            min = a[i];
            mini = i;
        }
    }
    
    if (maxi > mini){
        for (i = mini + 1; i < maxi; i++){
            a[i] = 0;
        }
    }
    else{
        for (i = maxi + 1; i < mini; i++){
            a[i] = 0;
        }
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
