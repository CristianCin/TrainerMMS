#pragma once
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include "MMS/Training.hpp"
#include "MMS/Options.hpp"
using namespace std;

vector<vector<string>> Arr(10);

void setup(){
    Arr[0] = {"S", "Z", "SC"};
    Arr[1] = {"T", "D"};
    Arr[2] = {"N", "GN"};
    Arr[3] = {"M"};
    Arr[4] = {"R"};
    Arr[5] = {"L", "GL"};
    Arr[6] = {"C", "G"};
    Arr[7] = {"K", "GH"};
    Arr[8] = {"F", "V"};
    Arr[9] = {"P", "B"};

    system("cls");
}

bool backMenu(){
    
    cout<<"Back to menu'? Y/n"<<endl;
    char choice;
    cin>>choice;

    if(choice == 'Y' || choice == 'y')
        return true;
    else
        return false;

}

int Menu(){

    int choice;
    system("cls");
    cout<<"Menu'"<<endl<<endl;

    cout<<"1 \t => \t See table"<<endl;
    cout<<"2 \t => \t Training"<<endl;
    cout<<"Other \t => \t Exit"<<endl<<endl;
    cin>>choice;

    return choice;

}

bool MenuOption(int opt){

    setup();
    if(opt == 1) 
        return Table();
    else
        if(opt == 2)
            return Training();
        else
            return false; 
}
