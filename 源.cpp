#include<iostream>
using namespace std;
class clock
{
public:
	void intt(int a, int b, int c)
	{
		if (a > 12)	newhour = a - 12;
		else newhour = a;
		newsecond = b;
		newtime = c;
	}
	void showtime()
	{
		cout << "the time is  " << newhour << "hour  " << newsecond << "minute  " << newtime << "second  " << endl;
	}
private:
	int newhour, newsecond, newtime;
};
class clock2
{
public:
	void intt(int a, int b, int c)
	{
		newhour = a;
		newsecond = b;
		newtime = c;
	}
	void showtime()
	{
		cout << "the time is  " << newhour << "hour  " << newsecond << "minute  " << newtime << "second  " << endl;
	}
private:
	int newhour, newsecond, newtime;
};
int main()
{
	int a, b, c,mod;
	clock commmon;
	clock2 fire;
	cout << "please set your mod" << endl << "your have two choice" << endl << "24h or 12h" << endl;
	cin >> mod;
	cout << "please cin your time" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (mod == 12)
	{
		commmon.intt(a, b, c);
		commmon.showtime();
	}
	if (mod == 24)
	{
		fire.intt(a, b, c);
		fire.showtime();
	}
	return 0;
}