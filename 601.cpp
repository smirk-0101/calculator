#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Student
{
protected:
    int Num;
    string Name;
public:
    Student(int num,string name)
    {
        Num=num;
        Name=name;
    }
    int shownum()
    {
        return Num;
    }
    string showname()
    {
        return Name;
    }
};
class Student1:public Student
{
private:
    int Age;
    string Address;
public:
    Student1(int num,string name,int age,string address):Student(num,name)
    {
        Age=age;
        Address=address;
    }
    int showage()
    {
        return Age;
    }
    string showaddress()
    {
        return Address;
    }
    void print()
    {
        cout<<"ѧ�ţ�"<<shownum()<<endl;
        Sleep(1000);
        cout<<"������"<<showname()<<endl;
        Sleep(1000);
        cout<<"���䣺"<<showage()<<endl;
        Sleep(1000);
        cout<<"��ַ��"<<showaddress()<<endl;
        Sleep(1000);
    }
};
int main()
{
    Student1 st(1,"2",3,"4");
    cout<<"����೤��Ϣ��"<<endl;
    st.print();
    return 0;
}



