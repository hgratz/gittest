#include<iostream>
using namespace std;

int main (int argc, char *argv[]) 
{ 
    
    double input[2][10]; //you can use a vector of vectors, or a 2d C-style array if needed
 

    for (int i =0; i<2;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>input[i][j];
        }
        
    }
    for (int i =0; i<2;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
     
    return 1;

    //this is going to be commited and pushed
    //this is seocnd ommint

} 
