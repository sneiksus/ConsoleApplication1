#include<iostream>
#include<ctime>
using namespace std;
int main()
//{
//	short cube=0,step=1;
//	srand(time(0));
//	do
//	{
//		cube = rand() % (1 - 6 + 1)+1;
//			cout << "STEP " << step << ": " << cube<<endl;
//	} while (cube != 2 && cube != 5);
//	return 0;
//}

//{
//	short step = 1;
//	srand(time(0));
//	for (short cube1 = 0, cube2 = 0;;step++)
//	{
//		cube1= rand() % (6 - 1 + 1) + 1;
//		cube2= rand() % (6 - 1 + 1) + 1;
//		cout << "STEP " << step << ": " << "cube 1 = " << cube1 << " cube 2 = " << cube2 << endl;
//		if (cube1 == 6 || cube1 == 6)
//			break;
//		if (cube2 ==6 || cube2 == 6)
//			break;
//	}
//
//}
//
//{
//	int temp, counter1 = 0,counter2 =0,counter3=0,sum=0,sum1=0,sum2=0,sum3=0;
//	srand(time(0));
//	for (short day = 1; day <= 10; day++)
//	{
//		temp = rand() % (4 - (-20) + 1) + (-20);
//		if (temp > 0)
//		{
//			counter1++;
//			sum1 += temp;
//		}
//		else if (temp < 0)
//		{
//			counter2++;
//			sum2 += temp;
//		}
//		else if (temp == 0)
//		{
//			counter3++;
//			sum3 += temp;
//		}
//		sum += temp;
//	}
//	cout << "Temperature>0  " << counter1 << "\nTemperature<0  " << counter2 << "\nTemperature=0  " << counter3 << "\nAVG = " << (float)sum / 10 << "\n\n";
//	cout << "(AVG)Temperature>0 = " << (float)sum1 / counter1 << "\n(AVG)Temperature<0 = " << (float)sum2 / counter2 << "\n(AVG)Temperature=0 = " << (float)sum3 / counter3 << endl;
//}



//{
//	for (int i = 9; i >= 0; i--)
//	{
//		for (int a = 9; a >= 0; a--)
//		{
//			cout << i << " ";
//		}
//		cout << "\n";
//	}
//	cout << "\n\n";
//
//
//	for (int i = 0; i <= 9; i++)
//	{
//		for (int a = 9; a >= i; a--)
//		{
//			cout << a << " ";
//		}
//		cout << "\n";
//	}
//
//	cout << "\n\n";
//
//
//	for (int i = 9; i >= 1; i--)
//	{
//		for (int a = i; a <= 9;a++)
//		{
//			cout << a << " ";
//		}
//		cout << "\n";
//	}
//}

{
	int height;
	int b = 1;
	cout << "Enter height\n";
	cin >> height;
		for (int i = 1; i <= height; i++)
		{
			for (int a = height; a >= i; a--)
			{
				cout <<"*";
			}
			cout << "\n";
		}
		cout << endl << endl;
		
		int star = height;;
		for (int i = 1; i <= height; i++, star--)
		{
			for ( b = 1; b < i; b++)
			{
				cout << " ";
			}
			for (int a = 0; a <star;a++)
			{
				cout << "*";
			}
			cout << endl;
		}
}