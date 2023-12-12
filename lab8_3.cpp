#include<iostream>
using namespace std;

int main(){
    string cha;
    int bou;
    int year,high;
    cout << "Enter your age: ";
    cin >> year;
    if(year <= 25){
        cout << "Enter your height: ";
        cin >> high;
        if(high < 100){ 
            cha = "Chopper";
            }
        else if(high < 180){
            cha = "Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bou;
            if(bou <= 1100000000){
                cha = "Sanji";
            }
            else{
                cha =  "Zoro";
            }
        }
        
    }
    else{
        if(year <= 60){
            cout << "Enter your bounty: ";
            cin >> bou;
            if(bou <= 500000000 ){
                cha = "Franky";
            }
            else{
                cha =  "Jinbe";
            }
        }
        else{
            cha = "Brook";
        }
    }
    cout << "Your character = ";
    cout << cha ;
    
}


