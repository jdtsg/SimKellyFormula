#include <cstdio>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

double prob = 0.25;//prob��0 <= prob <1���Ǿ���������Ӯ�ĸ��ʣ�eg.prob = 0.4,  ��������40%�ĸ���Ӯ��60%�ĸ�����.

int temp; 
int n; //ǿ��ѭ���� 
double f; //��ע�ʽ��  
double b; //���� 
double money = 10000;//��ǰ�ʽ�������ʼ�ʽ�һ��Ԫ�� 
int MAXN;
double mark = prob * RAND_MAX;

bool frand()
{
	 temp = rand();
	 if(temp < mark) return 1;
	 return 0; 
}

int main()
{
	srand((unsigned)time(NULL));//����������� 
	cout<<"you have "<<money<<" now.\n";
	cout<<"The prob you win is "<<prob/10<<".\n";
	cout<<"This simulation will end when your own less than 1 cent or reach the max-round.\n"<<"Input f:\n";
	cin>>f;
	cout<<"Input b:\n";//���� 
	cin>>b; 
	cout<<"Input max-round:\n";
	cin>>n;
	MAXN = n;
	int coin;
	while(n)
	{
		if(money <= 0.01) break;//���С��һ�� 
//		cout<<MAXN-n+1<<"	";
		if(frand())	money = money + money*f*b;
		else money = money - money*f;
		cout<<money<<"\n";
		n--;
	}
	cout<<"END\n";
	return 0;

}
