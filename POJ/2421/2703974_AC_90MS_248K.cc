#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 110

int A[maxn];
struct edge{
	int u,v,l;
}E[maxn*maxn];
bool U[maxn*maxn/2];
bool cmp(struct edge p,struct edge q){return p.l<q.l;}

int query(int u){
	while(A[u]>0)u=A[u];
	return u;
}

int main(){
	int t,N,i,j,et=0,Q,u,v;
	
	while(~scanf("%d",&N)){
		memset(A,0xff,4*maxn);
		memset(U,0,maxn*maxn/2);
		et=0;
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				scanf("%d",&t);
				if(j<i){
					E[et].u=i;
					E[et].v=j;
					E[et].l=t;
					et++;
				}
			}
		}
		scanf("%d",&Q);
		for(i=1;i<=Q;i++){ 
			scanf("%d%d",&u,&v);
			int rtu=query(u);
			int rtv=query(v);
			if(rtu!=rtv){
				A[rtu]=rtv;
			}
		}
		sort(E,E+et,cmp);
		for(i=j=0;i<et;i++){
			struct edge &te=E[i];
			int rtu=query(te.u);
			int rtv=query(te.v);
			
			if(rtu!=rtv){
				A[rtu]=rtv;
				j+=E[i].l;
			}
		}
		printf("%d\n",j);
	}
	return 0;
}