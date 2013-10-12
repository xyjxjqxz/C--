#include "iostream"
using namespace std;

struct Student
{
	char model[100];
	char number[100];
	char course[100];
	int grade;
}students[100];

int modelCount = 0;

void list();
void enterStucourse();
void outStucourse();
void enterStugrade(); 
void input(struct Student &student);
int find(char* model);
int fd(char* number);

int main()
{
	int action;
	do{
		cout<<"-----------菜单-----------"<<endl;
		cout<<"1)查看学生名单"<<endl;
		cout<<"2)选课"<<endl;
		cout<<"3)退选"<<endl;
		cout<<"4)录入成绩"<<endl;
		cout<<"5)退出程序"<<endl;

		cin>>action;
		switch(action){
		case 1:
			list();
			break;
		case 2:
			enterStucourse();
			break;
		case 3:
			outStucourse();
			break;
		case 4:
			enterStugrade();
			break;
		case 5:
			return 0;
		default:
			cout<<"您输入了错误的菜单项，请重新选择！";
		}
	}while(action!=5);
}

void list()
{
	cout<<"-------学生名单-------"<<endl;
	cout<<"姓名\t"<<"学号\t"<<"已选课程\t"<<"成绩"<<endl;
	if(modelCount>0)
	{
		for(int i=0;i<modelCount;i++)
		{
			cout <<endl;
			cout <<students[i].model<<"\t"<<students[i].number<<"\t"<<students[i].course<<"\t"<<students[i].grade<<endl;
			cout <<endl;
		}
	}
	else
	{
		cout <<endl;
		cout << "学生名单为空！"<<endl;
		cout <<endl;
	}
	cout<<"-------学生名单-------"<<endl;
}
void enterStucourse()
{
	struct Student student;
	input(student);

	int i = find(student.model);
	if(i == modelCount)
	{
		strcpy(students[i].model  ,student.model);
		strcpy(students[i].number ,student.number);
		strcpy(students[i].course ,student.course);
		modelCount++;
	}
	else
	{
		strcpy(students[i].course ,student.course);
	}
}

void outStucourse(){
	struct Student student;
	input(student);

	int i = find(student.model);
	if(i == modelCount){
		cout<<"课程错误"<<endl;
	}else
	{ 
		strcpy(students[i].course ,"无");
	}
}

void enterStugrade(){
	struct Student student;
	int grade;
	char a='a';
	do{
		cout<<"请输入学号："<<endl;
		cin>>student.number;
		int i=fd(student.number);
		//cout<<i<<endl;
		if( i==modelCount )
		{
			cout<<"学号错误！"<<endl;
			break;
		}
		cout << "请输入成绩:"<<endl;
		cin>>grade;
		if(grade<0||grade>100)
		{
			cout << "成绩错误！"<<endl; 
			break;
		}
		students[i].grade=grade;

		cout<<"是否继续输入成绩?(y/n)"<<endl;
		cin>>a;
	}while(a == 'y');
}

void input(struct Student &student)
{
	
	cout<<"姓名：";
	cin>>student.model;

	cout<<"学号：";
	cin >>student.number;

	cout<<"课程：";
	cin >>student.course;
}

int find(char* model){
	int i;
	for(i=0;i<modelCount;i++){
		if(strcmp(students[i].model,model) == 0){
			break;
		}
	}
	return i;
}
int fd(char* number){
	int i;
	for(i=0;i<modelCount;i++){
		if( strcmp(students[i].number,number)){
			break;
		}
	}
	return i;
}