#include<iostream>
using namespace std;

    void maxMin(int inpArr[]) {
        int max = inpArr[0];
        int min = inpArr[0];
        for (int i = 0; i<5; i++){
            if(inpArr[i] > max){
                max = inpArr[i];
                if(inpArr[i] <= min) {
                    min = inpArr[i];
                }
            }
        }
        cout << "Maximum Number is : " << max << " And Minimum Number is : " << min << endl;
        ;
    }

int main () {
    int arr[5] = {0,1,2,3,19};
    maxMin(arr);
}