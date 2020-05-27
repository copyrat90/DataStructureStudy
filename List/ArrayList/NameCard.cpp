#include <iostream>
#include "NameCard.h"

NameCard NameCard::MakeNameCard(std::string name, std::string phone)
{
    NameCard card;
    card.name = name;
    card.phone = phone;

    return card;
}

void NameCard::ShowNameCardInfo()
{
    std::cout << "[ Name] " << name << '\n';
    std::cout << "[Phone] " << phone << "\n\n";
}

int NameCard::NameCompare(std::string name)
{
    return this->name.compare(name);
}

void NameCard::ChangePhoneNum(std::string phone)
{
    this->phone = phone;
}