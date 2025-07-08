//Pascal traingle 

#include <stdio.h> 

int fact(int x){ 

    int f=1; 

    for(int i=1;i<=x;i++){ 

        f=f*i; 

    } 

    return f; 

} 

  

int comb(int n, int r){ 

    int ncr = (fact(n) / (fact(r) * fact(n-r))); 

    return ncr; 

} 

  

int main() 

{ 

  int n,r; 

  scanf("%d %d", &n, &r); 

  int v=1; 

  for(int i=0;i<=n;i++){ 

      for(int j=0;j<=i;j++){ 

          printf(" "); 

          v=comb(i,j); 

           printf("%d",v); 

      } 

       printf("\n"); 

  } 

    return 0; 

} 
