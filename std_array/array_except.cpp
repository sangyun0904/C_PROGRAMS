#include <iostream>
#include <array>

using namespace std;
int main() 
{
    array<int, 4> arr3 = {1, 2, 3, 4};

    try
    {
        cout << arr3.at(3) << endl;
        cout << arr3.at(4) << endl;
    }
    catch(const out_of_range& e)
    {
        std::cerr << e.what() << endl;
    }
    
}