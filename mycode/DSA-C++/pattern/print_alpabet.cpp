#include <iostream>
using namespace std;
int height = 5;
int width = (2 * height) - 1;

void printA()
{
	int n = width / 2, i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == n || j == (width - n)
				|| (i == height / 2 && j > n
					&& j < (width - n)))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
		n--;
	}
}


void printB()
{
	int i, j, half = (height / 2);
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < width; j++) {
			if ((i == 0 || i == height - 1 || i == half)
				&& j < (width - 2))
				cout <<"*";
			else if (j == (width - 2)
					&& !(i == 0 || i == height - 1
						|| i == half))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printC()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < (height - 1); j++) {
			if (i == 0 || i == height - 1)
				cout <<"*";
			else
				continue;
		}
		cout <<"\n";
	}
}


void printD()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < height; j++) {
			if ((i == 0 || i == height - 1)
				&& j < height - 1)
				cout <<"*";
			else if (j == height - 1 && i != 0
					&& i != height - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printE()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < height; j++) {
			if ((i == 0 || i == height - 1)
				|| (i == height / 2
					&& j <= height / 2))
				cout <<"*";
			else
				continue;
		}
		cout <<"\n";
	}
}


void printF()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < height; j++) {
			if ((i == 0) || (i == height / 2
							&& j <= height / 2))
				cout <<"*";
			else
				continue;
		}
		cout <<"\n";
	}
}


void printG()
{
	int i, j;
	width--;
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if ((i == 0 || i == height - 1)
				&& (j == 0 || j == width - 1))
				cout <<" ";
			else if (j == 0)
				cout <<"*";
			else if (i == 0 && j <= height)
				cout <<"*";
			else if (i == height / 2
					&& j > height / 2)
				cout <<"*";
			else if (i > height / 2
					&& j == width - 1)
				cout <<"*";
			else if (i == height - 1
					&& j < width)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printH()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < height; j++) {
			if ((j == height - 1)
				|| (i == height / 2))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printI()
{
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			if (i == 0 || i == height - 1)
				cout <<"*";
			else if (j == height / 2)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printJ()
{
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			if (i == height - 1 && (j > 0
									&& j < height - 1))
				cout <<"*";
			else if ((j == height - 1
					&& i != height - 1)
					|| (i > (height / 2) - 1
						&& j == 0 && i != height - 1))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printK()
{
	int i, j, half = height / 2, dummy = half;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j <= half; j++) {
			if (j == abs(dummy))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
		dummy--;
	}
}


void printL()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j <= height; j++) {
			if (i == height - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printM()
{
	int i, j, counter = 0;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j <= height; j++) {
			if (j == height)
				cout <<"*";
			else if (j == counter
					|| j == height - counter - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		if (counter == height / 2) {
			counter = -99999;
		}
		else
			counter++;
		cout <<"\n";
	}
}


void printN()
{
	int i, j, counter = 0;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j <= height; j++) {
			if (j == height)
				cout <<"*";
			else if (j == counter)
				cout <<"*";
			else
				cout <<" ";
		}
		counter++;
		cout <<"\n";
	}
}


void printO()
{
	int i, j, space = (height / 3);
	int width = height / 2 + height / 5 + space + space;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == width - abs(space)
				|| j == abs(space))
				cout <<"*";
			else if ((i == 0
					|| i == height - 1)
					&& j > abs(space)
					&& j < width - abs(space))
				cout <<"*";
			else
				cout <<" ";
		}
		if (space != 0
			&& i < height / 2) {
			space--;
		}
		else if (i >= (height / 2 + height / 5))
			space--;
		cout <<"\n";
	}
}


void printP()
{
	int i, j;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < height; j++) {
			if ((i == 0 || i == height / 2)
				&& j < height - 1)
				cout <<"*";
			else if (i < height / 2
					&& j == height - 1 && i != 0)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printQ()
{
	printO();
	int i, j, d = height;
	for (i = 0; i < height / 2; i++) {
		for (j = 0; j <= d; j++) {
			if (j == d)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
		d++;
	}
}


void printR()
{
	int i, j, half = (height / 2);
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j < width; j++) {
			if ((i == 0 || i == half)
				&& j < (width - 2))
				cout <<"*";
			else if (j == (width - 2)
					&& !(i == 0 || i == half))
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printS()
{
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			if ((i == 0 || i == height / 2
				|| i == height - 1))
				cout <<"*";
			else if (i < height / 2
					&& j == 0)
				cout <<"*";
			else if (i > height / 2
					&& j == height - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printT()
{
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			if (i == 0)
				cout <<"*";
			else if (j == height / 2)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printU()
{
	int i, j;
	for (i = 0; i < height; i++) {
		if (i != 0 && i != height - 1)
			cout <<"*";
		else
			cout <<" ";
		for (j = 0; j < height; j++) {
			if (((i == height - 1)
				&& j >= 0
				&& j < height - 1))
				cout <<"*";
			else if (j == height - 1 && i != 0
					&& i != height - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
	}
}


void printV()
{
	int i, j, counter = 0;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == counter
				|| j == width - counter - 1)
				cout <<"*";
			else
				cout <<" ";
		}
		counter++;
		cout <<"\n";
	}
}


void printW()
{
	int i, j, counter = height / 2;
	for (i = 0; i < height; i++) {
		cout <<"*";
		for (j = 0; j <= height; j++) {
			if (j == height)
				cout <<"*";
			else if ((i >= height / 2)
					&& (j == counter
						|| j == height - counter - 1))
				cout <<"*";
			else
				cout <<" ";
		}
		if (i >= height / 2) {
			counter++;
		}
		cout <<"\n";
	}
}


void printX()
{
	int i, j, counter = 0;
	for (i = 0; i <= height; i++) {
		for (j = 0; j <= height; j++) {
			if (j == counter
				|| j == height - counter)
				cout <<"*";
			else
				cout <<" ";
		}
		counter++;
		cout <<"\n";
	}
}
void printY()
{
	int i, j, counter = 0;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= height; j++) {
			if (j == counter
				|| j == height - counter
					&& i <= height / 2)
				cout <<"*";
			else
				cout <<" ";
		}
		cout <<"\n";
		if (i < height / 2)
			counter++;
	}
}


void printZ()
{
	int i, j, counter = height - 1;
	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			if (i == 0 || i == height - 1
				|| j == counter)
				cout <<"*";
			else
				cout <<" ";
		}
		counter--;
		cout <<"\n";
	}
}

int main()
{

	while(1){
	char character;
    cout<<"enter charercter==";
	cout<<"\n";
    cin>>character;
	switch (character) {
	case 'a':
		printA();
		break;
	case 'b':
		printB();
		break;
	case 'c':
		printC();
		break;
	case 'd':
		printD();
		break;
	case 'e':
		printE();
		break;
	case 'f':
		printF();
		break;
	case 'g':
		printG();
		break;
	case 'h':
		printH();
		break;
	case 'i':
		printI();
		break;
	case 'j':
		printJ();
		break;
	case 'k':
		printK();
		break;
	case 'l':
		printL();
		break;
	case 'm':
		printM();
		break;
	case 'n':
		printN();
		break;
	case 'o':
		printO();
		break;
	case 'p':
		printP();
		break;
	case 'q':
		printQ();
		break;
	case 'r':
		printR();
		break;
	case 's':
		printS();
		break;
	case 't':
		printT();
		break;
	case 'u':
		printU();
		break;
	case 'v':
		printV();
		break;
	case 'w':
		printW();
		break;
	case 'x':
		printX();
		break;
	case 'y':
		printY();
		break;
	case 'z':
		printZ();
		break;
	}
	}
	return 0;
}
