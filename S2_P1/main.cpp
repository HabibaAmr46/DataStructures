#include <iostream>
#include<stack>

using namespace std;
int power(int n,int p)
{
    int mult=1;
    for(int i=1;i<=p;i++)
    mult*=n;
    return mult;

}

int BinaryToDecimal(int number)
{

    stack<int> Binary;
    int rem;
    while(number!=0)
    {
        rem = number % 10; //take remainder
        number = number / 10;
        Binary.push(rem);

    }
    int countt=0;
    int Weightarr[Binary.size()];//array to store corresponding weights

    for(int i=(Binary.size()-1); i>=0; i--)
    {

        Weightarr[countt]=i;
        countt++;

    }
    int sum=0;
    countt=0;
    while(!Binary.empty())
    {
        sum+=Binary.top()*power(2,Weightarr[countt]);
        Binary.pop();
        countt++;
    }

    return sum;


}

int main()
{
    int test1=11000101,test2=10101010,test3=11111111,test4=10000000,test5=1111100000.;
    cout<<BinaryToDecimal(test1)<<endl;
    cout<<BinaryToDecimal(test2)<<endl;
    cout<<BinaryToDecimal(test3)<<endl;
    cout<<BinaryToDecimal(test4)<<endl;
    cout<<BinaryToDecimal(test5)<<endl;




    return 0;
}
