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
    ResourceManager (const ResourceManager& B) : A(B.A)
    {
    }
    double get()
    {
        return (*A).get();
    }
    private:
    Resource* A;
};
