/* hannota
* by sm-tech  at  2014 10/6
*/

#include <iostream>
using namespace std;

class han
{
private:
	int n;
	unsigned int pos;
public:
	han(unsigned int number, unsigned int position) {
		n = number;  pos = position;
	}
	~han() {};
	unsigned int getpos() { return pos; }
	void setpos(unsigned int p) { pos = p;}
	int getn() { return n; }
	/* data */
};

unsigned int  get_mid(unsigned int stay, unsigned int des) {
	return stay^des;
}
void move(han h, unsigned int des) {
	if (h.getn() == 1) {
		cout<<h.getn()<<"  ->  "<<"h"<<des<<endl;
		return;
	}
	unsigned int mid = get_mid( h.getn(),  des);
	han hs( h.getn() - 1, h.getpos() );

	move(hs, mid);
	hs.setpos(mid);
	cout<<h.getn()<<"  ->  "<<"h"<<des<<endl;
	move(hs, des);
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	han h(n, 1);
	move(h, 2);
	return 0;
}