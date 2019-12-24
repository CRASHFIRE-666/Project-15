#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j, first, index, check;
    
    
    cin >> n;
    
    int* a = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    if (a[0] > a[1]){
        for (i = 2; i < n; i++){
            if (a[i] > a[i - 1]){
                check = true;
            }
            else{
                check = false;
            }
        }
    }
    else{
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    if (check == false){
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    first = a[0];
    int max = a[1];
    for (i = 0; i < n; i++){
        if(a[i] <= first && i != 0 && a[i] > max){
            max = a[i];
            index = i;
        }
    }
    
    for (i = 0; i < index; i++){
        a[i] = a[i + 1];
    }
    
    a[index] = first;
    if (a[0] > a[1] || check == true)
        for (i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    return 0;
}
