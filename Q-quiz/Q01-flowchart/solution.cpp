#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x < 50){
        while(y > z){
            if(y % 2 == 0){
                x += pow(y, 2) + pow(z, 2);
                if(x % 10 == 4){
                    break;
                }else{
                    if(x % 3 == 0){
                        y--;
                    }else{
                        z++;
                    }
                }
                if(x / (y + z) > 15){
                    break;
                }
            }else {
                x -= y-z;
                y++;
                continue;
            }
        }
    }else{
        if(x > y){
            if(x % 2 == 0){
                x = x * 2;
                y = x + 4;
                z = (y - x) * 3;
            }else{
                if(y < z){
                    x = x + y;
                    y = x * 3;
                    z = y + z;
                }else{
                    x = x / 2;
                    y = y * 2;
                    z = x - y;
                }
            }
        }else{
            if(z % 3 == 2){
                x = y * 5;
                y = x / 2;
                z = y + 7;
            }else{
                if(y > z){
                    x = x + z;
                    y = y - 3;
                    z = x * 2;
                }else{
                    x = x - 1;
                    y = y + z;
                    z = y - 4;
                }
            }
        }
    }
    cout << x << ' ' << y << ' ' << z;
    return 0;
}
