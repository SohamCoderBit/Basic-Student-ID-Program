#include<iostream>
#include<string>
using namespace std;
bool check = false;
bool number= true;
class Student_ID
{
    private :
     static int count;
    public :
     string name;
     string Phone_Number;
     int ID_Number;
     int age;
     int PhoneNumber();
     int Show_Info();

    
     Student_ID()
     {
         if(check == false)
         {
             count++;
         cout << "Enter ID NUMBER of Student : " << endl;
        cin >> ID_Number;
        PhoneNumber();
         
         }
     }
    
   
};
int Student_ID :: count = 0;

void check_letter_in_string(string v)
{
    int i = 0;
     for(;i < v.size() ; i++)
    {
       if(isalpha(v[i])) 
       {
         number = false;
       }
    }

    if(number == false)
    {
        cout << "letter Found " << endl;  
       exit(0);
    }
}
Student_ID :: PhoneNumber()
{
    
       cout << "Enter Phone number " << endl;
       cin >> Phone_Number;
     
      check_letter_in_string(Phone_Number);

}
Student_ID :: Show_Info()
{
    cout << Phone_Number << endl;
}

int main()
{

    
    int n, i , c_ID;
    char u_Choice;

cout << "Enter The Number of Student You want to assign " << endl;
    cin >> n;

    
    Student_ID student[n];
    cout << "Check Id OF student  ?" << endl;
    cin >> u_Choice;


    if(u_Choice == 'y' || u_Choice == 'Y')
    {
         check = true;
         cout << "Enter Student ID " << endl;
         cin >> c_ID;
         for(i = 0; i < n; i++)
         {
             if(student[i].ID_Number == c_ID)
             {
                student[i].Show_Info();
             }
         }
    }
    else if(u_Choice == 'n' || u_Choice == 'N')
    {
        check = false;
    }

    else
    {
        cout << "invalid error" << endl;
    }


  

    
    return 0;
}