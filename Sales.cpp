#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

struct Shopkeeper{
    string name;
    string secondname;
    int SaleTime;
    string specialization;
    string product1, product2, product3;
    float price1, price2, price3;

    float Buy_Sell();
};
float balance = 50;

Shopkeeper* Keeper1 = new Shopkeeper;

void SHKeeper1(){
    float CreditHystory1 = 0.000;
    int TimeNow = 12;
    float price = 13.4;
    int ProductCount = 57; //max 100
    if(Keeper1->SaleTime == TimeNow){
        cout<<"Вы пришли в удачный момент, сейчас действует скидка 20%!";
        price = price * (0.8-CreditHystory1);
    }
    if(ProductCount < ProductCount/2){
        price = price * 0.95;
    }
    balance -= price;
    CreditHystory1 += 0.005;
}

int main(){
    
    
    return 0;
}
