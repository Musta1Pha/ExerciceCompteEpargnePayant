#include "Devise.h"
#include <iostream>
#include <string>

Devise::Devise(int Montant)
{
    this->Montant = Montant;
}

Devise& Devise::operator+=(const Devise& d1)
{
    this->Montant += d1.Montant;
    return *this;
}

Devise& Devise::operator-(const Devise& d1)const
{
    Devise res(this->Montant - d1.Montant);
    return res;
}

Devise& Devise::operator-=(const Devise& d1)
{
    this->Montant -= d1.Montant;
    return *this;
}

void Devise::operator=(const Devise& d1)
{
    this->Montant = d1.Montant;
}

Devise Devise::operator*(Devise d1)
{
    this->Montant = this->Montant * d1.Montant;
    return *this;
}

bool Devise::operator>=(const Devise& d1)
{
    return this->Montant >= d1.Montant;
}

Devise Devise::operator*(double d1)
{
    Devise res(this->Montant * d1);
    return res;
}

void Devise::Afficher()const
{
    std::cout<<"Montant : "<<this->Montant<<std::endl;
}

Devise::~Devise()
{
    std::cout<<"Destructeur de la classe Devise"<<std::endl;
}
