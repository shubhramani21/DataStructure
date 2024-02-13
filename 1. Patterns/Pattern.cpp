#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<(n-i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<(n-i+1);j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        //no of spaces
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        } 

        //stars
        for(int j=0;j<(2*i+1);j++)
        {
            cout<<"*";
        }

        //no of spaces
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        } 
        cout<<endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        //spaces 
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        //stars
        for (int j = 0; j < ((n-i)*2-1); j++)
        {
            cout<<"*";
        }
        

        //spaces
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
    /*------------Method 1-----------
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    */
   /*-------Method 2--------------*/

   for(int i=1;i<=(n*2-1);i++)
    {
        int stars=i;
        if(i>n) stars= 2*n-i;
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
void pattern11(int n)
{
    for(int i=0;i<n;i++)
    {
        int start=1;
        if(i%2==0) start = 1;
        else start=0;
        for(int j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Number
        for (int j = 1 ; j <= i ; j++)
        {
            cout<<j<<" ";
        }

        //space
        for (int j = 0; j < (2*(n-i)); j++)
        {
            cout<<"  ";
        }
        

        //number
        for (int j = i ; j > 0 ; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
void pattern13(int n)
{
    int num=1;
    for(int i = 0; i < n ; i++)
    {
        for(int j=0 ;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch = 'A'; ch<= 'A' + i ; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch ='A'; ch<='A'+n-i-1;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        char c='A'+i;
        for(char ch = 'A'; ch<= 'A'+i;ch++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n)
{
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        //charater
        char ch='A';
        int point=(i*2+1)/2;
        for(int j =1; j<=i*2+1;j++)
        {
            cout<<ch;
            if(j<=point) ch++;
            else ch--;
        }

        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
}
void pattern18(int n)
{
    char ch='A'+n-1;
    for(int i =0;i<n;i++)
    {
        ch=ch-i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        ch='A'+n-1;
    }
}
void pattern19(int n)
{
    
    for(int i =0;i<n;i++)
    {
        char ch='A'+n-1;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
        
    }
}
void pattern20(int n)
{
    for(int i=0;i<n;i++)
    {
        //stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"* ";
        }
        //space
        for(int j=1;j<=i*2;j++)
        {
            cout<<" ";
        }

        //stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        //space
        for(int j=1;j<=2*n-(i*2);j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern21(int n)
{
    int space=2*(n);
    int stars=0;

    for(int i=0;i<(2*n);i++)
    {
        

        if(i<n) 
        {
            stars=i+1;
            space=space-2;
        }
        else 
        {
            stars=stars-1;
            space=space+2;
        }

        //stars
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }

        //space
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}
void pattern22(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==0 || j== 0 || i==n-1 || j==n-1)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern23(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<min(min(top,bottom),min(right,left));
        }
        cout<<endl;
        
    }
}

void pattern24(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<n-(min(min(top,bottom),min(right,left)));
        }
        cout<<endl;
        
    }
}
int main()
{
    int n;
    cin>>n;
    pattern24(n);
    return 0;
}