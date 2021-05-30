#include <iostream>
#include <vector>
using namespace std;


void print_vector(vector <int> & data)
{
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i]<<"  ";
    }

}
int main()
{
    vector<int> data = { 1 ,2 ,3 };
    print_vector(data);
    data.push_back(12);
    cout << data[data.size()-1] << endl;
    data.pop_back();
    cout << data.size();

}

