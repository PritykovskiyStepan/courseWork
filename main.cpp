//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//public:
//    struct PersonBlock {
//        Person* currentPerson{ nullptr };
//        PersonBlock* nextPerson{ nullptr };
//    };
//
//    static PersonBlock* personList;
//
//private:
//    string m_fullname;
//    int m_age;
//    int m_height;
//    int m_weight;
//    string m_gender;
//    string m_number;
//    string m_email;
//
//public:
//    Person()
//    {
//        m_fullname = "Prytykovsky Stepan";
//        m_age = 18;
//        m_height = 180;
//        m_weight = 80;
//        m_gender = "Male";
//        m_number = "0950896790";
//        m_email = "prytykovsky.stepan@stud.onu.edu.ua";
//    }
//
//    Person(string fullname, int age, int height, int weight, string gender, string number, string email)
//            :m_fullname(fullname), m_age(age), m_height(height), m_weight(weight), m_gender(gender), m_number(number), m_email(email) {}
//
//    string getfullname() const { return m_fullname; }
//
//    int getage() const { return m_age; }
//
//    int getheight() const { return m_height; }
//
//    int getweight() const { return m_weight; }
//
//    string getgender() const { return m_gender; }
//
//    string getnumber() const { return m_number; }
//
//    string getemail() const { return m_email; }
//
//    static void printList()
//    {
//        if (!personList)
//        {
//            cout << "No persons." << endl;
//            return;
//        }
//
//        while (personList)
//        {
//            cout
//                 << "\nYou created a person: " << personList->currentPerson->m_fullname
//                 << "\nAge: " << personList->currentPerson->m_age
//                 << "\nHeight: " << personList->currentPerson->m_height
//                 << "\nWeight: " << personList->currentPerson->m_weight
//                 << "\nGender: " << personList->currentPerson->m_gender
//                 << "\nNumber: " << personList->currentPerson->m_number
//                 << "\nEmail: " << personList->currentPerson->m_email << endl;
//            personList = personList->nextPerson;
//        }
//    }
//
//    static void addPersonToList(Person* person)
//    {
//        PersonBlock* newPerson = (PersonBlock*)(new size_t(sizeof(PersonBlock*)));
//        newPerson->currentPerson = person;
//        newPerson->nextPerson = nullptr;
//        if (!personList)
//        {
//            personList = newPerson;
//        }
//        else
//        {
//            PersonBlock* tempList = personList;
//            while (tempList->nextPerson) {
//                tempList = tempList->nextPerson;
//            }
//            tempList->nextPerson = newPerson;
//        }
//    }
//
//    bool agecheck() { return m_age < 18; }
//
//    bool weightcheck() { return m_weight < 50; }
//
//};
//
//Person::PersonBlock* Person::personList = nullptr;
//
//class Worker : public Person {
//public:
//    Worker(string fullname, int age, int height, int weight, string gender, string number, string email)
//            :Person(fullname, age, height, weight, gender, number, email) {}
//
//    string getClassName()
//    {
//        return "Worker";
//    }
//};
//
//class Electrician : public Person {
//public:
//    Electrician(string fullname, int age, int height, int weight, string gender, string number, string email)
//            :Person(fullname, age, height, weight, gender, number, email) {}
//
//    string getClassName()
//    {
//        return "Electrician";
//    }
//};
//
//int main()
//{
//    int num;
//    cout << "1 Show all persons \n2 Create person \n0 Exit" << endl;
//    cin >> num;
//    if (system("clear")) system( "cls" );
//
//    switch (num) {
//        case 1:
//        {
//            Person::printList();
//        }
//    }
//
//    string fullname, gender, number, email;
//    int age, height, weight;
//    cout << "Enter person`s fullname: ";
//    getline(cin, fullname);
//    cout << "Enter person`s age: ";
//    cin >> age;
//    cout << "And now enter person`s height(in cm) and weight(in kg): ";
//    cin >> height >> weight;
//    cout << "Enter the gender of the person(Male/Female): ";
//    cin >> gender;
//    cout << "Enter the phone number: ";
//    cin >> number;
//    cout << "Enter the email: ";
//    cin >> email;
//
//    try{
//
//        if (height < 100 || weight < 15)
//            throw "Error... height or weight is too low";
//
//        if (gender != "Male" && gender != "Female")
//            throw "Error... There are only two genders. Enter correctly";
//
//        Person person(fullname, age, height, weight, gender, number, email);
//        Person::printList();
//
//        cout << "\n" <<"-----------------------" << "\n" << endl;
//        cout << "Person has " << (person.weightcheck() ? "weight below 50 kg." : "weight over 50 kg.") << endl;
//        cout << "Person is " << (person.agecheck() ? "underage." : "adult.") << endl;
//    }
//    catch(const char* exception)
//    {
//        cout << "Person cannot be created." << "\n" << exception;
//    }
//
//    return 0;
//}
