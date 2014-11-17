#include <stdio.h>

int T, M, N;
const int Max = 100001;
int A[Max];
bool D[Max];

inline void root(int x)
{
	bool diff=0;
	int n=x;
	while (n != A[n])
	{
		diff = diff^D[n];
	 	n = A[n];
	}
	A[x]=n;	D[x]=diff;
}

int main()
{
	int i,x,y;
	char cmd[3];

	scanf("%d", &T);
	while(T--){
		scanf("%d%d", &N, &M);
		for(i=1; i<=N; i++) 
		{
		 	A[i]=i;
		 	D[i]=0;
		}
		for(i=1; i<=M; i++)
		{
			scanf("%s%d%d",cmd, &x, &y);
			root(x); root(y);
			if(cmd[0]=='D')
			{
					if(A[x] != A[y])
					{
						D[A[y]] = !(D[x] ^ D[y]);
	 					A[A[y]] = A[x];
					}
			}
			else if(cmd[0]=='A')
			{
				if(A[x] == A[y])
				{
					if(D[x] == D[y])
						puts("In the same gang.");
					else
						puts("In different gangs.");
				}
				else puts("Not sure yet.");
			}
		}
		
	}
	return 0;
}
