#include <iostream>
using namespace std;
class dice
{
	public:
		int top;
		int north;
		int west;
		int east;
		int south;
		int down;
		dice()
		{
			top = 1;
			north = 2;
			west = 3;
			east = 4;
			south = 5;
			down = 6;
		}
};
void game(dice &d,string input)
{
	if(input=="north")
	{
		swap(d.top,d.north);
		swap(d.south,d.top);
		swap(d.down,d.south);
	}
	if(input=="south")
	{
		swap(d.top,d.south);
		swap(d.north,d.top);
		swap(d.down,d.north);
	}
	if(input=="west")
	{
		swap(d.top,d.west);
		swap(d.east,d.top);
		swap(d.down,d.east);
	}
	if(input=="east")
	{
		swap(d.top,d.east);
		swap(d.west,d.top);
		swap(d.down,d.west);
	}

}
int main()
{
	int line;
	while(cin >>line)
	{
		string input;
		dice my_dice;

		if(!line) break;

		for(int i=0;i<line;i++)
		{
			cin>>input;
			game(my_dice,input);
		}
		cout << my_dice.top << endl;
	}
	return 0;
}
