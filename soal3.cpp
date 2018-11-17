#include <iostream>

using namespace std;

int main(){
    int side;
    int a, b;
    cout <<"Segitiga : ";
    cin >> side;
    for (a = side; a>=0; a--){
        for(b=0; b<side-a ; b++){
            cout << " ";
        }

        for (b=0;b<2*a-1;b++){
            if(a==0 || a==side){
                cout <<"*";
            }
            else if(b == 0 || b == 2*a-2){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}
