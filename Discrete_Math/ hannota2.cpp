/* hannota2
* by smtech @ 2014 10/7
*/

#include <iostream>
using namespace std;

void han (int n, char one, char two, char three);
void move(char x, char y);

void han(int n, char one, char two, char three) {
	if (n == 1) {
		move(one, three);
		return;
	}
	han(n-1, one, three, two);
	move(one, three);
	han(n-1, two, one, three);
}

void move(char x, char y) {
	cout<<x<<"  ->  "<<y<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	han(n, '1', '3', '2');
	return 0;
}
