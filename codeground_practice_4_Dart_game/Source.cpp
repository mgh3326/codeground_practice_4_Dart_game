#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265358979323846

/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int Answer;
int Score(const int& x, const int& y)
{
	int arr[20] = { 9,13,4,18,1,20,5,12,9,14,11,8,16,7,19,3,17,2,15,10 };
	return arr[((int)(atan2(y, x) * 180 / PI + 360 + 9) / 18) % 20];
}
int main(int argc, char** argv)
{
	int T, test_case;
	int num;
	//unsigned int study;
	int A, B, C, D, E;
	/*
	The freopen function below opens input.txt file in read only mode, and afterward,
	the program will read from input.txt file instead of standard(keyboard) input.
	To test your program, you may save input data in input.txt file,
	and use freopen function to read from the file when using cin function.
	You may remove the comment symbols(//) in the below statement and use it.
	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	But before submission, you must remove the freopen function or rewrite comment symbols(//).
	*/

	//freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);
	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		scanf("%d", &A);
		scanf("%d", &B);
		scanf("%d", &C);
		scanf("%d", &D);
		scanf("%d", &E);
		scanf("%d", &num);
		Answer = 0;

		for (int i = 0; i < num; i++)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			if (A*A >= a * a + b * b)//BULL
			{
				Answer += 50;
			}
			else if (B*B < a * a + b * b&&a * a + b * b < C*C)//TRIPLE
			{
				Answer += Score(a, b) * 3;
			}
			else if (D*D < a * a + b * b&&a * a + b * b < E*E)//DOUBLE
			{
				Answer += Score(a, b) * 2;
			}
			else if (a * a + b * b < D*D)//SINGLE
			{
				Answer += Score(a, b);
			}
		}
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		Implement your algorithm here.
		The answer to the case will be stored in variable Answer.
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
//https://www.codeground.org/practice/practiceProblemView