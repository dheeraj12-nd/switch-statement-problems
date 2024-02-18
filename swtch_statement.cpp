#include<iostream>
using namespace std;

int main(){
    int ch = '2';

    cout<< endl;

    switch(ch){
        case 1:cout << "first" <<endl;
            break;

        case '2':cout << "second" <<endl;
            break;

        default: cout << "it id default case" <<endl;
            break;
    
    }
    cout<< endl;
    return 0;
}