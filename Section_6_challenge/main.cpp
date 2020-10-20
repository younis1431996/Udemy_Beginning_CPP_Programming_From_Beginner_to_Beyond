#include <iostream>
#include <conio.h>

using namespace std;

int main(void){
    
    // Write your code here.
    
    // Variables Decleration.
    int num_of_small_rooms {0};
    int num_of_large_rooms {0};
    
    const int cost_per_small_room {25};
    const int cost_per_large_room {35}; 
    const float sales_tax_rate {0.06};
    
     float sales_tax_vlaue {0};
     double total_estimate {0};    
    
    // Get Iput Data
    std::cout << "Num. of small rooms: ";
    std::cin >> num_of_small_rooms;
    std::cout << "Num. of large rooms: ";
    std::cin >> num_of_large_rooms;
    
    // Calculation
    sales_tax_vlaue = ( ( (num_of_small_rooms * cost_per_small_room) + (num_of_large_rooms * cost_per_large_room) ) * sales_tax_rate );
    total_estimate = ( ( (num_of_small_rooms * cost_per_small_room) + (num_of_large_rooms * cost_per_large_room) ) + sales_tax_vlaue );
    
    std::cout << "Total Estimation = $" << total_estimate << std::endl;
    std::cout << "This estiamye is valid for 30 days" << std::endl;
    getch();
    return 0;
}