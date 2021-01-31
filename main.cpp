#include <iostream>

using namespace std;

int main()

{
   string name,good ,payment

    cout << "Welcome to ABC Supermarket" << endl;


    cout <<"Please what is your name" << endl;
    cin>>name;

    string un_id;
    cout <<" Please enter your unique id" << endl;
    cin>> un_id;

    cout<<"Please these are the goods available"<<endl;
    cout <<"The price of printer = $200"<<endl;
    cout <<"The price of phone = $120"<<endl;
    cout <<"The price of table = $80"<<endl;

    double printerPrice=200;
    double phonePrice=120;
    double tablePrice=80;

    double vat= 0.12;
    double totalAmount;


    int num;


    cout<<"Please enter what you will like to purchase"<<endl;
    cin>>goods;
    cout <<"Please how many will you buy"<<endl;
    cin>>quantity;

    if(good== "printer"){

        totalAmount = printerPrice*quantity*vat ;

        cout<<"The total amount of Printer ="<<totalAmount<<endl;
    }else if(good== "table"){
        totalAmount = tablePrice*quantity*vat;

        cout<<"The total amount of table ="<<totalAmount<<endl;

    }else if(good== "phone"){

        totalAmount = phonePrice*quantity*vat;

        cout<<"The total cost="<<totalAmount<<endl;

    }


    double payment,balance;

    cout<<"please enter the amount"<<endl;
    cin>>payment;

    while(payment<totalAmount){
        cout<<"Please the amount inputed is less than what you have to pay"<<endl;
        cin>>payment;
    }

    if(payment>totalAmount){
      balance=payment-totalAmount;
      cout<<"You made a payment of "<<payment<<" for an amount "<<totalAmount<<endl;
      cout<<"Your balance is "<<balance<<endl;
      cout<<"Thanks for shopping with us\n"<<endl;
    }else{
        cout<<"Thanks for shopping with us\n"<<endl;
    }

cout<<endl;
    cout<<"Name of customer: "<<name<<endl;
cout<<"unique ID: "<<un_id<<endl;
cout<<"item bought: "<<good<<endl;
cout<<"quantity bought: "<<quantity<<endl;
cout<<"vat amount: "<<vat<<endl;
cout<<"total cost: "<<totalAmount<<endl;
cout<<"total amount paid: "<<payment<<endl;
cout<<"balance if any: "<<balance<<endl;
















    return 0;
}

    return 0;
}
