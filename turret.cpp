#include<iostream>
#include<string>
#include<sstream>
#include<math.h>

using namespace std;

int main(void){
    
    int total;
    cin >> total;
    for(int t = 0; t<total; t++){
        
        int x1, y1, r1;
        int x2, y2, r2;
        
        cin >> x1;
        cin >> y1;
        cin >> r1;
        cin >> x2;
        cin >> y2;
        cin >> r2;
        
        double dis = pow(x1 - x2,2) + pow(y1-y2,2);
        dis = sqrt(dis);
        
        if(dis == 0){
            if(r1 == r2)
                cout << -1 << endl;
            else
                cout << 0 << endl;
        }
        else if(r1 == r2 + dis || r2 == r1 + dis || r1+r2 == dis)
            cout << 1 << endl;
        else if(r1 > r2 + dis || r2 > r1 + dis)
            cout << 0 << endl;
        else if(r1 + r2 < dis)
            cout << 0 << endl;
        else
            cout << 2 << endl;
    }
    
    return 0;
}