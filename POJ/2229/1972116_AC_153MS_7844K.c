int w[1000010]={0,1,2};int S(int n){if(!w[n])if(n%2) w[n]=S(n-1);else w[n]=S(n/2)+S(n-2);w[n]%=1000000000;return w[n];}main(){scanf("%d",w);printf("%d\n",S(*w));}
