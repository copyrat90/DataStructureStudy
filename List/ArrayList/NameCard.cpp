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
    printf("[ Name] %s\n", name);
    printf("[Phone] %s\n\n", phone);
}

int NameCard::NameCompare(std::string name)
{
    return this->name.compare(name);
}

void NameCard::ChangePhoneNum(std::string phone)
{
    this->phone = phone;
}