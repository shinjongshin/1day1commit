#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[51][2];
    int result[51];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
        result[i] = 1;
    }

    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				result[i]++;
		}
	}

	for (int i = 0; i < n; i++)
		cout << result[i] << " ";
	cout << '\n';

    return 0;
}
//https://codesyun.tistory.com/82