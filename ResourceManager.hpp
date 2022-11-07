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
    ResourceManager (const ResourceManager& B) : A(B.A) {}
    ResourceManager& operator=(const ResourceManager& B)
    {
        this -> A = B.A;
        return *this;
    }
    double get()
    {
        return (*A).get();
    }
    private:
    Resource* A;
};
