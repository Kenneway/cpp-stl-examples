#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    /**********************************************************
     * constructors
     */
    cout << "************ constructors ************" << endl;

    string str[] = {"Alex", "John", "Robert"};
    // empty vector object
    vector<int> v1;
    // creates vector with 10 empty elements
    vector<int> v2(10);
    // creates vector with 10 elements,
    // and assign value 0 for each
    vector<int> v3(10, 0);
    // creates vector and assigns
    // values from string array
    vector<string> v4(str+0, str+3);
    vector<string>::iterator sIt = v4.begin();
    while (sIt != v4.end())
    {
        cout << *sIt++ << " ";
    }
    cout << endl;
    // copy constructor
    vector<string> v5(v4);
    for (int i=0; i<3; i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    /**********************************************************
     * assign
     */
    cout << "************ assign ************" << endl;

    int ary[] = {1, 2, 3, 4, 5};
    vector<int> v;
    // assign to the v the contains of ary
    v.assign(ary, ary+5);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    // replace v for 3 copies of 100
    v.assign(3, 100);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /**********************************************************
     * at
     */
    cout << "************ at ************" << endl;

    vector<int> v_at(3, 0);
    v_at[0] = 100;
    v_at.at(1) = 200;
    for (int i=0; i<3; i++)
    {
        cout << v_at.at(i) << " ";
    }
    cout << endl;








































//    return 0;
}















