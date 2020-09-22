#include <iostream>
using namespace std;
void Array();
int main()
{
    Array();
    return 0;
}

void Print(int p[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}

 void Swapo(int *ptr1, int *ptr2 )
    {
       int temp;
       temp = *ptr1;
       *ptr1 = *ptr2;
       *ptr2 = temp;
    }

void Linear_Search(int p[],int n)
{
    int key,y,found=0,j=0;
    cout<<"Enter how many times you wish to find"<<endl;
    cin>>y;
    for(int k=0;k<y;k++){
    cout<<"Enter an element you wish to find"<<endl;
    cin>>key;
    for(j=0;j<n;j++)
    {
        if(p[j]==key)
        {
            found=1;
        break;}}
        if(found==1)
        {
            cout<<"element is at:  "<<j+1<<endl;
            cout<<"Optimized Array:"<<endl;
            Swapo(p+j,p+0);
            Print(p,n);
        }
        else{cout<<"not Present"<<endl;}
    }
}
void Array(){
 cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;
    int *p=new int [n];
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
    }
    char z;
    cout<<"If you wish to search an element press 'y' else press'n' "<<endl;
    cin>>z;
    if(z=='y')
    {Linear_Search(p,n);}
    else{cout<<"GoodBye! "<<endl;}
    delete []p;

}
