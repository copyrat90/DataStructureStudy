#include <iostream>
#include <string>
#include "ArrayList.h"
#include "NameCard.h"


int main()
{
    ArrayList<NameCard> list;
    
    list.Insert({"John", "012-3456"});
    list.Insert({"Kate", "876-5432"});
    list.Insert({"Suzy", "456-7890"});

    std::string searchName;
    std::cout << "Search Name? : ";
    std::cin >> searchName;

    bool userFound = false;
    NameCard searchTarget;
    if (list.First(searchTarget))
    {
        if (searchTarget.name == searchName)
            userFound = true;
        else while (list.Next(searchTarget))
        {
            if (searchTarget.name == searchName)
            {
                userFound = true;
                break;
            }
        }
    }

    if (userFound)
    {
        searchTarget.ShowNameCardInfo();
    }
    else
    {
        std::cout << "Cannot Find User : " << searchName << '\n';
    }

    return 0;
}