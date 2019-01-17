#include <iostream>
#include <map>
using namespace std;
struct Array
{
	int B,D,CD;
	int cd[15],ud[15];
};
int main()
{
    ios::sync_with_stdio(0);
    int N,R;

    while(cin>>N>>R)
	{
		string s;
		map<string,Array> M;
		for(int i=0;i<N;i++)
		{
			Array A;
			cin>>s;
			cin>>A.B>>A.CD;//Base address,size in byte of each array
			cin>>A.D;      //dimensions
			for(int j=0;j<A.D;j++) cin>>A.cd[j]>>A.ud[j];
			M[s] = A;
		}
		int *input;
		for(int i=0;i<R;i++)
		{
			cin>>s;
			Array &a = M[s];
			int dim = a.D;  //dimensions
			int Size = a.CD;//size of each array
			int Ans = a.B;  //Base address
			input = new int[a.D];
			for(int j=0;j<dim;j++) cin>>input[j];
			for(int j=0;j<dim;j++){
				int temp = input[j]-a.cd[j];
				for(int k=j+1;k<dim;k++)
					temp *= (a.ud[k]-a.cd[k]+1);
				temp *= Size;
				Ans += temp;
			}
			cout << s << "[";
			for(int j=0;j<dim;j++)
			{
				cout << input[j];
				if(j!=dim-1) cout << ", ";
			}
			cout << "] = " << Ans << endl;
		}
    }
    return 0;
}
