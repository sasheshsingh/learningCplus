#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i=0;i<n;i++){
        p[i]= i*3;
    }
    for (int i = 0; i < n; i++) {
        cout <<p[i]<<" ";
    }
    cout<<p[0]<<endl;
    delete []p;
    cout<<p[0]<<endl;
    return 0;
}