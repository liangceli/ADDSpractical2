#pragma once
#include<iostream>
#include<string>

class Move{
    private:
    std :: string movename;

    public:
    Move();
    std :: string getName();
    void setMoveName(std :: string n);
    int Judge(Move* p1, Move* p2);
}
