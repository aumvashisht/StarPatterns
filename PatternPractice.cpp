#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Please Enter the Value of n : ";
    cin>> n;

    // Homework Questions begin
    // Q6 Butterfly Pattern 
    for(int rows = 0; rows <n ; rows++)
    {
        for(int cols = 0; cols < rows+1; cols++)
        {
            cout<<"* ";
        }
        for(int cols= 0; cols< 2*n - 2*rows - 2; cols++)
        {
            cout<<"  ";
        }
        for(int cols = 0; cols< rows+1; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int rows = 0; rows< n; rows++)
    {
        for(int cols = 0; cols<n - rows; cols++ )
        {
            cout<<"* ";
        }
        for(int cols = 0; cols< 2*rows; cols++)
        {
            cout<<"  ";
        }
        for(int cols=0; cols< n - rows; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // // Q5 Floyd's Triangle
    int num=1;
    for (int rows = 0; rows < n; rows++)
    {   
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<num++<<" ";
            // num++;
        }
        cout<<endl;
    }
    cout<<endl;

    // //Q4 Solid Half Diamond
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int rows = 0; rows < n-1; rows++)
    {
        for (int cols = 0; cols < (n - rows - 1); cols++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    cout<<endl;
    

    // // Q3 
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < 2*n - rows - 2; cols++)
        {
            cout<<"*";
        }
        for (int cols = 0; cols < rows +1; cols++)
        {
            if (cols == rows)
            {
                cout<<rows+1;
            }
            else
            {
                cout<<rows+1<<"*";
            }
            
        }
        for (int cols = 0; cols < 2*n - rows -2; cols++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    cout<<endl;

    // //Q2 Numeric Palindrome Equilateral Pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n - rows - 1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<cols+1;
            
        }
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<rows-cols;
        }
        cout<<endl;
    }
    cout<<endl;
    
    

    // // Q1 numeric hollow inverted half pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n - rows; cols++)
        {
           if (rows == 0 || rows == n-1 || cols == 0 || cols == n - rows -1)
           {
            cout<<rows+cols+1;
            
           }
           else
           {
            cout<<" ";
           }
            
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    
    // Homework Questions End



    // // Numeric Half Pyramid with spaces 
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols <= rows; cols++)
        {
            if (rows == 0 || rows == n-1)
            {
                cout<<cols+1;
            }  
            else
            {
                if (cols == 0 || cols == rows)
                {
                    cout<<cols+1;
                }
                else
                {
                    cout<<" ";
                }  
            }
        }
       cout<<endl; 
    }
    cout<<endl;

    //  // Hollow inverted Pyramid with spaces first
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<"  ";
        }
        for (int cols = 0; cols < n - rows; cols++)
        {
            if (rows == 0 || rows == n - 1)
            {
                cout<<"* ";
            }
            else
            {
                if (cols == 0 || cols == n - rows - 1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
                
            }
            
        }
        cout<<endl;
    }
    cout<<endl;

    // // Hollow Inverted Half pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n - rows; cols++)
        {
            if (rows == 0 || rows == n-1)
            {
                cout<<"* ";
            }
            else
            {
                if (cols == 0 || cols == n-rows-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }           
            }
        }
    cout<<endl;
    }
    cout<<endl;

    // // Numeric pattern with Stars in between (combining numeric half pyramid and inverted numeric half pyramid with stars in between)
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < 2*rows +1; cols++)
        {
            if (cols %2 ==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<rows+1;
            }
        }
        cout<<endl;
    }
    for (int rows = 0; rows < n-1; rows++)
    {
        for (int cols = 0; cols < ((n-1)-rows); cols++)
        {
            
             if (cols == (n-1) -rows -1)
        {
            cout<<(n-1) - rows;
        }
        else
        {
            cout<<(n-1)-rows<<"*";
        }
        }
       cout<<endl;
        
    }
    cout<<endl<<endl;

    // // Flipped Solid Diamond(with Spaces)
    // int num = 8;
    // int n = num/2;

    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n-rows; cols++)
        {
            cout<<"* ";
        }
        for (int cols = 0; cols < 2*rows+1; cols++)
        {
            cout<<"  ";
        }
        for (int cols = 0; cols < n - rows; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<"* ";
        }
        for (int cols = 0; cols < 2*n - 2*rows -1; cols++)
        {
            cout<<"  ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    
    // // Hollow Pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n-rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            if (cols==0 || cols == rows)
            {
                cout<<"* ";    
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;        
    }
    cout<<endl<<endl;


    // // Inverted Hollow Pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < 2*n - 2*rows - 1; cols++)
        {
            if (cols == 0 || cols == 2*n- 2*rows -2)
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
    cout<<endl<<endl;

    // //Hollow Diamond
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n - rows -1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            if (cols == 0 || cols == rows)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl; 
    }
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < 2*n - 2*rows -1; cols++)
        {
            if (cols == 0 || cols == 2*n - 2*rows -2)
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
    cout<<endl<<endl;
    



    // // Full Diamond -> last 2 (full pyramid and inverted Full Pyramid ko jodne se full Diamond milega)
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n-rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < n-rows; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // //Inverted Full Pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < n-rows; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    cout<<endl;

    //Full Pyrmaid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < n-rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    // // Numeric Half Pyramid
    for (int rows = 0; rows < n; rows++)
    {
        for (int cols = 0; cols < rows+1; cols++)
        {
            cout<< cols+1;
        }
        cout<<endl;
    }
    cout<<endl;

    // // Inverted Half Pyramid
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // // Half pyramid 
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // //Hollow square 
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || row == n-1|| col == 0 || col == n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }    
                
        }
        cout<<'\n';
    }
    
    return 0;
}