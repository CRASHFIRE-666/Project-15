#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j, sum, counter;
    
    
    cin >> n;
    
    
    int* a = new int [n];
    
    int* b = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (i = 0; i < n; i++){
        sum = 0;
        counter = 0;
        for(j = 0; j < i; j++){
            sum += a[j];
            counter++;
        }
        b[i] = sum / counter;
    }
    
    
    
    return 0;
}
