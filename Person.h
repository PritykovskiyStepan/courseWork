#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <sstream>

class Person{

public:
    Person(std::string m_fullName, int m_age, int m_height, int m_weight, std::string m_gender, std::string m_phoneNumber, std::string m_email);

    ~Person() {}

    virtual std::string getFullName() const { return fullName; }
    virtual int getAge() const { return age; }
    virtual int getHeight() const { return height; }
    virtual int getWeight() const { return weight; }
    virtual std::string getGender() const { return gender; }
    virtual std::string getPhoneNumber() const { return phoneNumber; }
    virtual std::string getEmail() const { return email; }

    void setFullName(std::string m_fullName) { fullName = m_fullName; }
    void setAge(int m_age) { age = m_age; }
    void setHeight(int m_height) { height = m_height; }
    void setWeight(int m_weight) { weight = m_weight; }
    void setGender(std::string m_gender) { gender = m_gender; }
    void setPhoneNumber(std::string m_phoneNumber) { phoneNumber = m_phoneNumber; }
    void setEmail(std::string m_email) { email = m_email; }

    virtual bool checkWeight(int m_weight) const { return m_weight < 50; };
    virtual bool checkAge(int m_age) { return m_age < 18; };

    virtual std::string getInfo() const;

private:
    std::string fullName;
    int age;
    int height;
    int weight;
    std::string gender;
    std::string phoneNumber;
    std::string email;

protected:
    virtual void checkInput();
};

#endif
