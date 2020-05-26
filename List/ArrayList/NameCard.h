#ifndef NAME_CARD_H
#define NAME_CARD_H

#include <string>

struct NameCard
{
    std::string name;
    std::string phone;

    static NameCard * MakeNameCard(std::string name, std::string phone);
    void ShowNameCardInfo();
    bool NameCompare(std::string);
    void ChangePhoneNum(std::string);
};


#endif