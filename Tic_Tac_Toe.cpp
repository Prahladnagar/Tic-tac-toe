#include<iostream>
using namespace std;
void pattern(char[3][3]);
void result(int,int,char[3][3]);
void ask(int& ,int&);
int main()
{
    int i,j,r=0,c=0,flag=0,count=0;
    char arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=' ';

        }
    }
    while(flag==0) 
    {
        if(count%2==0)
        {
            pattern(arr);
            ask(r,c);
            arr[r-1][c-1]='0';
            result(r-1,c-1,arr);

        }
        else
        {
            pattern(arr);
            ask(r,c);
            arr[r-1][c-1]='*';
            result(r-1,c-1,arr);
        }
        count++;
       
    }
}
void pattern(char arr[3][3])
{
    char temp[34];
    temp[0]=218;
    cout<<temp[0];
    cout<<"-----------";
    temp[1]=191;
    cout<<temp[1]<<endl;
    cout<<"| "<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<" |"<<endl;
    cout<<"|-----------|"<<endl;
    cout<<"| "<<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<" |"<<endl;
    cout<<"|-----------|"<<endl;
    cout<<"| "<<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<" |"<<endl;
    cout<<"|-----------|"<<endl;
}
void ask(int &r,int &c)
{
    a:
    cout<<"Enter row(1-3)"<<endl;
    cin>>r;
    // fflush(r);
    if(r!=3&&r!=1&&r!=2)
    {
        cout<<"Wrong input"<<endl;
        goto a;
    }
    b:
    cout<<"Enter column(1-3)"<<endl;
    cin>>c;
    if(c!=3&&c!=1&&c!=2)
    {
        cout<<"Wrong input"<<endl;
        goto b;
    }
    
}
void result(int i,int j,char arr[3][3])
{
    if(arr[i][0]==arr[i][1])
    {
        if(arr[i][1]==arr[i][2])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[i][2]==arr[i][1])
    {
        if(arr[i][0]==arr[i][2])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[0][j]==arr[1][j])
    {
        if(arr[1][j]==arr[2][j])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[2][j]==arr[1][j])
    {
        if(arr[0][j]==arr[2][j])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[0][0]==arr[1][1]&&arr[1][1]!=' ')
    {
        if(arr[0][0]==arr[2][2])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[2][2]==arr[1][1]&&arr[1][1]!=' ')
    {
        if(arr[0][0]==arr[2][2])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[0][2]==arr[1][1]&&arr[1][1]!=' ')
    {
        if(arr[1][1]==arr[2][0])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
    if(arr[2][0]==arr[1][1]&&arr[1][1]!=' ')
    {
        if(arr[0][2]==arr[2][0])
        {
            pattern(arr);
            cout<<"Game Over"<<endl;
            exit(0);
        }
    }
}