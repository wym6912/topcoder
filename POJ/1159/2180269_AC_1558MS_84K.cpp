#include <stdio.h>

short min(short x, short y)
{ return x<y ? x : y; }

#define maxn 5001
char S[maxn];
short C[2][maxn];
int N;

int main()
{
    int d, i, j;
    bool k;
	scanf("%d%s", &N, S);
	for(i=N-2; i>=0; i--)
	{
        k=!k;
        for(j=i+1; j<N; j++)
        {
            if(S[i]==S[j])
                C[k][j]=C[!k][j-1];
            else        //S[i]!=S[j]
                C[k][j]=min(C[k][j-1], C[!k][j])+1;
        }
    }
    printf("%d\n", C[k][N-1]);
    return 0;
}

