#pragma once
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include "Training.hpp"
using namespace std;

bool Table(){
    cout<<"Table"<<endl<<endl;
    for(int i = 0; i < 10; i++){
        cout<<i<<" => ['";
        for(int j = 0; j < Arr[i].size() - 1; j++)
            cout<<Arr[i][j]<<"', '";
        cout<<Arr[i][Arr[i].size()-1]<<"']"<<endl;

    }

    cout<<endl;
    return backMenu();

}

bool Training(){
    while(true){
        system("cls");
        int random = randomNumber(maxNumber());
        seeNumber(random);
        vector<string> get = req(to_string(random).size());
        bool result;
        do{
            result = check(get, random);
            if(result == false) cout<<"Retry."<<endl;
        }while(result == false); 
        if(again() == false)
            break;
    }

    return backMenu();
}