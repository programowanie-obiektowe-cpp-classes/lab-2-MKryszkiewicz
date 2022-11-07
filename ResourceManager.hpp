#pragma once
#include <iostream>
#include "Resource.hpp"

using namespace std;

class ResourceManager
{
    public:
    ResourceManager () //Konstruktor domyslny, ten ktory inicjalizuje 
    {
        A = new Resource;
    }
    ~ResourceManager () //Destruktor
    {
        delete A;
    }
    ResourceManager (const ResourceManager& B)//Konstruktor kopiujący
    {
        A = new Resource{*B.A};
    }
    double get()
    {
        return A -> get();
    }
    ResourceManager& operator=(const ResourceManager& B)
    {
        if (&B != this)
        {
            delete A;
            A = new Resource{*B.A};
        }
        return *this;
    }
    // MOVE
    private:
    Resource* A;
};
