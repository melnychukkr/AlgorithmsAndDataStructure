#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
int n;
cin>>n;
int tab[n-1];
for(int i=0;i<n;i++) 
	tab[i]=0;
for(int i=0;i<n;i++){
    int x;
    scanf("%d",&x);
    tab[x-1]++;
}
for(int i=0;i<n;i++){
    if(tab[i] !=1){
        printf("no");
        return 0;
    }
}
printf("yes");
return 0;
}
