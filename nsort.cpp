#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[10];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        for(int j = 0; j < 10; j++){
            cin >> arr[j];
        }

        sort(arr, arr+10);

        cout << arr[7] << "\n";
    }

    return 0;
}