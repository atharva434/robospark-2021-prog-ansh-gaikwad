#include<iostream>
using namespace std;
#include <string>
class Personal{
    protected:
    string name;
    string surname;
    string address;
    int mobno;
    int dob;
    public:
    Personal(){
    cout<<"name :";
    cin >> name;
    cout<<"surname :";
    cin>>surname;
    cout<<"number :";
    cin>>mobno;
    cout<<"address :";
    cin>>address;
    cout<<"date of birth :";
    cin>>dob;
    }



};
class Professional {
    protected:
    string name_of_organization;
    string  job_profile;
    string project;
    public:
    Professional(){
    cout <<"name of organization";
    cin>>name_of_organization;
    cout <<"job profile";
    cin>>job_profile;
    cout <<"project";
    cin>>project;
    }
};
class Academic {
    protected:
    int year_of_passing;
    float cgpa;
    string college_name;
    string  branch;
    public:
    Academic(){
    cout<<"year of passing \n";
    cin>>year_of_passing;
    cout<<"cgpa";
    cin>>cgpa;
    cout <<"college name \n";
    cin>>college_name;
    cout <<"branch \n ";
    cin >>branch;

    }

};
class Biodata :public Personal,public Professional, public Academic{
    public:
    Biodata(){
    cout<<"name :";
    cout<< name<<endl;
    cout<<"surname :";
    cout<<surname<<endl;
    cout<<"number :";
    cout<<mobno<<endl;
    cout<<"address :";
    cout<<address<<endl;
    cout<<"date of birth :";
    cout<<dob<<endl;
    cout <<"name of organization";
    cout<<name_of_organization<<endl;
    cout <<"job profile";
    cout<<job_profile<<endl;
    cout <<"project";
    cout<<project<<endl;
    cout<<"year of passing \n";
    cout<<year_of_passing<<endl;
    cout<<"cgpa";
    cout<<cgpa<<endl;
    cout <<"college name \n";
    cout<<college_name<<endl;
    cout <<"branch \n ";
    cout<<branch<<endl;

    }

    


    

};
int main()
{
   Biodata s1;
   


return 0;
}