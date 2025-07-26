#include<iostream>
#include<iomanip>
using namespace std;
void BSCS();
struct bscs{
string A[6];
};
void BSCS(bscs obj,int size, int reges, string semester)
{
system("color 09");                          // for coolor change of Text 
int a,total=100,reg,marks[6];   //declared and initialization of variable and array in integer type 
int obtain =0,credits[6]={3,3,3,4,2,3},cred=0;
float gradePoints[6],perc, per[6],credit_hour[6],credit=0.0,gpa=0.0; 
double totalGradePoints;
string grade,name;

	cout<<"what is your name "<<endl;
	cin>>name;
	cout<<"Enter your Registration number"<<endl;
	cin>>reg;
	int total1=100*size;
	for(int i=0;i<size;i++)
	{
	cout<<"Enter your "<<obj.A[i]<<" obtain  marks"<<endl;
	cin>>marks[i];
	obtain=obtain+marks[i];   // stored marks of all subject in obtain 
	per[i]=(float)marks[i]/total*100; //find percentage of every subject mark
	perc=(float)obtain/total1*100;  // find percentage of  total subject marks 
	if(perc>=90)
	grade="A+";
	else if(perc>=80)
	grade="A";
	else if(perc>=70)
	grade="B";
	else if(perc>=60)
	grade="C";
	else if(perc>=50)
	grade="D";	
	else
	{
	grade="Fail";
	}
	if(marks[i]>=80)
	{             
	gradePoints[i]=4.0;	
	}
	else{
	gradePoints[i] = (float)marks[i]/80*4.0; // here i find Grde point for to find GPA
}
   	if(marks[i]<50)
   	{
   	gradePoints[i]=0.0;	
	}
    totalGradePoints += gradePoints[i];   // Add all subject grade point in Totalgradepoint
    credit_hour[i]=(float)gradePoints[i]*credits[i]; //here i find wieghtd_cradot hour
   	credit=credit+credit_hour[i];  // sum of weighte_cradit_hours 
   	cred=cred+credits[i];   //sum of cradit 
   	gpa=(float)credit/cred; //find GPA using total weightd-credit-hour and total cradit
}
system("cls");
	int total_Marks=100*size;
	cout<<"                                   "<<endl;
	cout<<"____________________________________________________________________________________________________________________________________________________________________"<<endl;
	cout<<"|                                                                                                                                                                   |"<<endl;
	cout<<"|"<<setw(60)<<"Result card"<<setw(104)<<"|"<<endl;
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
	cout<<"|Name:"<<setw(12)<<name<<setw(32)<<"Reg.No:"<<reges<<"-uobsac-"<<reg<<setw(100)<<"|"<<endl;
	cout<<"|Department:  BSCS "<<setw(36)<<"Semester: "<<semester<<setw(110)<<"|"<<endl;
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
//	system("color 06 ");
	cout<<"|"<<setw(10)<<"Subject"<<setw(19)<<"Obtain Marks"<<setw(19)<<"Total Marks"<<setw(19)<<"Percentage"<<setw(19)<<"Grade"<<setw(19)<<"Grade_Ponts"<<setw(19)<<"Credits"<<setw(20)<<"Weightd_Credits"<<setw(16)<<"GPA"<<setw(4)<<"|"<<endl;
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
	for(int i=0;i<size;i++)
{
	if(per[i]>=90)
	grade="A+";
	else if(per[i]>=80)
	{
	grade="A";
//   	system("color 2");
	}
	else if(per[i]>=70)
	grade="B";
	else if(per[i]>=60)
	grade="C";
	else if(per[i]>=50)
	grade="D";
	else
	{
	grade="Fail";	
	system("color 04");
	}
	
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
	cout<<"|"<<setw(14)<<obj.A[i]<<setw(17)<<marks[i]<<setw(17)<<total<<setw(17)<<per[i]<<"%"<<setw(17)<<grade<<setw(17)<<gradePoints[i]<<setw(17)<<credits[i]<<setw(20)<<credit_hour[i]<<setw(27)<<"|"<<endl;
}
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
	cout<<"|                                                                                                                                                                   |"<<endl;
	cout<<"|"<<setw(14)<<"TOTAL"<<setw(17)<<obtain<<setw(17)<<total_Marks<<setw(17)<<perc<<"%"<<setw(18)<<grade<<setw(17)<<totalGradePoints<<setw(17)<<cred<<setw(20)<<credit<<setw(20)<<gpa<<setw(6)<<"|"<<endl;
	cout<<"|                                                                                                                                                                   |"<<endl;
	cout<<"|___________________________________________________________________________________________________________________________________________________________________|"<<endl;
}

int main()
{
int s; 
cout<<"Welcome to BS Depatment"<<endl;
cout<<"                 "<<endl;
system("color 02");
cout<<"1 : BSCS i "<<endl;
cout<<"2 : BSCS ii "<<endl;
cout<<"3 : BSCS iii "<<endl;
cout<<"4 : BSCS iv "<<endl;
cout<<"5 : BSCS v  "<<endl;
cout<<"6 : BSCS vi "<<endl;
cout<<"                 "<<endl;
cout<<"Sellect your semester"<<endl;
cin>>s;
if(s==1){
	bscs obj1={"English","Math","ICT","Programing","Ideology","Physics"};
BSCS(obj1,6,2024,"I");

}
if(s==2)
{
bscs obj1={"Acounting","DLD","COAL","OOPS","Islamiat"};
BSCS(obj1,5,2023,"II");
}
if(s==3)
{
bscs obj1={"English_II","TOC","M_V_Calculas","D_S_Algurithm","Dis_Structure"};
BSCS(obj1,5,2023,"III");
}
if(s==4)
{
bscs obj1={"Analsis.o.Algotm","ODE","Statistics","Data_Base","Web_Designing"};
BSCS(obj1,5,2022,"IV");
}
if(s==5)
{
bscs obj1={"Lin_Algabra","Software_eng.","entrepreneurship","OS","Economics"};
BSCS(obj1,5,2022,"v");
}
if(s==6)
{
bscs obj1={"N_Computing","English III","C_Construction","DIP","PD_Computing",};
BSCS(obj1,5,2021,"VI");
}
return 0; 
}