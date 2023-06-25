#include<iostream>
#include <cstring>
using namespace std;

//Problem1
class Student
{
private:
    int admno;
    char sname[20];
    float eng;
    float math;
    float science;
    float total;

    void ctotal()
    {
        total = eng + math + science;
    }

public:
    void Takedata(int a, char s[20], float e, float m, float sc)
    {
        admno = a;
        strcpy(sname, s);
        eng = e;
        math = m;
        science = sc;
        ctotal();
    }

    void Showdata()
    {
        cout<<"admno is "<<admno<<endl;
        cout<<"sname is "<<sname<<endl;
        cout<<"eng is "<<eng<<endl;
        cout<<"math is "<<math<<endl;
        cout<<"science is "<<science<<endl;
        cout<<"total is "<<total<<endl;
    }
};

//Problem2
class Batsman
{
private:
    int bcode[4];
    char bname[20];
    int innings;
    int notout;
    int runs;
    float batavg;

    void calcavg()
    {
        batavg = runs / (innings - notout);
    }

public:
    void readdata(int bc[4], char bn[20], int in, int no, int r)
    {
        for(int i = 0; i < 4; i++)
            bcode[i] = bc[i];
        strcpy(bname, bn);
        innings = in;
        notout = no;
        runs = r;
        calcavg();
    }

    void displaydata()
    {
        cout<<"bcode is "<<bcode<<endl;
        cout<<"bname is "<<bname<<endl;
        cout<<"innings is "<<innings<<endl;
        cout<<"notout is "<<notout<<endl;
        cout<<"runs is "<<runs<<endl;
        cout<<"batavg is "<<batavg<<endl;
    }
};


//Problem3
class Test
{
private:
    int testCode;
    string description;
    int noCandidates;
    int centerReqd;

    float calCNTR()
    {
        return noCandidates / 100 + 1;
    }

public:
    void SCHEDULE()
    {
        cout << "Input test code: ";
        cin >> testCode;
        cout << "Input Description: ";
        cin >> description;
        cout << "Input no candidate: ";
        cin >> noCandidates;
        centerReqd = calCNTR();
    }

    void DISPTEST()
    {
        cout<<"test code is "<<testCode<<endl;
        cout<<"Description is "<<description<<endl;
        cout<<"no candidate is "<<noCandidates<<endl;
        cout<<"number of centers required is "<<centerReqd<<endl;
    }
};

//Problem4
class Flights
{
private:
    int flightN;
    string destination;
    float distance;
    float fuel;

    void calFUEL()
    {
        if(distance <= 1000)
            fuel = 500;
        else if(distance <= 2000 && distance > 1000)
            fuel = 1100;
        else if(distance > 2000)
            fuel = 2200;
    }

public:
    void FEEDINFO()
    {
        cout << "Input flight number : ";
        cin >> flightN;
        cout << "Input Destination: ";
        cin >> destination;
        cout << "Input Distance: ";
        cin >> distance;
        calFUEL();
    }

    void SHOWINFO()
    {
        cout<<"Flight number is "<<flightN<<endl;
        cout<<"Destination is "<<destination<<endl;
        cout<<"Distance is "<<distance<<endl;
        cout<<"Fuel is "<<fuel<<endl;
    }
};

//Problem5
class Book
{
private:
    int bookNO;
    char bookTITLE[20];
    float price;

    float totalCOST(int n)
    {
        return price * n;
    }

public:
    void INPUT()
    {
        cout << "Input book NO: ";
        cin >> bookNO;
        cout << "Input book title: ";
        cin >> bookTITLE;
        cout << "Input book price: ";
        cin >> price;
    }

    void PURCHASE()
    {
        int n;
        cout << "Input book NO: ";
        cin >> n;
        cout<<"Total cost is: "<<totalCOST(n)<<endl;
    }
};

//Problem6
class REPORT
{
private:
    char adno[4];
    char name[20];
    float marks[5];
    float average;

    void GETAVG()
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];
        average = sum / 5;
    }

public:
    void READINFO()
    {
        cout << "Input admission number: ";
        cin >> adno;
        cout << "Input name: ";
        cin >> name;
        for(int i = 0; i < 5; i++)
        {
            cout << "Input marks: ";
            cin >> marks[i];
        }
        GETAVG();
    }

    void DISPLAYINFO()
    {
        cout<<"Admission number is: "<<adno<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Marks are: ";
        for(int i = 0; i < 5; i++)
            cout<<marks[i]<<endl;
        cout<<"Average is: "<<average<<endl;
    }
};

//Problem7
class Rectangle
{
private:
    float length;
    float width;

public:

    void setlength(float l)
    {
        length = l;
    }

    void setwidth(float w)
    {
        width = w;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }

    float area()
    {
        return length * width;
    }

    void show()
    {
        cout<<"Rectangle length is: "<<length<<endl;
        cout<<"Rectangle width is: "<<width<<endl;
        cout<<"Rectangle area is: "<<area()<<endl;
        cout<<"Rectangle perimeter is: "<<perimeter()<<endl;
    }

    int sameArea(Rectangle r)
    {
        if(area() == r.area())
            return 1;
        return 0;
    }
};

int main()
{
    Rectangle r1;
    r1.setlength(5);
    r1.setwidth(2.5);
    r1.show();

    Rectangle r2;
    r2.setlength(5);
    r2.setwidth(18.9);
    r2.show();

    if(r1.sameArea(r2))
        cout<<"r1 has same area with r2\n";
    else
        cout<<"r1 has different area with r2\n";

    r1.setlength(15);
    r1.setwidth(6.3);

    if(r1.sameArea(r2))
        cout<<"r1 has same area with r2\n"<<endl;
    else
        cout<<"r1 has different area with r2\n"<<endl;

    return 0;
}


//Problem8
class Complex
{
private:
    float real;
    float imag;

public:
    void setN(float r, float i)
    {
        real = r;
        imag = i;
    }

    void disp()
    {
        cout<<"real number is: "<<real<<endl;
        cout<<"imaginary number is: "<<imag<<endl;
    }

    Complex sum(Complex a)
    {
        Complex n;
        n.real = real + a.real;
        n.imag = imag + a.imag;
        return n;
    }
};

int main()
{
    Complex c1;
    Complex c2;
    Complex c3;

    c1.setN(1.1, 2.2);
    c2.setN(3.3, 4.4);
    c3 = c1.sum(c2);

    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}


//Problem9
class Distance
{
private:
    int feet;
    float inches;

public:
    void setD(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void disp()
    {
        cout<<"Feet is: "<<feet<<endl;
        cout<<"Inches is: "<<inches<<endl;
    }
    Distance add(Distance d)
    {
        Distance n;
        n.feet = feet + d.feet;
        n.inches = inches + d.inches;
        return n;
    }
};

int main()
{
    Distance d1;
    Distance d2;
    Distance d3;

    d1.setD(1, 2.2);
    d2.setD(3, 4.4);
    d3 = d1.add(d2);

    d1.disp();
    d2.disp();
    d3.disp();

    return 0;
}


//Problem10
class Time
{
private:
    int hours;
    int minutes;

public:
    void settime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void showtime()
    {
        cout<<"Hours is: "<<hours<<endl;
        cout<<"Minutes is: "<<minutes<<endl;
    }
    Time sum(Time t)
    {
        Time n;
        n.hours = hours + t.hours;
        n.minutes = minutes + t.minutes;
        return n;
    }
};

int main()
{
    Time t1;
    Time t2;
    Time t3;

    t1.settime(1, 27);
    t2.settime(3, 31);
    t3 = t1.sum(t2);

    t1.showtime();
    t2.showtime();
    t3.showtime();

    return 0;
}
