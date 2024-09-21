#include <iostream>
using namespace std;
class vehicle{
    private:
    string make,model;
    int year;
    public:
    void inputData(){
        cout<<"\nEnter the company name:";
        cin>>make;
        cout<<"Enter the model of car:";
        cin>>model;
        cout<<"Enter the Year:";
        cin>>year;
    }
    void display(){
        cout<<"\nMake : "<<make<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Year : "<<year<<endl;

    }    
};
class car : public vehicle{
    private:
    int numDoor;
    public:
    void inputData(){
        vehicle::inputData();
        cout<<"Enter the number of doors of car : ";
        cin>>numDoor;

    }
    void display(){
        vehicle::display();
        cout<<"Doors : "<<numDoor<<endl;

    }
};
class ToyotaCar : public car{
    private:
    string trimlevel;
    public:
    void inputData(){
        car::inputData();
        cout<<"Enter the trim level :"<<trimlevel<<endl;
        cin>>trimlevel;
    }
    void display(){
        car::display();
        cout<<"Trim level of car is : "<<trimlevel;
    }
};
main(){
    ToyotaCar myCar;
   
    cout<<"=-------INPUT CAR INFORMATION-------=";
    myCar.inputData();
    cout<<"=-------OUTPUT CAR INFORMATION------=";
    myCar.display();
}


