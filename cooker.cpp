#include<iostream>

using namespace std;

int main(){
    int greater;
    int max = 0;
    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            int num;
            cin >> num;

            sum += num;

            if(sum > max){
                max = sum;
                greater = i + 1;
            }
        }
    }

    cout << greater << " " << max << '\n';

    return 0;
}