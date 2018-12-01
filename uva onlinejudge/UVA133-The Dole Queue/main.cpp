#include <iostream>
using namespace std;
const int maxnum = 25;
int arr[maxnum];
int go(int p,int d,int t,int num)
{
	while(t--)
	{
		do{
			p = (p+d+num-1)%num + 1;
		}while(arr[p]==0);//一次走一步 若走到0再多走一步
	}
	return p;
}
int main()
{
	int num,Amove,Bmove;
	while(cin>>num>>Amove>>Bmove){
		for(int i=1;i<=num;i++) arr[i] = i;
		if(num==0) break;
		int left = num;
		int Anow = num;
		int Bnow = 1;
		while(left){
			Anow = go(Anow,1,Amove,num);
			Bnow = go(Bnow,-1,Bmove,num);
			printf("%3d",Anow); left--;
			if(Anow!=Bnow){
				printf("%3d",Bnow);
				left--;
			}
			arr[Anow] = arr[Bnow] = 0;
			if(left) printf(",");
		}
		printf("\n");
	}
	return 0;
}
