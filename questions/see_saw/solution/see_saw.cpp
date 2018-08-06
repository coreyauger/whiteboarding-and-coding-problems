#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool isSeeSaw(const vector<int>& arr){
    if(arr.size() < 3)return false;
    int left = arr[0];
    int pivot = arr[1];
    int right = accumulate(arr.begin()+2, arr.end(), 0);
    if(left == right)return true;
    for(int i=2; i<arr.size()-1; i++){
        left += pivot;
        pivot = arr[i];
        right -= pivot; 
        if(left == right)return true;
    }
    return false;
}

int main(){
    cout << "seesaw: " << isSeeSaw(vector<int>{1,10,2,5,6,9,4,1,4,8,14,6}) << endl;

    return 0;
}