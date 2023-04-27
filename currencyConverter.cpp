#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
using namespace std;

double RupeeToDollar(double rupee)
{
    double dollar=rupee*0.012;
    return dollar;
}

double RupeeToPound(double rupee)
{
    double pound=rupee*0.0088;
    return pound;
}

double RupeeToEuro(double rupee)
{
    double euro=rupee*0.0105;
    return euro;
}

double DollarToRupee(double dollar)
{
    double rupee=dollar*81.81;
    return rupee;
}

double PoundToRupee(double pound)
{
    double rupee=pound*113.11;
    return rupee;
}

double EuroToRupee(double euro)
{
    double rupee=euro*94.82;
    return rupee;
}

double DollarToPound(double dollar)
{
    double pound=dollar*0.73;
    return pound;
}

double PoundToDollar(double pound)
{
    double dollar=pound*1.37;
    return dollar;
}

double DollarToEuro(double dollar)
{
    double euro=dollar*0.86;
    return euro;
}

double EuroToDollar(double euro)
{
    double dollar=euro*1.16;
    return dollar;
}

double EuroToPound(double euro)
{
    double pound=euro*0.90;
    return pound;
}

double PoundToEuro(double pound)
{
    double euro=pound*1.11;
    return euro;
}

void waiting(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while(goal>clock());
}

int main(){
    system("title currency converter ");
    system("color E0");
    string currency;
    int choice;
    while(true){
        system("cls");
        cout<<"\n\n_____________________________Currency Converter__________________________\n\n";
        cout<<"choose from below options to convert";
        cout<<endl;
        cout<<"\t\t\t [1] Rupee to dollar"<<endl;
        cout<<"\t\t\t [2] Rupee to pound"<<endl;
        cout<<"\t\t\t [3] Rupee to euro"<<endl;
        cout<<"\t\t\t [4] Dollar to Rupee"<<endl;
        cout<<"\t\t\t [5] Pound to Rupee"<<endl;
        cout<<"\t\t\t [6] Euro to Rupee"<<endl;
        cout<<"\t\t\t [7] Dollar to pound "<<endl;
        cout<<"\t\t\t [8] Pound to Dollar "<<endl;
        cout<<"\t\t\t [9] Dollar to Euro"<<endl;
        cout<<"\t\t\t [10] Euro to Dollar"<<endl;
        cout<<"\t\t\t [11] Euro to Pound" <<endl;
        cout<<"\t\t\t [12] Pound to Euro"<<endl;

        cout<<endl;
        cout<<"Enter your choice to convert from one currency to other : \n";
        cin>>choice;

        if(choice==1){ double dollar;double rupee;cout<<"Enter Rupee to convert to Dollar : "<<endl;cin>>rupee;dollar=RupeeToDollar(rupee);cout<<rupee<<" dollars in rupees : "<<dollar;waiting(9000);
        }

        else if(choice==2){double pound;double rupee;cout<<"Enter  Rupee to Pound : "<<endl;cin>>rupee;pound=RupeeToPound(rupee);cout<<rupee<< " pound in rupees : "<<pound;waiting(9000);
        }

        else if(choice==3){double euro;double rupee;cout<<"Enter  Rupee to euro : "<<endl;cin>>rupee;euro=RupeeToEuro(rupee);cout<<rupee<< " euro in rupees : "<<euro;waiting(9000);
        }

        else if(choice==4){double dollar;double rupee;cout<<"Enter  dollar to rupee : "<<endl;cin>>dollar;dollar=RupeeToDollar(rupee);cout<<rupee<< " rupee in dollar : "<<dollar;waiting(9000);
        }

        else if(choice==5){double pound, rupee;cout<<"enter pound to rupee "<<endl;cin>>pound;rupee=PoundToRupee(pound);cout<<"Rupees : " <<rupee;waiting(9000);
        }

        else if(choice==6){double euro, rupee;cout<<"enter euros : "<<endl;cin>>euro;rupee=EuroToRupee(euro);cout<<"rupee : " <<rupee;waiting(9000);

        }

        else if(choice==7){double dollar,pound;cout<<"enter dollars : "<<endl; cin>> dollar;pound=DollarToPound(dollar); cout<<"pound: " << pound; waiting(9000);}

        else if(choice==8){ double dollar, pound; cout<< " Enter Pounds : "<<endl; cin>>pound; dollar=PoundToDollar(pound); cout<<"Dollars : "<<dollar; waiting(9000);}

        else if(choice==9){ double dollar, euro; cout<<"Enter dollars: "<<endl; cin>>dollar; euro=DollarToEuro(dollar); cout<<"Euro : "<<euro; waiting(9000); }
        else if(choice==10){ double dollar, euro; cout<<"Enter Euro: "<<endl; cin>>euro; dollar=EuroToDollar(euro); cout<<"Dollars : " << dollar; waiting(9000);}
        else if(choice==11){double pound, euro; cout<<"Enter Euro: "<<endl; cin>>euro; pound=EuroToPound(euro); cout<<"Pound: "<<pound; waiting(9000);}
        else if(choice==12){double pound,euro; cout<<"enter Pound: "<<endl; cin>>pound; euro=PoundToEuro(pound); cout<<"Euros : "<<euro; waiting(9000);}

        else{cout<<"invalid choice, please select between 1- 12  "<<endl;}


    }
}