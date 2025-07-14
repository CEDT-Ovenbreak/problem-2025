#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    int L,N;
    cin >> L >> N;
    int s[N],h[N],l[N];
    for(int i=0;i<N;i++) {
        cin >> l[i];
        int c; cin >> c;
        if(c==1) {
            cin >> s[i];
            h[i] = 0;
        } else {
            cin >> h[i];
            s[i] = 0;
        }
    }
    int ans = 0;
    //เราลองทุกกรณีที่เป็นไปได้ของการเลือกเนื้อเพลง โดยใช้เลขฐานสอง N หลัก ถ้าหลักที่ i เป็น 1 -> ใช้เนื้อเพลงนั้น และถ้าหลักที่ i เป็น 0 -> ไม่ใช้
    //ลองจาก 0..0 (0) ถึง 1..1 (2^N-1 = (1<<N))
    for(int i=0;i<(1<<N);i++) {
        int curr_length=0,sad=0,happy=0;
        for(int j=0;j<N;j++) {
            //หลักที่ j ของ i ในระบบเลขฐานสอง = (i>>j) & 1 
            if((i>>j)&1) {
                curr_length+=l[j];
                sad+=s[j];
                happy+=h[j];
            }
        }
        if(curr_length<=L) ans = max(min(sad,happy),ans);
    }
    cout << ans;
}