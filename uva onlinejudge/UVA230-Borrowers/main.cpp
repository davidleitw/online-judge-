#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
struct Book
{
	string BookName;
	string Author;
};
int cmp(const Book &b1,const Book &b2)
{
	if(b1.Author!=b2.Author) return b1.Author<b2.Author;
	else return b1.BookName<b2.BookName;
}

int main()
{
	ios::sync_with_stdio(false);
    string input,command;
    vector<Book> Library;
    map<string,int> LibraryStatus;
	Library.clear();               //make sure it's empty.

    while(getline(cin,input))
    {
    	Book book;
    	int i,j;
    	if(input=="END") break;
		book.BookName+='"';
    	for(i=1;;i++)
		{
			if(input[i]=='"') break;
			book.BookName+=input[i];
    	}
		book.BookName+='"';
    	for(j=i+5;j<input.length();j++) { book.Author+=input[j]; }
		Library.push_back(book);
    }

    sort(Library.begin(),Library.end(),cmp);
    for(int i=0;i<Library.size();i++) LibraryStatus[Library[i].BookName] = 1;
    //for(int i=0;i<Library.size();i++) cout << Library[i].BookName << " :" << Library[i].Author << endl;

	while(cin>>input)
	{
		if(input=="END") break;
		if(input=="BORROW")
		{
			cin.get();
			getline(cin,command);
			LibraryStatus[command] = 0;
		}
		if(input=="RETURN")
		{
			cin.get();
			getline(cin,command);
			LibraryStatus[command] = -1;
		}
		if(input=="SHELVE")
		{
			for(int i=0;i<Library.size();i++)
			{
				if(LibraryStatus[Library[i].BookName]==-1)
				{
					int j;
					for(j=i;j>=0;j--) if(LibraryStatus[Library[j].BookName]==1){ break; }
					if(j>-1)
						cout << "Put " << Library[i].BookName << " after " << Library[j].BookName << endl;
					else
						cout << "Put " << Library[i].BookName <<  " first" << endl;
					LibraryStatus[Library[i].BookName] = 1;
				}
			}
			cout << "END" << endl;
		}
	}
    return 0;
}
