#include<iostream>
#include<conio.h>
using namespace std;

class calc
{
	double amount;
public:
	calc(double at) : amount(at)
	{};
	calc() : amount(0)
	{};
	double fadd(calc t1, calc t2)
	{
		calc temp;
		amount = t1.amount + t2.amount;
		return amount;
	}
	double fsub(calc t1, calc t2)
	{
		calc temp;
		amount = t1.amount - t2.amount;
		return amount;
	}
	double fmul(calc t1, calc t2)
	{
		amount = t1.amount * t2.amount;
		return amount;
	}
	double fdiv(calc t1, calc t2)
	{
		amount = t1.amount / t2.amount;
		return amount;
	}
};

int main()
{
	char tmp;
	calc res;
    calc t1(5);
	calc t2(10);
	cin >> tmp;

		if(tmp=='-')
			cout << res.fadd(t1, t2);
		if (tmp == '+')
			cout << res.fdiv(t1, t2);
		if (tmp == '*')
			cout << res.fmul(t1, t2);
		if (tmp == '/')
			cout << res.fdiv(t1, t2);
	
}