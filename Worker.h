#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>
#include <sstream>

#include "Person.h"

class Worker : public Person{

public:

    enum Factory
    {
        Allseeds = 1, // производство масла
        Maic, // семенная компания
        Puratos, // производство маргарина и т.д.
        Fujikura, // производство кабельных сетей для автомобилей
        BioFarma // переработка плазмы крови
    };

    enum Post{
        Cleaner = 1,
        Accountant,
        Guard,
        Engineer
    };

    Worker(std::string m_fullName, int m_age, int m_height, int m_weight, std::string m_gender,
           std::string m_phoneNumber, std::string m_email,
           Factory m_factory, Post m_post, int m_salary);

    ~Worker() {};

    Factory getFactory() const { return factory; }
    void setFactory(Factory m_factory) { factory = m_factory; }

    Post getPost() const { return post; }
    void setPost(Post m_post) { post = m_post; }

    static std::string whatFactory(Factory m_factory);
    static std::string whatPost(Post m_post);

    int getSalary() { return salary;}
    void setSalary(int m_salary) { salary = m_salary; }

    std::string getInfo() const override;

private:
    Factory factory;
    Post post;

    int salary;

protected:
    void checkInput() override;
};

#endif
