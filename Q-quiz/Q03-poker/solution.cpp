#include<bits/stdc++.h>
using namespace std;

int main(){
    int number[6];
    int suit[6];
    for(int i=1;i<=5;i++){
        char a;
        cin>>a;
        if(a=='1'){
            char b;
            cin>>b;
            number[i] = 10;
        }
        else if(a=='J'){
            number[i] = 11;
        }
        else if(a=='Q'){
            number[i] = 12;
        }
        else if(a=='K'){
            number[i] = 13;
        }
        else if(a=='A'){
            number[i] = 14;
        }
        else{
            number[i] = a-'0';
        }
        char b;
        cin>>b;
        if(b=='C'){
            suit[i] = 0;
        }
        else if(b=='D'){
            suit[i] = 1;
        }
        else if(b=='H'){
            suit[i] = 2;
        }
        else if(b=='S'){
            suit[i] = 3;
        }
        // cout<<number[i]<<" "<<flower[i]<<"\n";
    }
    //check is consecutive 
    int consecutive=0;
    int samesuit=0;
    for(int i=2;i<=5;i++){
        if(number[i-1]-number[i]==1){
            consecutive++;
        }
        if(suit[i-1]==suit[i]){
            samesuit++;
        }
    }
    //check royal flush
    if(consecutive==4&&samesuit==4&&number[1]==14){
        cout<<"royal flush";
        return 0;
    }
    //check straight flush
    if(consecutive==4&&samesuit==4){
        cout<<"straight flush";
        return 0;
    }
    //check four of a kind
    if(number[1]==number[2]&&number[2]==number[3]&&number[3]==number[4]){
        cout<<"four of a kind";
        return 0;
    }
    if(number[2]==number[3]&&number[3]==number[4]&&number[4]==number[5]){
        cout<<"four of a kind";
        return 0;
    }
    //check full house
    if(number[1]==number[2]&&number[3]==number[4]&&number[4]==number[5]){
        cout<<"full house";
        return 0;
    }
    if(number[1]==number[2]&&number[2]==number[3]&&number[4]==number[5]){
        cout<<"full house";
        return 0;
    }
    //check flush
    if(samesuit==4){
        cout<<"flush";
        return 0;
    }
    //check straight
    if(consecutive==4){
        cout<<"straight";
        return 0;
    }
    //check three of a kind
    if(number[1]==number[2]&&number[2]==number[3]){
        cout<<"three of a kind";
        return 0;
    }
    if(number[2]==number[3]&&number[3]==number[4]){
        cout<<"three of a kind";
        return 0;
    }
    if(number[3]==number[4]&&number[4]==number[5]){
        cout<<"three of a kind";
        return 0;
    }
    //check two pair
    int ctp = 0;
    for(int i=2;i<=5;i++){
        if(number[i-1]==number[i]){
            ctp++;
        }
    }
    if(ctp>=2){
        cout<<"two pair";
        return 0;
    }
    //check pair;
    if(ctp==1){
        cout<<"pair";
    }
    //if not match anything
    else{
        cout<<"high card";
    }
}