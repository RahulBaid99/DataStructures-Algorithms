#include <iostream>
using namespace std;
int main()
{
    int n;
    int *p;
    p= new int [n];
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Number of elements can't be 0!"<<endl<<"Try Again!!"<<endl;
    }
    else{
    cout<<"enter "<<n<<" numbers"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
    }
    return 0;
}
