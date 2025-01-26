#include<iostream>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(55);
    cout<< vec.front() << endl;
    cout <<vec.back() << endl;
    return 0;
}