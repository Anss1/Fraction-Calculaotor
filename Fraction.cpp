#include "Fraction.h"

Fraction::Fraction()
{
    num=1;
    denom=1;
    frac +='0';
}

Fraction::Fraction(int x,int y)
{
    num=x;
    denom=y;
    frac = to_string(x);
    frac+= '/';
    frac += to_string(y);
}
Fraction::Fraction(string str)
{
    frac=str;
    string s1,s2;
    bool val=true;
    for(unsigned int i=0; i<str.size(); i++)
    {
        if(str[i]!='/'&&val)
            s1+=str[i];
        else if(val)
            val=false;
        else
            s2+=str[i];
    }
    num= stoi(s1);
    denom= stoi(s2);
}

Fraction Fraction::operator+(Fraction f)
{
    Fraction temp;
    temp.num = num*f.denom + f.num*denom;
    temp.denom = f.denom * denom;
    temp.frac = to_string(temp.num);
    temp.frac += '/';
    temp.frac += to_string(temp.denom);
    return temp;
}
Fraction Fraction::operator-(Fraction f)
{
    Fraction temp;
    temp.num = num*f.denom - f.num*denom;
    temp.denom = f.denom * denom;
    temp.frac = to_string(temp.num);
    temp.frac += '/';
    temp.frac += to_string(temp.denom);
    return temp;
}
Fraction Fraction::operator*(Fraction f)
{
    Fraction temp;
    temp.num = num * f.num;
    temp.denom = f.denom * denom;
    temp.frac = to_string(temp.num);
    temp.frac += '/';
    temp.frac += to_string(temp.denom);
    return temp;
}
Fraction Fraction::operator/(Fraction f)
{
    Fraction temp;
    temp.num = num * f.denom;
    temp.denom = denom * f.num;
    temp.frac = to_string(temp.num);
    temp.frac += '/';
    temp.frac += to_string(temp.denom);
    return temp;
}
bool Fraction::operator>(Fraction f)
{
    float x,y;
    x= num/denom;
    y= f.num/f.denom;
    return (x>y? true : false);
}
bool Fraction::operator<(Fraction f)
{
    float x,y;
    x= num/denom;
    y= f.num/f.denom;
    return (x<y? true : false);
}
bool Fraction::operator>=(Fraction f)
{
    float x,y;
    x= num/denom;
    y= f.num/f.denom;
    return (x>=y? true : false);
}
bool Fraction::operator<=(Fraction f)
{
    float x,y;
    x= num/denom;
    y= f.num/f.denom;
    return (x<=y? true : false);
}
bool Fraction::operator==(Fraction f)
{
    float x,y;
    x= num/denom;
    y= f.num/f.denom;
    return (x==y? true : false);
}

void Fraction::reduction()
{
    float x;
    if(num <= denom)
    {
        x = denom/num;
        if(ceil(x)==floor(x))
        {
            num /= num;
            denom = x;
            frac = to_string(num);
            frac += '/';
            frac += to_string(denom);
        }
    }
    else
    {
        x = num/denom;
        if(ceil(x)==floor(x))
        {
            num = x;
            denom /= denom;
            frac = to_string(num);
            frac += '/';
            frac += to_string(denom);
        }
    }
}

istream& operator>>(istream& in,Fraction& f)
{
    cout<<"Enter the Fraction : ";
    in>>f.frac;
    string s1,s2;
    bool val=true;
    for(unsigned int i=0; i<f.frac.size(); i++)
    {
        if(f.frac[i]!='/'&&val)
            s1+=f.frac[i];
        else if(val)
            val=false;
        else
            s2+=f.frac[i];
    }
    f.num= stoi(s1);
    f.denom= stoi(s2);
    return in;
}

ostream& operator<<(ostream& out,Fraction& f)
{
    out<<f.frac;
    return out;
}
