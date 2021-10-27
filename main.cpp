/*
Name: Breden Hulse
Class: Computer Science 2
Description: It is a linked list.
*/
#include <iostream>
#include "list.h"
#include <fstream>

using namespace std;

int main(){
    List beiju;
    ifstream infile;
    infile.open("Test.txt");
    ofstream fout;
    fout.open("outfile");
    string testCase;
    while(infile >> testCase){
        beiju.begin();
        for(int i = 0; i < testCase.size(); i++){
            if(testCase[i] == '['){
               beiju.begin(); 
            }
            else if(testCase[i] == ']'){
                for(int j = 0; j < i; j++){
                    beiju.move_up();
                }
            }
            else{
                beiju.insert_after(testCase[i]);
            }
            beiju.move_up();
        }
    }
    infile.close();
    fout.close();
}