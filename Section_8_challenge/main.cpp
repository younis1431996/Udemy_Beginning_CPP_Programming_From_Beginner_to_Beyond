#include <iostream>
#include <conio.h>

int get_reminder(int change_value,int temp,const int cnst_value);

using namespace std;

int main(void){
    const int Dollars      {100};
    const int Quarter     {25};
    const int Dime         {10};
    const int Nickel        {5};
    const int Penny        {1};
    
    int num_of_cents     {0};
    int reminder            {0};
    int temp                  {0};
    
    cout << "Enter the number of cents pls: ";
    cin >> num_of_cents;
    
    if(num_of_cents == 0){
        cout << "Zero Cents" << endl;
    } else{
        temp = num_of_cents/Dollars;
        reminder = get_reminder(num_of_cents,temp,Dollars);
        cout << "- Dollars = " << temp << endl;
        
        temp = reminder/Quarter;
        reminder = get_reminder(reminder,temp,Quarter);
        cout << "- Quarter = " << temp << endl; 
        
        temp = reminder/Dime;
        reminder = get_reminder(reminder,temp,Dime);
        cout    << "- Dime = " << temp << endl;
        
        temp = reminder/Nickel;
        reminder = get_reminder(reminder,temp,Nickel);
        cout    << "- Nickel = " << temp << endl;
        
        temp = reminder/Penny;
        reminder = get_reminder(reminder,temp,Penny);
        cout    << "- Penny = "<< temp << endl;
    }
    getch();
    return 0;     
}

int get_reminder(int change_value,int temp,const int cnst_value){
    return (change_value - temp*cnst_value);
}