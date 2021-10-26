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
        for(i = 0; i < testCase.length; i++){
            if(testCase[i] = '['){
               beiju.begin(); 
            }
            else if(testCase[i] = ']'){
                
            }
            else{

            }
        }
    }
    infile.close();
}