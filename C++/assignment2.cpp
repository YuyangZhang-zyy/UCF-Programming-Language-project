#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
using namespace std;

//Problem3
void alphabetNumber()
{
    int a = 0;
    char ch;
	ifstream ip;
	ip.open("OUT.txt");

	while(!ip.eof())
	{
		ip.get(ch);
		if(isalpha(ch))
			a++;
	}

	cout<<"Number of alphabets: "<<a;
	ip.close();
}

//Problem4
void blankspaceNumber()
{
    int a = 0;
    char ch;
	ifstream ip;
	ip.open("OUT.txt");

	while(!ip.eof())
	{
		ip.get(ch);
		if(ch == ' ')
			a++;
	}

	cout<<"Number of blank spaces: "<<a;
	ip.close();
}

//Problem5
void wordsNumber()
{
    int a = 0;
    char temp[30];
	ifstream ip;
	ip.open("OUT.txt");

	while(!ip.eof())
	{
		ip>>temp;
		a++;
	}

	cout<<"Number of words: "<<a;
	ip.close();
}

//Problem6
void theNumber()
{
    int a = 0;
    char temp[30];
	ifstream ip;
	ip.open("STORY.txt");

	while(!ip.eof())
	{
		ip>>temp;
		if(strcmpi(temp,"the") == 0)
			a++;
	}

	cout<<"Number of the 'the': "<<a;
	ip.close();
}

//Problem7
void AlineNumber()
{
    char temp[100];
	int a = 0;
	ifstream ip;
	ip.open("STORY.txt");

	while(!ip.eof())
	{
		ip.getline(temp, 80);
		if(temp[0] != 'A')
			a++;
	}

	cout<<"Number of lines not starting with 'A': "<<a;
	ip.close();
}

//Prolem8
void copyupper()
{
    char ch;
	ifstream ip;
	ip.open("FIRST.txt");
	ofstream op;
	op.open("SECOND.txt");

	while(!ip.eof())
	{
		ip.get(ch);
		ch = toupper(ch);
		op<<ch;
	}

	ip.close();
	op.close();
}

//Problem9
void vowelwords()
{
    char temp[30];
	ifstream ip;
	ip.open("FIRST.TXT");
	ofstream op;
	op.open("SECOND.TXT");

	while(!ip.eof())
	{
		ip>>temp;
		if(temp[0] == 'a' || temp[0] == 'e' || temp[0] == 'i'|| temp[0] == 'o' || temp[0]=='u')
			op<<temp<<" ";
	}

	ip.close();
	op.close();
}

//Problem10
class EMPLOYEE
{
    int ENO;
    char ENAME[10];
public :
    void GETIT()
    {
        cin >> ENO;
        gets(ENAME);
    }
    void SHOWIT()
    {
        cout <<ENO << ENAME <<endl;
    }
};

void write()//write
{
    EMPLOYEE obj;
    ofstream op;
    op.open("EMPLOYEE.dat",ios::binary|ios::app);
    obj.GETIT();
    op.write((char*)&obj, sizeof(obj));
    op.close();
}

void display()//display
{
    EMPLOYEE obj;
    ifstream ip;
    ip.open("EMPLOYEE.dat",ios::binary);
    while(ip.read((char*)&obj, sizeof(obj)))
        obj.SHOWIT();
    ip.close();
}

//Problem12
class computer
{
    char chiptype[10];
    int speed;
public:
    void getdetails()
    {
        gets(chiptype);
        cin>>speed;
    }
    void showdetails()
    {
        cout << "Chip" << chiptype << " Speed = " << speed;
    }
};

void readfile()
{
    computer obj;
    int n = 0;
    ifstream ip;
    ip.open("SHIP.DAT",ios::binary);
    while(ip.read((char*)&obj, sizeof(obj)))
    {
        obj.showdetails();
        n++;
    }
    ip.close();
    cout<<"Number of records present in the file: "<<n;
}

//Problem13
class Student
{
    char S_Admno[10];    //Admission number of student
    char S_Name[30];       //Name of student
    int Percentage;            //Marks Percentage of student
public:
    void EnterData()
    {
        gets(S_Admno);
        gets(S_Name);
        cin>>Percentage;
    }
    void DisplayData()
    {
        cout << setw(12) << S_Admno;
        cout << setw(32) << S_Name;
        cout<<setw(3) << Percentage << endl;
    }
    int ReturnPercentage()
    {
        return Percentage;
    }
};

void displayRecord()
{
    Student obj;
    ifstream ip;
    ip.open("STUDENT.DAT",ios::binary);
    while(ip.read((char*)&obj, sizeof(obj)))
    {
        if(obj.ReturnPercentage() > 75)
            obj.DisplayData();
    }
    ip.close();
}

//Problem14
class Employee
{
    int Eno;
    char Ename[20];
public:
    //Function to count the total number of records
    int Countrec();
};

int Employee::Countrec()
{
    fstream File;
    File.open("EMP.DAT", ios::binary | ios::in);
    File.seekg(0, ios::end);//Statement 1
    int Bytes = File.tellg(); //Statement 2
    int Count = Bytes / sizeof(Employee);
    File.close();
    return Count;
}

//Problem15
class STUD
{
    int Rno;
    char Name[20];
public:
    void Enter()
    {
        cin >> Rno;
        gets(Name);
    }
    void Display()
    {
        cout << Rno << Name << endl;
    }
};

void Add()
{
    ofstream op;
    op.open("STUDENT.DAT", ios::out);
    STUD obj;
    obj.Enter();
    op.write((char*)&obj, sizeof(obj));
    op.close();
}

//Problem16
class Item
{
    int Ino;
    char Item[20];
public:
    //Function to search and display the content from a particular record number
    void Search(int);
    //Function to modify the content of a particular record number
    void Modify(int);
};

void Item::Search(int RecNo)
{
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in);
    File.seekp(RecNo, ios::cur); //Statement 1
    File.read((char*)this, sizeof(Item));
    cout << Ino << "==> " << Item << endl;
    File.close();
}

void Item::Modify(int RecNo)
{
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in | ios::out);
    cin>>Ino;
    cin.getline(Item, 20);
    File.seekg(RecNo, ios::cur); //Statement 2
    File.write((char*)this, sizeof(Item));
    File.close();
}

int main()
{
    //Problem1
    ofstream op1;
	op1.open("NOTES.TXT");
	for(int i = 1;i <= 100; i++)
		op1<<i<<endl;
	op1.close();

    //Problem2
	ofstream op2;
	op2.open("OUT.txt");
	char temp[300] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
	op2<<temp;
	op2.close();

	alphabetNumber();//Problem3
	blankspaceNumber();//Problem4
	wordsNumber();//Problem5
	theNumber();//Problem6
	AlineNumber();//Problem7
	copyupper();//Problem8
	vowelwords();//Problem9

	return 0;
}
