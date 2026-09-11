#include <iostream>
// #include <map>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> vocab
    {
        {0, "Zero"},
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    int num;
    std::cout<< "Enter number (0-9):";
    std::cin>> num;
    
    if(num<10 && num>=0){
        std::cout<< vocab[num] << "\n";
        
    }
    return 0;
}