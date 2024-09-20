#include <iostream>
using namespace std;
class CurrencyConvertor{
    private:
    double usdToEuroRate;
    double euroToUsdRate;
    double usdToPakRupeeRate;
    double usdToIndRupeeRate;
    public:
    CurrencyConvertor(double usdToEuro, double euroToUsd, double usdToPak, double usdToInd){
    usdToEuroRate = usdToEuro;
    euroToUsdRate = euroToUsd;
    usdToPakRupeeRate = usdToPak;
    usdToIndRupeeRate = usdToInd;
    }
    double usdToEuro(double usdAmount)
    {return usdAmount*usdToEuroRate;}
    double euroToUsd(double euroAmount)
    {return euroAmount*euroToUsdRate;}
    double usdToPakRupee(double usdAmount)
    {return usdAmount*usdToPakRupeeRate;}
    double usdToIndRupee(double usdAmount)
    {return usdAmount*usdToIndRupeeRate;}
    void displayExchangeRate()
    const{
        cout<<"\n\t-------Current Exchange Rate-------\n";
        cout<<"1. 1 USD TO EURO :"<<usdToEuroRate<<endl;
        cout<<"2. 1 EURO TO USD:"<<euroToUsdRate<<endl;
        cout<<"3. 1 USD TO PKR:"<<usdToPakRupeeRate<<endl;
        cout<<"4. 1 USD TO INR:"<<usdToIndRupeeRate<<endl;

    }
};
main(){
    const double initialUsdToEuroRate = 0.90;
    const double initialEuroToUsdRate = 1.11;
    const double initialUsdToPakRate = 277.94;
    const double initialUsdToIndRate = 83.51;
    CurrencyConvertor convertor(initialUsdToEuroRate,initialEuroToUsdRate,initialUsdToPakRate,initialUsdToIndRate);
    int choice;
    double amount;
    do{
        system("cls");
        convertor.displayExchangeRate();
        cout<<"\n------>MAIN MENU<-------\n";
        cout<<"1. Convert USD to EURO \n";
        cout<<"2. Convert EURO to USD \n";
        cout<<"3. Convert USD to PKR\n";
        cout<<"4. Convert USD to INR\n";
        cout<<"5. EXIT...\n";
        cout<<"PLEASE ENTER YOUR CHOICE...:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter the Amount in USD:";
            cin>>amount;
            cout<<amount<<" USD is equal to "<<convertor.usdToEuro(amount)<<" Euros\n";
            system("pause");
            break;
            case 2:
            cout<<"Enter the amount of Euro:";
            cin>>amount;
            cout<<amount<<" Euro is equal to "<<convertor.euroToUsd(amount)<<" USD\n";
            system("pause");
            break;
            case 3:
            cout<<"Enter amount of USD:";
            cin>>amount;
            cout<<amount<<" USD is equal to "<<convertor.usdToPakRupee(amount)<<" Pakistani Rupees\n";
            system("pause");
            break;
            case 4:
            cout<<"Enter amount in USD:";
            cin>>amount;
            cout<<amount<<" USD is equal to "<<convertor.usdToIndRupee(amount)<<" Indian Rupees\n";
            system("pause");
            break;
            case 0:
            cout<<"Program End...\n Program written by NISAR AHMAD";
            break;
            default:
            cout<<"Please enter a valid number....\n";
            system("pause");
        }
    }while(choice !=0);
}
    

            
        
        
    


