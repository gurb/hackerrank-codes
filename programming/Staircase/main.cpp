#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    if(n<0 || n>100)
        return;

    int counter = n-1;
    int iterator = counter;
    int field = n*n;

    for(int i=1; i<=field; i++){
        if(iterator > 0){
            iterator--;
            cout << " ";
        }else{ 
            cout << "#";
        }
        if(i%n == 0){
            cout << endl;
            counter--;
            iterator = counter;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
