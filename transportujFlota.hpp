#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int ile_przetransportowal=0;
    unsigned int ilosc_zeglowek=0;
    Stocznia stocznia{};
    
    while(ile_przetransportowal < towar){

        Statek* s1 = stocznia();
        ile_przetransportowal += s1->transportuj();
        
        if (dynamic_cast<Zaglowiec*>(s1)!=nullptr){
            ilosc_zeglowek++; 
        }
        delete s1;
    } 
    // Twoja implementacja tutaj
    return ilosc_zeglowek;
}
