#include <iostream>
using namespace std;
int main()
{
	int sum,found,sudoku[9][9];
	while(cin >>sudoku[0][0])
	{
		found = 0;
		for(int i=1;i<9;i++)
			cin >> sudoku[0][i];
		
		for(int i=1;i<9;i++)
			for(int j=0;j<9;j++)
				cin >> sudoku[i][j]; 
		
		
		for(int i=0;i<9;i++)
		{
			sum = 0;
			for(int j=0;j<9;j++)
				sum = sum +sudoku[i][j];
			if(sum !=45)
			{
				found =1;
				break;
			}
		}
		
		
		for(int i=0;i<9;i++)
		{
			sum = 0;
			for(int j=0;j<9;j++)
				sum = sum +sudoku[j][i];
			if(sum !=45)
			{
				found =1;
				break;
			}
		}
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
		for(int k=0;k<9;k+=3)
		{
			sum = 0;
			for(int i=k;i<k+3;i++)
			{
				for(int j=0;j<3;j++)
				{
					sum = sum +sudoku[i][j];	
				}		
			}
			if(sum !=45)
			{
				found =1;
				break;	
			}
		}
		for(int k=0;k<9;k+=3)
		{
			sum = 0;
			for(int i=k;i<k+3;i++)
			{
				for(int j=3;j<6;j++)
				{
					sum = sum +sudoku[i][j];	
				}	
			}
			if(sum !=45)
			{
				found =1;
				break;	
			}
		}
		for(int k=0;k<9;k+=3)
		{
			sum = 0;
			for(int i=k;i<k+3;i++)
			{
				for(int j=6;j<9;j++)
				{
					sum = sum +sudoku[i][j];	
				}		
			}
			if(sum !=45)
			{
				found =1;
				break;	
			}
		}
		if(found ==1)
			cout << "no" << endl;	
		else
			cout << "yes" << endl;
				
	}
	return 0;
 } 
