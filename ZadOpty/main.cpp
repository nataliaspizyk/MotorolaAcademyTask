//tasking code: UNCLE McDONALD NEEDS YOUR HELP
//Author Natalia Spi¿yk
#include <iostream>
#include<string>
using namespace std;


int main()
{
    string run="";
    cout << "If you want to run the program, type: RUN" << endl;
    cin>>run;
    if(run=="RUN")
    {
        int fence=0;
        cout<<"fence length(integer number): ";
        cin>>fence;
        if(fence>2)
        {
            int x=fence/4;
            /*
            calculations
            x(length-2x)
            lengthX-2x^2
            derivative of a function->length-4x
            length=4x
            length/4=x
            */
            if(x==0)x=1;
            int y=fence-(2*x);
            cout<<"x: "<<x<<endl;
            cout<<"y: "<<y<<endl;
            cout<<"optimum area: "<<x*y<<endl;

        }
        else{ cout<<"The fence length must not have a negative value and should be greater than 2 !";}

    }
    else{cout<<"Bye!"<<endl;}
    return 0;
}
