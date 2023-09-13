#include <stdio.h>

int main()

{ int n,m,i,j,a=1,u,v,nn; scanf("%d", &n);

m=2*n-1;

for(i=1;i<=m;i++) {

for(j=1;j<=m;j++) {

if(i==a||j==a||i==m||j==m) printf("%2d",n); else

{

u=a;

v=m;

nn=n;

loop:
