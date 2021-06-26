#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Address{
	protected:
		int house;
	char city[20],state[20]; 
static char inst[6];	
};
char Address::inst[]="PIET";
class Student:public Address{
	protected:
		int age,roll,p,c,m,h,e,total;
		float avg;
		char grade[5];
		char name[20],email[20],pass[20];
	public:
		void edit()
		{
			while(1)
			{
			int ch;
			cout<<"\n\n______________________UPDATION MENU_______________________\n";
			cout<<"\n1. Name";
			cout<<"\n2. Age";
			cout<<"\n3. Roll-no.";
			cout<<"\n4. E-Mail";
			cout<<"\n5. Password";
			cout<<"\n6. House-No.";
			cout<<"\n7. City";
			cout<<"\n8. State";
			cout<<"\n9. Marks";
			cout<<"\n10.Exit\n";
			cout<<"\n----------------------------------------------------------";
			cout<<"\nEnter your choice: ";
			cin>>ch;
			switch(ch)
			{
				case 1:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new name: ";
						cin>>name;
						cout<<"Updation Done...";
						break;
				case 2:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new age: ";
						cin>>age;
						cout<<"Updation Done...";
						break;
				case 3:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new roll-no: ";
						cin>>roll;
						cout<<"Updation Done...";
						break;
				case 4:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new e-mail: ";
						cin>>email;
						cout<<"Updation Done...";
						break;
				case 5:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new password: ";
						cin>>pass;
						cout<<"Updation Done...";
						break;
				case 6:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new house-no: ";
						cin>>house;
						cout<<"Updation Done...";
						break;
				case 7:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new city: ";
						cin>>city;
						cout<<"Updation Done...";
						break;
				case 8:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new state: ";
						cin>>state;
						cout<<"Updation Done...";
						break;
				case 9:
					{
						int che;
						cout<<"\n----------------------------------------------------------";
						cout<<"\n\n___________________MARKS UPDATION MENU____________________\n";
						cout<<"\n1. English";
						cout<<"\n2. Hindi";
						cout<<"\n3. Maths";
						cout<<"\n4. Physics";
						cout<<"\n5. Chemistry";
						cout<<"\n6. Exit\n";
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter your choice: ";
						cin>>che;
						switch(che)
						{
							case 1:
									cout<<"\n----------------------------------------------------------";
									cout<<"\nEnter new marks in english: ";
									cin>>e;
									cout<<"Updation Done...";
									break;
							case 2:
									cout<<"\n----------------------------------------------------------";
									cout<<"\nEnter new marks in hindi: ";
									cin>>h;
									cout<<"Updation Done...";
									break;
							case 3:
									cout<<"\n----------------------------------------------------------";
									cout<<"\nEnter new marks in maths: ";
									cin>>m;
									cout<<"Updation Done...";
									break;
							case 4:
									cout<<"\n----------------------------------------------------------";
									cout<<"\nEnter new marks in physics: ";
									cin>>p;
									cout<<"Updation Done...";
									break;
							case 5:
									cout<<"\n----------------------------------------------------------";
									cout<<"\nEnter new marks in chemistry: ";
									cin>>c;
									cout<<"Updation Done...";
									break;
							case 6:
									break;
							default:	
									cout<<"\n----------------------------------------------------------";
									cout<<"\nInvalid choice...";
									break;
						}
							total=h+e+m+p+c;
							avg=(float)total/5;
							if(avg>=90 && avg<=100)
							strcpy(grade,"A+");
							else if(avg>=80 && avg<90)
							strcpy(grade,"A");
							else if(avg>=70 && avg<80)
							strcpy(grade,"A-");
							else if(avg>=60 && avg<70)
							strcpy(grade,"B+");
							else if(avg>=50 && avg<60)
							strcpy(grade,"B");
							else if(avg>=40 && avg<50)
							strcpy(grade,"B-");
							else
							strcpy(grade,"Fail");
							break;
					
					}					
				case 10:
						break;
				default:
						cout<<"\n----------------------------------------------------------";
						cout<<"Invalid choice...";
						break;				
			}
			if(ch==10)
			break;
		}
		}
		void get_student();
		void display_marksheet();
		void display_student();
		void display_stdmail();
		int roll_check()
		{
			return roll;
		}
		int std_check()
		{
			char str[20],p[20];
			int ch,i;
			cout<<"----------------------------------------------------------";			
			cout<<"\nEnter the e-mail id: ";
			cin>>str;
			cout<<"Enter the password:  ";
			while(1)
				{
					ch=getch();
					if(ch==13)
					break;
					p[i]=ch;
					printf("*");
					i++;
				}
			cout<<"\n----------------------------------------------------------\n";
			p[i]='\0';
			if((strcmp(str,email)==0)&&strcmp(p,pass)==0)
			return 0;
			else
			return 1;
		}
};
class Employee:public Address{
	protected:
		int basic,gross,itax,net,emp_id;
		int ta,da,hra,ma;
		char name[20],dsg[20],email_id[20],password[20];
	public:
		void edit()
		{
			while(1)
			{
			int ch;
			cout<<"\n\n______________________UPDATION MENU_______________________\n";
			cout<<"\n1. Name";
			cout<<"\n2. Employee_Id";
			cout<<"\n3. Basic Salary";
			cout<<"\n4. E-Mail";
			cout<<"\n5. Password";
			cout<<"\n6. House-No.";
			cout<<"\n7. City";
			cout<<"\n8. State";
			cout<<"\n9. Exit\n";
			cout<<"\n----------------------------------------------------------";
			cout<<"\nEnter your choice: ";
			cin>>ch;
			switch(ch)
			{
				case 1:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new name: ";
						cin>>name;
						cout<<"Updation Done...";
						break;
				case 2:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new employee_id: ";
						cin>>emp_id;
						cout<<"Updation Done...";
						break;
				case 3:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new basic salary: ";
						cin>>basic;
						calculate_salary();
						cout<<"Updation Done...";
						break;
				case 4:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new e-mail: ";
						cin>>email_id;
						cout<<"Updation Done...";
						break;
				case 5:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new password: ";
						cin>>password;
						cout<<"Updation Done...";
						break;
				case 6:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new house-no: ";
						cin>>house;
						cout<<"Updation Done...";
						break;
				case 7:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new city: ";
						cin>>city;
						cout<<"Updation Done...";
						break;
				case 8:
						cout<<"\n----------------------------------------------------------";
						cout<<"\nEnter new state: ";
						cin>>state;
						cout<<"Updation Done...";
						break;
				case 9:
						break;
				default:
						cout<<"\n----------------------------------------------------------";
						cout<<"Invalid choice...";
						break;				
			}
			if(ch==9)
			break;
		}
				}
		void get_employee();
		void display_employee();
		void display_empmail();
		void display_slip();
		void calculate_salary();
		int emp()
		{
			return emp_id;
		}
		int employee_check()
		{
			char str[20],p[20];
			int ch,i;
			cout<<"----------------------------------------------------------";
			cout<<"\nEnter the e-mail id: ";
			cin>>str;
			cout<<"Enter the password:  ";
				while(1)
				{
					ch=getch();
					if(ch==13)
					break;
					p[i]=ch;
					printf("*");
					i++;
				}
			cout<<"\n----------------------------------------------------------\n";
			p[i]='\0';
			if((strcmp(str,email_id)==0)&&strcmp(p,password)==0)
			return 0;
			else
			return 1;
		}
};
void Student::get_student()
{
	cout<<"\nEnter the name of the student: ";
	fflush(stdin);
	cin.get(name,20);
	cout<<"Enter the age: ";
	cin>>age;
	cout<<"Enter the roll number: ";
	cin>>roll;
	cout<<"\n----------------------------------------------------------";
	cout<<"\nEnter the e-mail id: ";
	fflush(stdin);
	cin.get(email,20);
	cout<<"Enter the password: ";
	fflush(stdin);
	cin.get(pass,20);
	cout<<"\n----------------------------------------------------------";
	cout<<"\nEnter the house number: ";
	cin>>house;
	cout<<"Enter the city name: ";
	fflush(stdin);
	cin.get(city,20);
	cout<<"Enter the state name: ";
	fflush(stdin);
	cin.get(state,20);
	cout<<"\n----------------------------------------------------------";
	cout<<"\nEnter the marks in hindi: ";
	cin>>h;
	cout<<"Enter the marks in english: ";
	cin>>e;
	cout<<"Enter the marks in maths:";
	cin>>m;
	cout<<"Enter the marks in physics: ";
	cin>>p;
	cout<<"Enter the marks in chemistry: ";
	cin>>c;
	total=h+e+m+p+c;
	avg=(float)total/5;
	if(avg>=90 && avg<=100)
	strcpy(grade,"A+");
	else if(avg>=80 && avg<90)
	strcpy(grade,"A");
	else if(avg>=70 && avg<80)
	strcpy(grade,"A-");
	else if(avg>=60 && avg<70)
	strcpy(grade,"B+");
	else if(avg>=50 && avg<60)
	strcpy(grade,"B");
	else if(avg>=40 && avg<50)
	strcpy(grade,"B-");
	else
	strcpy(grade,"Fail");
}
void Student::display_student()
{
	cout<<endl<<name<<"\t"<<roll<<"\t"<<age<<"\t"<<total<<"\t"<<avg<<"\t"<<grade<<"\t"<<inst<<"\t"<<house<<"\t"<<city<<"\t"<<state;
}
void Student::display_stdmail()
{
	cout<<endl<<name<<"\t"<<roll<<"\t"<<email<<"\t\t"<<pass;
}
void Student::display_marksheet()
{
	
	cout<<"\n\n_______________>>>MARKSHEET<<<____________________________";
	cout<<"\nName               :       "<<name;
	cout<<"\nAge                :       "<<age;
	cout<<"\nRoll-No.:          :       "<<roll;
	cout<<"\n----------------------------------------------------------";
	cout<<"\nH-No.              :       "<<house;
	cout<<"\nCity               :       "<<city;
	cout<<"\nState              :       "<<state;
	cout<<"\n----------------------------------------------------------";
	cout<<"\nPhy\tChe\tMath\tHin\tEng";
	cout<<endl<<p<<"\t"<<c<<"\t"<<m<<"\t"<<h<<"\t"<<e;
	cout<<"\n----------------------------------------------------------";
	cout<<"\nTotal              :       "<<total;
	cout<<"\nGrade              :       "<<grade;
	cout<<"\nAvg.               :       "<<avg;
}
void Employee::get_employee()
    {
        cout<<"\nEnter the name of the employee: ";
        fflush(stdin);
        cin.get(name,20);
        cout<<"Enter the employee id: ";
        cin>>emp_id;
        cout<<"Enter the basic salary: ";
        cin>>basic;
    	cout<<"----------------------------------------------------------";
        cout<<"\nEnter the e-mail id: ";
		fflush(stdin);
		cin.get(email_id,20);
		 cout<<"Enter the password: ";
		fflush(stdin);
		cin.get(password,20);
		cout<<"----------------------------------------------------------";
		cout<<"\nEnter the house number: ";
	    cin>>house;
		cout<<"Enter the city name: ";
		fflush(stdin);
		cin.get(city,20);
		cout<<"Enter the state name: ";
		fflush(stdin);
		cin.get(state,20);
		system("cls");
    }
void Employee::calculate_salary()
    {
        if(basic>=20000)
        {
           ta=basic*7/100;
           da=basic*8/100;
           hra=basic*9/100;
           ma=1500;
           itax=basic*5/100;
        }
        else{
            ta=basic*3/100;
           da=basic*4/100;
           hra=basic*5/100;
           ma=500;
           itax=0;
        }
        gross=basic+ta+da+hra+ma;
        net=gross-itax;
}
void Employee::display_slip()
    {
        cout<<"\n\n____________________>>> SALARY SLIP <<<___________________"<<endl;
        cout<<"\nEmployee Id          :   "<<emp_id<<endl;
        cout<<"\nEmployee Name        :  "<<name<<endl;
        cout<<"\nBasic Salary         :  "<<basic<<endl;
		cout<<"\n__________________________________________________________"<<endl;
        cout<<"\nTA\tDA\tHRA\tMA";
        cout<<"\n";
        cout<<ta<<"\t"<<da<<"\t"<<hra<<"\t"<<ma<<endl;
		cout<<"\n__________________________________________________________"<<endl;
        cout<<"\nGross Salary       :   "<<gross<<endl;
        cout<<"\nIncome Tax         :   "<<itax<<endl;
        cout<<"\nNet Salary         :   "<<net<<endl;
    }
void Employee::display_employee()
    {
        cout<<endl<<name<<"\t"<<emp_id<<"\t"<<basic<<"\t"<<gross<<"\t"<<itax<<"\t"<<net<<"\t"<<inst<<"\t"<<house<<"\t"<<city<<"\t"<<state;
    }
void Employee::display_empmail()
    {
        cout<<endl<<name<<"\t"<<emp_id<<"\t\t"<<email_id<<"\t\t"<<password;
    }
int admin();
void admin_menu();
void employee_login();
void employee_menu();
void create_employee();
void display_employee();
void display_empmail();
void delete_employee();
void edit_employee();
void search_employee();
void student_login();
void student_menu();
void create_student();
void display_student();
void display_stdmail();
void delete_student();
void edit_student();
void search_student();
int main()
{
	int ch;
	while(1)
	{	
		cout<<"\n\n______Panipat Instiute of Engineering and Technology______\n";
		cout<<"\n1. Admin Login";
		cout<<"\n2. Employee Login";
		cout<<"\n3. Student Login";
		cout<<"\n4. Exit\n";
		cout<<"\n----------------------------------------------------------";
		cout<<"\nEnter choice: ";
		cin>>ch;
		cout<<"\n----------------------------------------------------------";
		switch(ch)
		{
			case 1:
				if(admin()==0)
				{
				system("cls");
				admin_menu();
				}
				else
				{
				cout<<"\n----------------------------------------------------------";
				cout<<"\nInvalid e-mail id or password";
				cout<<"\n----------------------------------------------------------";
				}
				break;
			case 2:
				employee_login();
				break;
			case 3:
				student_login();
				break;
			case 4:
				cout<<"\n---->>>>Thanks For Using Our Services<<<<----";
				exit(0);				
			default:
		cout<<"\nInvalid Choice...";
		cout<<"\n----------------------------------------------------------";
		break;
		}
	}
}
int admin()
{
	char str[20],p[20];
	int ch,i;
	char admin_name[]="Gagan Sharma";
	char id[]="gagan@gmail.com";
	char password[]="7015335614";
	cout<<"\nEnter the admin e-mail id: ";
	fflush(stdin);
	cin.get(str,20);
	cout<<"Enter the admin password : ";
	while(1)
				{
					ch=getch();
					if(ch==13)
					break;
					p[i]=ch;
					printf("*");
					i++;
				}
			p[i]='\0';
	if((strcmp(str,id)==0)&&(strcmp(p,password)==0))
	return 0;
	else
	return 1;
}

void admin_menu()
{
	int ch;
	system("cls");
	while(1)
	{
		cout<<"\n\n____________________>>>>Admin Menu<<<<____________________\n";
		cout<<"\n1. Add Employee";
		cout<<"\n2. Display Employee Details";
		cout<<"\n3. Display Employee E-mail Details";
		cout<<"\n4. Delete Employee";
		cout<<"\n5. Edit Employee Details";
		cout<<"\n6. Search Employee";
		cout<<"\n7. Exit\n";
		cout<<"\n----------------------------------------------------------";
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n----------------------------------------------------------";
				create_employee();
				cout<<"\n----------------------------------------------------------";
				break;
			case 2:
				cout<<"\n------------------------------------------------------------------------------";
				display_employee();
				cout<<"\n------------------------------------------------------------------------------";
				break;
			case 3:
				cout<<"\n----------------------------------------------------------";
				display_empmail();
				cout<<"\n----------------------------------------------------------";
				break;				
			case 4:
				cout<<"\n----------------------------------------------------------";
				delete_employee();
				cout<<"\n----------------------------------------------------------";
				break;
			case 5:
				cout<<"\n----------------------------------------------------------";
				edit_employee();
				cout<<"\n----------------------------------------------------------";
				break;
			case 6:
				cout<<"\n----------------------------------------------------------";
				search_employee();
				cout<<"\n----------------------------------------------------------";
				break;
			case 7:
				cout<<"\n----------------------------------------------------------";
				break;
			default:
				cout<<"\nInvalid Choice...";
				cout<<"\n----------------------------------------------------------";
				break;				
		}
		if(ch==7)
		break;
	}
}
void create_employee()
{
	ofstream file;
	file.open("inst.txt",ios::binary|ios::app|ios::out);
	Employee e;
	e.get_employee();
	e.calculate_salary();
	file.seekp(0,ios::end);
	file.write((char*)&e,sizeof(e));
	file.close();
}
void display_employee()
{
	Employee e;
	ifstream file;
	file.open("inst.txt",ios::binary|ios::in);
	if(file==NULL)
	printf("\nNo Record Available...");
	else
	{
		cout<<"\nName\tId\tBasic\tGross\tItax\tNet\tInst.\tH-No.\tCity\tState\n";
		while(file.read((char*)&e,sizeof(e)))
		{
			e.display_employee();
		}
		file.close();
	}
}
void display_empmail()
{
	Employee e;
	ifstream file;
	file.open("inst.txt",ios::binary|ios::in);
	if(file==NULL)
	printf("\nNo Record Available...");
	else
	{
		cout<<"\nName\tEmployee-Id\tE-Mail\t\t\tPassword\n";
		while(file.read((char*)&e,sizeof(e)))
		{
			e.display_empmail();
		}
		file.close();
	}
}
void delete_employee()
{
	int f,num;
	Employee e;
	ifstream file;
	file.open("inst.txt",ios::binary|ios::in);
	ofstream temp;
	temp.open("temp1.txt",ios::out);
	if(file==NULL)
	cout<<"\nNo Information to Delete...";   
	else
	{
		cout<<"\nEnter the employee_id to delete: ";
		cin>>num;
		f=0;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num!=e.emp())
			{
				f=1;
				temp.seekp(0,ios::end);
				temp.write((char*)&e,sizeof(e));
			}
		}
		file.close();
		temp.close();
		remove("inst.txt");
		rename("temp1.txt","inst.txt");
		cout<<"\nDeletion Done...";
	}
	if(f==0)
	cout<<"\nInvalid Employee_Id...";
}
void edit_employee()
{
	fstream file;
	Employee e;
	file.open("inst.txt",ios::binary|ios::in|ios::out);
	if(file==NULL)
	cout<<"\nNo Record to Edit...";
	else
	{
		int num,f=0;
		cout<<"\nEnter the employee-id to edit: ";
		cin>>num;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num==e.emp())
			{
				f=1;
				e.edit();
				file.seekp(-sizeof(e),ios::cur);
				file.write((char*)&e,sizeof(e));
			}
		}
		file.close();
		if(f==0)
		cout<<"\nInvalid Employee id...";
	}
}
void search_employee()
{
	Employee e;
	ifstream file;
	file.open("inst.txt",ios::binary|ios::in);
	if(file==NULL)
	cout<<"\nNo Record to Search...";
	else
	{
		int num,f=0;
		cout<<"\nEnter the employee id: ";
		cin>>num;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num==e.emp())
			{
				f=1;
				e.display_slip();
			}
		}
		file.close();
		if(f==0)
		cout<<"\nInvalid Employee-id...";
	}
}
void employee_login()
{
	Employee e;
	ifstream file;
	file.open("inst.txt",ios::binary|ios::in);
	if(file==NULL)
	{
	cout<<"\nNo Such Employee Exist...";
	cout<<"\n----------------------------------------------------------";
	}
    else
	{
		int num;
		cout<<"\nEnter the employee-id: ";
		cin>>num;
		int f=0;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num==e.emp())
			{
				f=1;
				if(e.employee_check()==0)
				{
					employee_menu();
				}
				else
				cout<<"\nInvalid Mail Id or Password";
			}
		}
		if(f==0)
		cout<<"\nNo Such Employee Exist...";
		cout<<"\n----------------------------------------------------------";
		file.close();
	}
}
void employee_menu()
{
	int ch;
	while(1)
	{
		cout<<"\n\n______________>>>>Employee Menu<<<<_______________________\n";
		cout<<"\n1. Add Student";
		cout<<"\n2. Display Student Details";
		cout<<"\n3. Display Student E-mail Details";
		cout<<"\n4. Delete Student";
		cout<<"\n5. Edit Student Details";
		cout<<"\n6. Search Student";
		cout<<"\n7. Exit\n";
		cout<<"\n----------------------------------------------------------";
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n----------------------------------------------------------";
				create_student();
				cout<<"\n----------------------------------------------------------";
				break;
			case 2:
				cout<<"\n------------------------------------------------------------------------------";
				display_student();
				cout<<"\n------------------------------------------------------------------------------";
				break;
			case 3:
				cout<<"\n----------------------------------------------------------";
				display_stdmail();
				cout<<"\n----------------------------------------------------------";
				break;
			case 4:
				cout<<"\n----------------------------------------------------------";
				delete_student();
				cout<<"\n----------------------------------------------------------";
				break;
			case 5:
				cout<<"\n----------------------------------------------------------";
				edit_student();
				cout<<"\n----------------------------------------------------------";
				break;
			case 6:
				cout<<"\n----------------------------------------------------------";
				search_student();
				cout<<"\n----------------------------------------------------------";
				break;
			case 7:
					break;
			default:
			cout<<"\nInvalid Choice...";
			cout<<"\n----------------------------------------------------------";
			break;
		}
		if(ch==7)
		break;
	}
}
void create_student()
{
	ofstream file;
	file.open("inst_std.txt",ios::binary|ios::app|ios::out);
	Student s;
	s.get_student();
	file.seekp(0,ios::end);
	file.write((char*)&s,sizeof(s));
	file.close();
}
void display_student()
{
	Student s;
	ifstream file;
	file.open("inst_std.txt",ios::binary|ios::in);
	if(file==NULL)
	printf("\nNo Such Student Exist...");
	else
	{
		cout<<"\nName\tRoll\tAge\tTotal\tAvg.\tGrade\tInst.\tH-no.\tCity\tState\n";
		while(file.read((char*)&s,sizeof(s)))
		{
			s.display_student();
		}
		file.close();
	}
}
void display_stdmail()
{
	Student s;
	ifstream file;
	file.open("inst_std.txt",ios::binary|ios::in);
	if(file==NULL)
	printf("\nNo Such Student Exist...");
	else
	{
		cout<<"\nName\tRoll\tE-Mail\t\t\tPassword\n";
		while(file.read((char*)&s,sizeof(s)))
		{
			s.display_stdmail();
		}
		file.close();
	}
}
void delete_student()
{
	int f,num;
	Student e;
	ifstream file;
	file.open("inst_std.txt",ios::binary|ios::in);
	ofstream temp;
	temp.open("temp.txt",ios::out);
	if(file==NULL)
	cout<<"\nNo Information to Delete...";   
	else
	{
		cout<<"\nEnter the roll-number to delete: ";
		cin>>num;
		f=0;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num!=e.roll_check())
			{
				f=1;
				temp.seekp(0,ios::end);
				temp.write((char*)&e,sizeof(e));
			}
		}
		file.close();
		temp.close();
		remove("inst_std.txt");
		rename("temp.txt","inst_std.txt");
		cout<<"\nDeletion Done...";
	}
	if(f==0)
	cout<<"\nInvalid Roll-Number...";
}  
void edit_student()
{
	fstream file;
	Student e;
	file.open("inst_std.txt",ios::binary|ios::in|ios::out);
	if(file==NULL)
	cout<<"\nNo Record to Edit...";
	else
	{
		int num,f=0;
		cout<<"\nEnter the Roll-Number to edit: ";
		cin>>num;
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num==e.roll_check())
			{
				f=1;
				e.edit();
				file.seekp(-sizeof(e),ios::cur);
				file.write((char*)&e,sizeof(e));
			}
		}
		file.close();
		if(f==0)
		cout<<"\nInvalid Roll Number...";
	}
}
void search_student()
{
	Student e;
	ifstream file;
	file.open("inst_std.txt",ios::binary|ios::in);
	if(file==NULL)
	cout<<"\nNo Record to Search...";
	else
	{
		int num,f=0;
		cout<<"\nEnter the roll-number: ";
		cin>>num;
		cout<<"\n----------------------------------------------------------";
		while(file.read((char*)&e,sizeof(e)))
		{
			if(num==e.roll_check())
			{
				f=1;
				e.display_marksheet();
			}
		}
		file.close();
		if(f==0)
		cout<<"\nInvalid Roll-Number...";
}
}
void student_login()
{
	Student s;
	ifstream file;
	file.open("inst_std.txt",ios::binary|ios::in);
	if(file==NULL)
	{
	cout<<"\nNo Such Student Exist...";
	cout<<"\n----------------------------------------------------------";
	}
	else
	{
		int num;
		cout<<"\nEnter the roll-number: ";
		cin>>num;
		int f=0;
		while(file.read((char*)&s,sizeof(s)))
		{
			if(num==s.roll_check())
			{
				f=1;
				if(s.std_check()==0)
				{
					student_menu();
				}
				else
				cout<<"Invaid Mail Id or Password";
			}
		}
		if(f==0)
		cout<<"\nNo Such Student Exist...";
		cout<<"\n----------------------------------------------------------";
		file.close();
	}
}
void student_menu()
{
	int ch;
	while(1)
	{
		cout<<"\n\n______________________>>>>Student Menu<<<<________________\n";
		cout<<"\n1. Display Own Details";
		cout<<"\n2. Display All Result";
		cout<<"\n3. Exit\n";
		cout<<"\n----------------------------------------------------------";
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n----------------------------------------------------------";
				search_student();
				cout<<"\n----------------------------------------------------------";
				break;
			case 2:
				cout<<"\n------------------------------------------------------------------------------";
				display_student();
				cout<<"\n------------------------------------------------------------------------------";
				break;
			case 3:
				break;
			default:
		cout<<"\nInvalid Choice...";
		cout<<"\n----------------------------------------------------------";
		break;
		}
		if(ch==3)
		break;
	}
}

