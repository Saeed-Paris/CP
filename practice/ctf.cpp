#include <iostream>
using namespace std;
int main() {
    int n,x1,y1,x2,y2;
    cin >> n;
    cin >> x1>>y1>>x2>>y2;
    string ans;
    if(((x2 - x1) + (y2-y1)) % 2 == 0) {
        cout << "Red Panda";
}    else{
         cout << "Caring Koala"; 
    }
    return 0;
}

