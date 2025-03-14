#include <iostream>
using namespace std;

int main(){
    int n;
    int sum;
    int list[] {1,2,3,4,5};

    cout<<"100이하의 자연수 n을 입력하세요"<< endl;
    cin >> n;
    
    for(int i : list){
        cout<< n*i;
    }
    return 0;
}