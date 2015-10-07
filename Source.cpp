#include <iostream>
using namespace std;

char* prog(char* s)
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
		return s;
		
}

void assert(char* s, char* res)
{
	bool check = true;
	char* ans = prog(s);
	if (strlen(ans) == strlen(res))
	{
		for (int i = 0; i < strlen(ans); i++)
			if (ans[i] != s[i]) check = false;
		if (check == true) cout << "OK" << endl;
		else cout << "FAIL" << endl;
	}
	else cout << "FAIL" << endl;
}

int main()
{
	char* s1 = "16";
	char* res1 = "0x10";
	assert(s1, res1);
	char* s2 = "asdfgh99jkl";
	char* res2 = "asdfgh0x63jkl";
	assert(s2, res2);
	char* s3 = "123456789";
	char* res3 = "0x75BCD15";
	assert(s3, res3);
	char* s4 = "22.qwr34[41";
	char* res4 = "16.qwr0x22[0x29";
	assert(s4, res4);
	return 0;
}
