#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main(void){
    // Vectors Decleration
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    std::cout << "Vector1(0): " << vector1.at(0) << std::endl << "Vector1(1): " << vector1.at(1) << std::endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    std::cout << "******************\n";
    std::cout << "Vector2(0): " << vector2.at(0) << std::endl << "Vector2(1): " << vector2.at(1) << std::endl;
    
    vector <int> vector_2d;
    
    vector_2d.push_back(vector1.at(0));
    vector_2d.push_back(vector1.at(1));
    vector_2d.push_back(vector2.at(0));
    vector_2d.push_back(vector2.at(1));
    
    std::cout << "******************\n";
    std::cout << "Vector_2d(0): " << vector_2d.at(0) << std::endl << "Vector_2d(1): " << vector_2d.at(1) << std::endl << "Vector_2d(2): " <<vector_2d.at(2) <<std::endl
                   << "Vector_2d(3): " <<vector_2d.at(3) <<std::endl;
    std::cout << "******************\n";
    
    vector1.at(0) = 1000;
    
    std::cout << "******************\n";
    std::cout << "Vector_2d(0): " << vector_2d.at(0) << std::endl << "Vector_2d(1): " << vector_2d.at(1) << std::endl << "Vector_2d(2): " <<vector_2d.at(2) <<std::endl
                   << "Vector_2d(3): " <<vector_2d.at(3) <<std::endl;
    std::cout << "******************\n";
    
    std::cout << "Vector1(0): " << vector1.at(0) << std::endl << "Vector1(1): " << vector1.at(1) << std::endl;
    std::cout << "******************\n";
    
    getch();
    
    return 0;
}