//
// Created by Никита Тишков on 05.12.2019.
//

#ifndef SASHALAB_HEADER_H
#define SASHALAB_HEADER_H
#include <iostream>
#include <fstream>
using namespace std;

struct K {
    char* a = new char[255];
    K* next;
};
K* funct(int&);
void show(K*, K*);
void comparison(K*, K*);
void involvings(K*, K*);
void similar(K*, K*);
void replace(K*&, K*&);
void write(K*, K*);
void showZ(K*,K*);
#endif //SASHALAB_HEADER_H
