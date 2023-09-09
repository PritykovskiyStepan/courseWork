#include "Worker.h"

Worker::Worker(std::string m_fullName, int m_age, int m_height, int m_weight, std::string m_gender,
               std::string m_phoneNumber, std::string m_email,
               Factory m_factory, Post m_post, int m_salary) :
        Person(m_fullName, m_age, m_height,
               m_weight, m_gender,
               m_phoneNumber, m_email),
        factory(m_factory),
        post(m_post),
        salary(m_salary)
{
    checkInput();
}

std::string Worker::getInfo() const
{
    std::stringstream message;

    message << "\nFull name - " << getFullName()
            << "\nAge - " << getAge()
            << "\nHeight - " << getHeight()
            << "\nWeight - " << getWeight()
            << "\nGender - " << getGender()
            << "\nPhone number - " << getPhoneNumber()
            << "\nEmail - " << getEmail()
            << "\nFactory - " << whatFactory(factory)
            << "\nPost - " << whatPost(post)
            << "\nSalary - " << salary;

    return message.str();

}

std::string Worker::whatFactory(Factory m_factory)
{
    switch (m_factory){
        case Worker::Allseeds:
            return "Allseeds Black C";
            break;
        case Worker::Maic:
            return "Maic";
            break;
        case Worker::Puratos:
            return "Puratoc";
            break;
        case Worker::Fujikura:
            return "Fujikura";
            break;
        case Worker::BioFarma:
            return "BioFarma";
            break;

        default:
            return "Unknown";
            break;
    }
}

std::string Worker::whatPost(Post m_post)
{
    switch (m_post) {
        case Worker::Cleaner:
            return "Cleaner";
            break;
        case Worker::Accountant:
            return "Accountant";
            break;
        case Worker::Guard:
            return "Security Guard";
            break;
        case Worker::Engineer:
            return "Engineer";
            break;
        default:
            return "Unknown";
            break;
    }
}

void Worker::checkInput()
{
    Person::checkInput();

    if (salary <= 0)
        throw std::invalid_argument("Wrong salary.");
}