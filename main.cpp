#include <iostream>

using namespace std;

int hm;

int main()
{
    cout << "This program is to practice dynamic memory allocation" << endl;
    cout<<"How many number in array:"<<endl;
    cin>>hm;

    int *table;
    table = new int [hm];

    for(int i=0; i<hm; i++)
    {
        cout<<(intptr_t)table<<endl;
        table++;
    }

    delete[]table;

    cout<<"Press any key to exit"<<endl;
    getchar();
    getchar();

    return 0;
}
