#include<iostream>
#include<vector>
#include <cmath>

using namespace std;

vector<vector<int>> perceptron(const vector<vector<int>>& x, const vector<int>& w, int bias)
{
    vector<vector<int>> y;
    for (size_t i = 0; i < x.size(); ++i)
    {
        int sum = bias;
        for (size_t j = 0; j < x[i].size(); ++j)
        {
            sum += x[i][j] * w[j];
        }
        sum = sin(sum); // Apply sine activation function
        sum = (sum >= 0) ? 1 : 0; // Apply threshold to get binary output
        y.push_back({sum});
    }
    return y;
}

int main()
{
    // Input data (features)
    vector<vector<int>> x = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 1}
    };

    // Weights
    vector<int> w = {1, 1};

    // Bias
    int bias = -1;

    // Perform perceptron operation
    vector<vector<int>> y = perceptron(x, w, bias);

    // Display the output
    cout << "Output of the perceptron:" << endl;
    for (const auto& output : y)
    {
        cout << output[0] << endl;
    }

    return 0;
}
    