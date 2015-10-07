#include <iostream>
using namespace std;

void prog(char s[])
{
	int j = 0, z = 0, o = 0;
	int j1 = 0, num = 0, l = 0;
	char stroka[100] = "", ans[100] = "";
	char c;
	
	int i = 0;
	while (i < strlen(s))
	{
		if (isdigit(s[i]) == false )
		{
			stroka[j] = s[i];
			j++;
		}
		else
		{
			j1 = i;
			num = 0;
			
			while (isdigit(s[j1]))
			{
				num = num * 10 + (s[j1] - '0');
				j1++;
			}
			l = 0;

			while (num > 16)
			{

				z = num / 16;
				o = num - (z * 16);
				if (o == 0) c = '0';
				if (o == 1) c = '1';
				if (o == 2) c = '2';
				if (o == 3) c = '3';
				if (o == 4) c = '4';
				if (o == 5) c = '5';
				if (o == 6) c = '6';
				if (o == 7) c = '7';
				if (o == 8) c = '8';
				if (o == 9) c = '9';
				if (o == 10) c = 'A';
				if (o == 11) c = 'B';
				if (o == 12) c = 'C';
				if (o == 13) c = 'D';
				if (o == 14) c = 'E';
				if (o == 15) c = 'F';
				ans[l] = c;
				l++;
				num = num / 16;
			}
			o = num;
			if (o == 0) c = '0';
			if (o == 1) c = '1';
			if (o == 2) c = '2';
			if (o == 3) c = '3';
			if (o == 4) c = '4';
			if (o == 5) c = '5';
			if (o == 6) c = '6';
			if (o == 7) c = '7';
			if (o == 8) c = '8';
			if (o == 9) c = '9';
			if (o == 10) c = 'A';
			if (o == 11) c = 'B';
			if (o == 12) c = 'C';
			if (o == 13) c = 'D';
			if (o == 14) c = 'E';
			if (o == 15) c = 'F';
			i = j1-1;
			ans[l] = c;
			l++;
			num = 0;
			stroka[j] = '0';
			j++;
			stroka[j] = 'x';
			j++;
			for (int y = l - 1; y >= 0; y = y - 1)
			{
				stroka[j] = ans[y];
				j++;
			}
		}
	i++;
	}

		for (int y = 0; y <= j; y++)
		s[y] = stroka[y];
		
}

void main()
{
	char s[100] = "ADSas46877ADS46877ds";
	prog(s);
	cout << s << endl;
}