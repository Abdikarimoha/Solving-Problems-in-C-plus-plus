/******************************************************************************
Type Conversion : Class to Class

Define a class inventory1 having data mmber as item,quantity and unit-price,define
another class inventory2 having data member as item and total price. 
Define function to show there data convert inventory1 type to invenroty2 type to 
assign the unitprice to totalprice use class type to class type conversion

*******************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

class inventory2;
class inventory1
{
    char item[20];
    int quantity;
    int unitprice;
    
    public:
        inventory1(const char i[20], int q, int u)
        {
            strcpy(item,i);
            quantity=q;
            unitprice=u;
        }
        
        void show()
        {
            cout << "item name is: " << item << endl;
            cout << "quantity is: " << quantity << endl;
            cout << "unitprice is: " << unitprice << endl;
        }
        
        operator inventory2();
        
};

class inventory2
{
    char item_name[20];
    int total_price;
    
    public:
        inventory2(){}
        
        inventory2(char n[20], int t)
        {
            strcpy(item_name,n);
            total_price=t;
        }
        
        void display()
        {
            cout << "After conver " << endl;
            cout << "item name is: " << item_name << endl;
            cout << "total price is: " << total_price << endl;
        }
};

inventory1::operator inventory2()
{
    char name[20];
    int total;
    strcpy(name,item);
    total = quantity * unitprice ;
    return inventory2(name, total);
}

int main()
{
    inventory1 i1( "BMW" , 10, 15000);
    i1.show();
    cout << endl ;
    inventory2 i2;
    i2 = i1;
    i2.display();
    
    return 0;
    
}