#pragma once

#include "Resource.hpp"

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
    ResourceManager (const ResourceManager& B) : A(B.A) {} //Konstruktor kopiujący
    double get()
    {
        return (*A).get();
    }
    ResourceManager& operator=(const ResourceManager& B)
    {
        A = new Resource;
        A = B.A;
        return *this;
    }
    //MOVE
    private:
    Resource* A;
};
