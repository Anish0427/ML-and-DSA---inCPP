#include<iostream>
#include<vector>

std::vector<int> regress(const std::vector<int>& vec)
{   
    std::vector<int> result;
    result.reserve(vec.size());
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        result.push_back(vec[i]*2);
    }
    return result;
}

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add some elements to the vector
    // numbers.push_back(10);
 
    for (std::size_t i = 0; i <= 10; ++i)
    {
        numbers.push_back(i);
    }

    // Display the elements of the vector
    std::cout << "Elements in the vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    // numbers.pop_back();

    std::cout << "Elements after regression: ";
    std::vector<int> regressedNumbers = regress(numbers);
    for (const auto& num : regressedNumbers)
        {
            std::cout << num << " ";
        }

    return 0;
}