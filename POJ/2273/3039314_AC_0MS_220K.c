p(n){if(n)n--,p(n/26),putchar(n%26+'A');}main(r,c){while(scanf("R%dC%d\n",&r,&c)&&r)p(c),printf("%d\n",r);}