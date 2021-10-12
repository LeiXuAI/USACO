/*
ID: lei.xu1
LANG: C++
PROG: gift1
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int get_idx(string name, vector<string> name_list){

    for (int i = 0; i < name_list.size(); i++){

        if (name == name_list[i]){

            return i;
        }
    }
}

int main(){

    ifstream fin ("gift1.in");
    ofstream fout ("gift1.out");
      
    int num_person, val_left, val_gived, num_receiver;
    string giver, receiver;
    vector<string> persons;
    fin >> num_person;
    vector<int> val_final(num_person, 0);  
    
    for (int i = 0; i < num_person; i++){
        
        string each_person;
        fin >> each_person;
        persons.push_back(each_person);
    }

    for (int i = 0; i < num_person; i++){

        fin >> giver >> val_left >> num_receiver;
        if (num_receiver == 0) continue;
        val_left = val_left - (val_left % num_receiver);
        val_final[get_idx(giver, persons)] -= val_left;
        for (int j = 0; j < num_receiver; j++){
            fin >> receiver;
            val_final[get_idx(receiver, persons)] += (val_left/ num_receiver);
        }

    }

    for (int i = 0; i < num_person; i++){

        fout << persons[i] << " " << val_final[i] << endl;
    }
    return 0;

}
