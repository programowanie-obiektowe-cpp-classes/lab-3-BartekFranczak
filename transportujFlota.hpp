#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int ile_przetransportowal;
    unsigned int ilosc_zeglowek;
    Stocznia stocznia{};
    
    while(ile_przetransportowal < towar){

        Statek* s1 = stocznia();
        unsigned int  transport= s1->transportuj();
        ile_przetransportowal += transport;
        
        if (dynamic_cast<Zaglowiec*>(s1)!=nullptr){
            ilosc_zeglowek++; 
        }
        delete s1;
    } 
    // Twoja implementacja tutaj
    return ilosc_zeglowek;
}
