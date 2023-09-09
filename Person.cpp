#include "Person.h"

Person::Person(std::string m_fullName, int m_age, int m_height, int m_weight, std::string m_gender, std::string m_phoneNumber, std::string m_email) :
    fullName(m_fullName),
    age(m_age),
    height(m_height),
    weight(m_weight),
    gender(m_gender),
    phoneNumber(m_phoneNumber),
    email(m_email)
{
    checkInput();
}

std::string Person::getInfo() const
{
    std::stringstream message;

    message << "\nFull name - " << fullName
            << "\nAge - " << age
            << "\nHeight - " << height
            << "\nWeight - " << weight
            << "\nGender - " << gender
            << "\nPhone number - " << phoneNumber
            << "\nEmail - " << email
            << "\nIs weight less then 50?: " << checkWeight(weight);

    return message.str();

}

void Person::checkInput()
{
    if(height <= 0)
        throw std::invalid_argument("Wrong height.");

    if(weight <= 0)
        throw std::invalid_argument("Wrong height.");

    if(age <= 0 )
        throw std::invalid_argument("Wrong age.");

    if(gender != "Male" && gender != "Female")
        throw std::invalid_argument("Wrong gender.");

}