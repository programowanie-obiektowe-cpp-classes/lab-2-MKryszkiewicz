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
    double get() //getter
    {
        return A -> get();
    }
    ResourceManager& operator=(const ResourceManager& B) //opreator przypisania
    {
        if (&B != this)
        {
            delete A;
            A = new Resource{*B.A};
        }
        return *this;
    }
    ResourceManager(ResourceManager&& B)    // Konstruktor przenoszacy
    {
        A = B.A;
        B.A = nullptr;
    }
    ResourceManager& operator=(const ResourceManager&& B) //operator przenoszenia?
    {
        delete A;
        A = B.A;
    }
    private:
    Resource* A = nullptr;
};
