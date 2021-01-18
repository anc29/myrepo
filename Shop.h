#pragma once
#include <string>

class Shop {

    public:

    Shop();
    Shop(std::string, std::string, int);
    ~Shop();

    // shop attributes
    std::string name;
    std::string suburb;
    int postcode;

    // shop methods
    void setName(std::string newName);
    std::string getName();

    void setSuburb(std::string newSuburb);
    std::string getSuburb();
    void setPostcode(int newPostcode);
    int getPostcode();

};


