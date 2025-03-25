 #include <iostream>
using namespace std;

int* y;

int arrGay[5] = {69, 420, 666, 42, 13};

int main(){
    y = &arrGay[1];
    cout << *y;
    return 0;
}

