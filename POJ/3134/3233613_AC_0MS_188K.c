int tab[]={-1, 0, 1, 2, 2, 3, 3, 4, 3, 4, 4, 5, 4, 5, 5, 5, 4, 5, 5, 6, 5, 6, 6, 6, 5, 6, 6, 6, 6, 7, 6, 6, 5, 6, 6, 7, 6, 7, 7, 7, 6, 7, 7, 7, 7, 7, 7, 7, 6, 7, 7, 7, 7, 8, 7, 8, 7, 8, 8, 8, 7, 8, 7, 7, 6, 7, 7, 8, 7, 8, 8, 8, 7, 8, 8, 8, 8, 8, 8, 8, 7, 8, 8, 8, 8, 8, 8, 9, 8, 9, 8, 9, 8, 8, 8, 8, 7, 8, 8, 8, 8, 9, 8, 9, 8, 9, 9, 9, 8, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 8, 9, 8, 8, 7, 8, 8, 9, 8, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 10, 9, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 10, 9, 10, 9, 10, 9, 9, 9, 9, 8, 9, 9, 9, 9, 10, 9, 10, 9, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 9, 10, 9, 9, 8, 9, 9, 10, 9, 10, 10, 10, 9, 10, 10, 11, 10, 11, 10, 10, 9, 10, 10, 11, 10, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 11, 10, 10, 10, 11, 10, 11, 11, 11, 10, 11, 10, 11, 10, 11, 10, 11, 10, 11, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 11, 10, 11, 10, 11, 10, 11, 11, 11, 10, 11, 11, 11, 10, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 10, 11, 11, 11, 10, 11, 10, 11, 10, 10, 10, 10, 9, 10, 10, 10, 10, 11, 10, 11, 10, 11, 11, 11, 10, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 11, 12, 11, 11, 11, 12, 11, 12, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 11, 12, 11, 11, 10, 11, 11, 12, 11, 12, 11, 11, 10, 11, 11, 11, 10, 11, 10, 10, 9, 10, 10, 11, 10, 11, 11, 11, 10, 11, 11, 12, 11, 12, 11, 11, 10, 11, 11, 12, 11, 12, 12, 11, 11, 12, 12, 12, 11, 12, 11, 11, 10, 11, 11, 12, 11, 12, 12, 12, 11, 11, 12, 12, 11, 12, 11, 12, 11, 11, 11, 12, 11, 12, 11, 11, 11, 12, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 12, 11, 11, 11, 12, 11, 12, 12, 12, 11, 12, 11, 12, 11, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 11, 12, 11, 12, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 12, 11, 12, 11, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 11, 12, 11, 11, 11, 11, 10, 11, 11, 11, 11, 12, 11, 12, 11, 12, 12, 12, 11, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 12, 12, 12, 11, 12, 12, 12, 12, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 12, 12, 13, 12, 13, 12, 12, 12, 13, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 13, 12, 12, 12, 13, 12, 13, 12, 12, 12, 13, 12, 13, 12, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 13, 12, 13, 12, 13, 12, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 12, 12, 13, 12, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 13, 12, 12, 12, 12, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 12, 11, 12, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 12, 11, 12, 12, 13, 12, 13, 12, 12, 11, 12, 12, 12, 11, 12, 11, 11, 10, 11, 11, 12, 11, 12, 12, 12, 11, 12, 12, 13, 12, 13, 12, 12, 11, 12, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 12, 11, 12, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 12, 12, 12, 12, 13, 13, 13, 13, 13, 12, 12, 13, 13, 13, 12, 13, 12, 12, 11, 12, 12, 13, 12, 13, 13, 13, 12, 12, 13, 13, 13, 13, 13, 13, 12, 12, 12, 13, 13, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 12, 12, 12, 13, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 13, 12, 12, 12, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 13, 12, 12, 12, 12, 12, 12, 11, 12, 12, 12, 12, 12, 12, 13, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 14, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 12, 13, 12, 12, 12, 12, 11, 12, 12, 12, 12, 13, 12, 13, 12, 13, 13, 13, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 14, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 12, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 14, 13, 13, 13, 13, 14, 13, 13, 13, 13, 12, 13, 13, 13, 13, 14, 13, 14, 13, 13, 14, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 14, 13, 13, 13, 13, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 13, 14, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 13, 14, 14, 13, 14, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 14, 13, 14, 14, 13, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 14, 13, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 13, 13, 14, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 13, 13, 13, 14, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 13, 14, 13, 14, 13, 13, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 14, 14, 14, 14, 14, 14, 13, 14, 14, 14, 13, 14, 13, 13, 12, 13, 13, 14, 13, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 13, 13 };

int main(){
int n; 
while(~scanf("%d",&n)&&n>0) printf("%d\n", tab[n]);
}