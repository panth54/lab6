#include<iostream>
using namespace std;

int main(){
    int num, evenNum = 0, oddNum = 0;

    cout << "Enter an integer: " ;
    cin >> num;
    while (num != 0){
        if (num % 2 == 0){
            evenNum++;
        } else{
            oddNum++;
        }
        cout << "Enter an integer: " ;
        cin >> num;
    }

    cout << "#Even numbers = " << evenNum <<endl;
    cout << "#Odd numbers = " << oddNum <<endl;

    return 0;
}
