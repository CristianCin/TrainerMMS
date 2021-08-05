#pragma once
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include "MMS/Menu.hpp"
using namespace std;

int maxNumber(){
    int maxi;
    cout<<"Max Number: ";
    cin>>maxi;
    return maxi;
}

int randomNumber(int num_max){
    srand(time(NULL));
    int random = rand()%num_max;
    return random; 
}

void seeNumber(int numero_generato){
    cout<<"\nRandom N: "<<numero_generato<<endl<<endl;
}

vector<string> req(int length_number){
    vector<string> getCon(length_number); 

    cout<<"Your conversion: ";
    for(int i = 0; i < length_number; i++)
        cin>>getCon[i];
    
    return getCon;
}

bool check(vector<string> req, int numero){
    cout<<endl<<numero<<endl;
    bool conditionFinal = true;
    for(int i = 0; i < req.size(); i++){
        bool condition = false;
        int n =  to_string(numero)[i] - '0';
        for(int j = 0; j < Arr[n].size(); j++)
            if(req[i] == Arr[n][j])
                condition = true;

        if(condition == false) 
            cout<<"X", conditionFinal = false;
        else
            cout<<"-";
    }
    cout<<endl;

    return conditionFinal;
}

bool again(){
    char choice;
    cout<<endl<<"Another? (Y/n)"<<endl;
    cin>>choice;

    if(choice == 'Y' || choice == 'y')
        return true;
    else
        return false;
}