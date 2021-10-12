/*
ID: lei.xu1
LANG: C++
PROG: friday
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

bool leap_year(int year){
    if (year%4){
        if(year % 100 == 0){
            if(year % 400 == 0)
                return true;
            else
                return false; 
    }
    else 
        return true;
    }    
} 

int main(){
    
    int N;
    cin >> N;
    vector<int> result(7, 0);
    
    int flag = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < 12; j++){
            ++result[(flag + 13) % 7];
            flag = 
        }

    }    

    return 0;
}
