//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment5

#include <iostream>
#include <vector>

#include "transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

int main()
{
    std::cout << "GAME ON!" << std::endl;
    // start tests
    std::cout << "\ndefault tests: \n" << std::endl;

    Transformer transformer1;
    Autobot autobot1;
    Decepticon decepticon1;

    transformer1.Transform();
    transformer1.OpenFire();
    transformer1.Ulta();

    autobot1.Transform();
    autobot1.OpenFire();
    autobot1.Ulta();

    decepticon1.Transform();
    decepticon1.OpenFire();
    decepticon1.Ulta();
     
    std::cout << "\ntests with pointer: \n" << std::endl;

    Transformer* transf_autobot = new Autobot(); // allocate space in heap
    // transf_autobot has methods from transformer, typed by Autobot (mean virtual methods)
    transf_autobot->Transform();
    transf_autobot->OpenFire();
    transf_autobot->Ulta();

    Transformer* transf_decep = new Decepticon(); // allocate space in heap
    // transf_decep has methods from transformer, typed by Decepticon (mean virtual methods)
    transf_decep->Transform();
    transf_decep->OpenFire();
    transf_decep->Ulta();

    std::cout << "\ntests with vector and cycle: \n" << std::endl;

    std::vector <Transformer*> transformers;
    // std:vector <TypeOfDataInVector> var_name;
    for (int i = 0; i < 3; i++) {
    transformers.push_back(new Transformer());
    transformers.push_back(new Autobot());
    transformers.push_back(new Decepticon());
    }
    // append items to the end of the array


    for (uint i = 0; i < transformers.size(); i++) // .size() = quantity of items in vector
    {
        transformers[i]->Transform();
        transformers[i]->OpenFire();
        transformers[i]->Ulta();
    }

    for (Transformer* trn : transformers) // iterate over all items of an array (vector)
    {
        delete trn;
    }
    // also!!!! in base-class (transformer) i using virtual destructor
    // because default destructor: i create pointer to base-class = cell of memory in heap;
    // and this variable can point to any heir-class/base-class
    // heir-class typed by base-class
    // after command "delete" called ~Base-class, but info certain in heir-class didn't delete, but must be deleted!
    // whith virtual destructor: 
    // after command "delete" called ~Heir-class , then ~Base-class

    return 0;
}