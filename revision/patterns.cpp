// patterns

#include<bits/stdc++.h>
using namespace std;

void erected_pyramid(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<" ";
        }

        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    

}

void ones_zeros_triangle(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 ==0) num = 1;
          
          // if odd, then the first 0 will be printed in that row.
        else num = 0;
        for (int j = 0; j <= i; j++)
        {
            cout<<num;
            num = !num;
        }
        cout<<endl;
        
    }
     
}

void inverted_pyramid(int n){
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void  HalfDiamondStarPattern(int n){
    
    for (int i = 1; i <= 2*n-1; i++)
    {
        int star = i;

        if(i > n) star = 2*n-i;
        
        for (int j = 0; j < star; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
        
}

void val_batman(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}

void batman(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void stalactite(int n){
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


void vagiana(int n){
    stalactite(n);
    batman(n);
}

void butterfly(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int star = i;
        if(i > n) star = 2*n - i;
    
        for (int j = 1; j <= star; j++)
        {
            cout<<"*";
        }

        for (int j = 1; j <= 2*(n-star); j++)
        {
            cout<<" ";
        }
        

        for (int j = 1; j <= star; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
        
}

void increasing_pattern(int n){
    int value = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
        
    }
    
}

void alpha_pyramid(int n){

    if(n>26 || n<=0){
        cout<<"NO PATTERN CAN BE MADE! "<<endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        int limit = (i*2-1)/2;

        char place = 'A';
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i*2-1; j++)
        {
            cout<<place;
            if(j>limit) place--;
            else place++;

        }

        cout<<endl;
        
    }
    
}

void square(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j==0 || i == (n-1) || j==(n-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int n = 5;
    square(6);
   
    
    return 0;   
}