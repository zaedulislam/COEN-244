#include <iostream>
using namespace std;

int num = 23;

void showLocal(){
    int num = 5;
    cout << "num in showLocal: " << num << endl;
}


void showAnotherLocal(){
    int num = 6;
    cout << "num in showAnotherLocal: " << num << endl;
}


void showStatic(){
    static int num = 0;
    cout << "num in showStatic: " << num << endl;
    num++;
}


int main(){
    showLocal();
    showAnotherLocal();

    cout << "num in Global: " << num << endl;

    for(int i = 0; i < 4; i++){
        showStatic();
    }
}
