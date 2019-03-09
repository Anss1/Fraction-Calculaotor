#include "FractionCalculator.h"

FractionCalculator::FractionCalculator() {}

void FractionCalculator::interface()
{
    short operation,x,op;
    Fraction f1,f2;
    while(1)
    {
        cin>>f1;
        system("cls");
        cout<<"\t\t\t\t\t\t  List of operation\n\n1- Addition.\n2- Subtraction.\n3- Multiplication.\n4- Dividing.\n5- Comparison.\n6- Fraction reduction.\n7- Exit.\n\nEnter number of operation : ";
        cin>>operation;
        if(operation==1)
        {
            cout<<"1- Enter second fraction.\n2- Use the last result.\n\nEnter the number of operation : ";
            cin>>x;
            system("cls");
            if(x==1)
            {
                cin>>f2;
                result = f1 + f2;
                cout<<"The result is : "<<result<<endl;
            }
            else
            {
                result = result + f1 ;
                cout<<"The result is : "<<result<<endl;
            }

        }
        else if(operation==2)
        {
            cout<<"1- Enter second fraction.\n2- Use the last result.\n\nEnter the number of operation : ";
            cin>>x;
            system("cls");
            if(x==1)
            {
                cin>>f2;
                result = f1 - f2;
                cout<<"The result is : "<<result<<endl;
            }
            else
            {
                result = result - f1 ;
                cout<<"The result is : "<<result<<endl;
            }
        }
        else if(operation==3)
        {
            cout<<"1- Enter second fraction.\n2- Use the last result.\n\nEnter the number of operation : ";
            cin>>x;
            system("cls");
            if(x==1)
            {
                cin>>f2;
                result = f1 * f2;
                cout<<"The result is : "<<result<<endl;
            }
            else
            {
                result = result * f1 ;
                cout<<"The result is : "<<result<<endl;
            }
        }
        else if(operation==4)
        {
            cout<<"1- Enter second fraction.\n2- Use the last result.\n\nEnter the number of operation : ";
            cin>>x;
            system("cls");
            if(x==1)
            {
                cin>>f2;
                result = f1 / f2;
                cout<<"The result is : "<<result<<endl;
            }
            else
            {
                result = result / f1 ;
                cout<<"The result is : "<<result<<endl;
            }
        }
        else if(operation==5)
        {
            cout<<"1- Enter second fraction.\n2- Use the last result.\n\nEnter the number of operation : ";
            cin>>x;
            system("cls");
            if(x==1)
            {
                cin>>f2;
            }
            else
                f2 = result;
            system("cls");
            cout<<"1- >\n2- >=\n3- <\n4- <=\n5- ==\n\nEnter the number of operation : ";
            cin>>op;
            if(op==1)
            {
                if(f1 > f2)
                    cout<<"True : "<<f1<<" is greater than "<<f2<<endl;
                else
                    cout<<"False : "<<f1<<" is not greater than "<<f2<<endl;
            }
            else if(op==2)
            {
                if(f1 >= f2)
                    cout<<"True : "<<f1<<" is greater or equal than "<<f2<<endl;
                else
                    cout<<"False : "<<f1<<" is not greater or equal than "<<f2<<endl;
            }
            else if(op==3)
            {
                if(f1 < f2)
                    cout<<"True : "<<f1<<" is lower than "<<f2<<endl;
                else
                    cout<<"False : "<<f1<<" is not lower than "<<f2<<endl;
            }
            else if(op==4)
            {
                if(f1 <= f2)
                    cout<<"True : "<<f1<<" is lower or equal than "<<f2<<endl;
                else
                    cout<<"False : "<<f1<<" is not lower or equal than "<<f2<<endl;
            }
            else if(op==5)
            {
                if(f1 == f2)
                    cout<<"True : "<<f1<<" is equal "<<f2<<endl;
                else
                    cout<<"False : "<<f1<<" is not equal "<<f2<<endl;
            }
        }
        else if(operation==6)
        {
            result.reduction();
            cout<<result<<endl;
        }
        else
        {
            cout<<"The final result is : "<<result<<endl;
            break;
        }
    }
}
