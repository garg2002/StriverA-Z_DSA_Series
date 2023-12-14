#include <iostream>

using namespace std;

void pattern1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        //Space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //Pattern
        for(int k=1;k<2*i;k++)
        {
            cout<<"*";
        }
        //Space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n)
{
    for(int i=1;i<=n;i++)
    {
        //Space
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        //Pattern
        for(int k=i;k<=2*n-i;k++)
        {
            cout<<"*";
        }
        //Space
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n)
{
    //Upper Pyramid
     for(int i=1;i<=n;i++)
    {
        //Space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //Pattern
        for(int k=1;k<2*i;k++)
        {
            cout<<"*";
        }
        //Space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    //Lower Pyramid
    for(int i=1;i<=n;i++)
    {
        //Space
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        //Pattern
        for(int k=i;k<=2*n-i;k++)
        {
            cout<<"*";
        }
        //Space
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)  
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
void pattern12(int n)
{
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<2*(n-i)-1;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n)
{    int num =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch ='A'; ch<'A'+i; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char ch ='A'; ch<='A'+n-i; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch = 'A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern17(int n)
{
     for(int i=0;i<n;i++)
    {
        //Space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //Pattern
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int k=1;k<=2*i+1;k++)
        {
            cout<<ch;
            if(k<=breakPoint)
                ch ++;
            else
                ch --;
        }
        //Space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n)
{
    int space1 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)  //stars
        {
            cout<<"*";
        }
        for(int k=0;k<space1;k++) // spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++) //stars
        {
            cout<<"*";
        }
        space1+=2;
        cout<<endl;
    }

    int space2=8;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=space2;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        space2-=2;
        cout<<endl;
    }
}
void pattern20(int n)
{
    int space2=8;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=space2;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        space2-=2;
        cout<<endl;
    }
    int space1 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)  //stars
        {
            cout<<"*";
        }
        for(int k=0;k<space1;k++) // spaces
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++) //stars
        {
            cout<<"*";
        }
        space1+=2;
        cout<<endl;
    }
}
void pattern21(int  n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int right = (2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down), min(left,right)));
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    cout<<endl;
    cout<<"Striver A2Z Pattern Series Logics"<<endl;
    cout<<endl;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern7(n);
    cout<<endl;
    pattern8(n);
    cout<<endl;
    pattern9(n);
    cout<<endl;
    pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern12(n);
    cout<<endl;
    pattern13(n);
    cout<<endl;
    pattern14(n);
    cout<<endl;
    pattern15(n);
    cout<<endl;
    pattern16(n);
    cout<<endl;
    pattern17(n);
    cout<<endl;
    pattern18(n);
    cout<<endl;
    pattern19(n);
    cout<<endl;
    pattern20(n);
    cout<<endl;
     pattern21(n);
    cout<<endl;
     pattern22(n);
    cout<<endl;
    
    return 0;
}