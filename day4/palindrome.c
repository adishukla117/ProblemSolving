#include<stdio.h>
int pal(int n,int b,int rev);
int rev(int n,int rev);
int sd(int n,int b);
int main(){
    int n;
    scanf("%d",&n);
    int r=sd(n,0);
    printf("%d",r);
    // int pali=pal(n,n,0);
    // if(pali==1)
    // printf("PALINDROME");
    // else
    // printf("NOT PALINDROME");
}
int pal(int n,int b,int rev){
    if(b==rev)
    return 1;
    if(n<=0)
    return 0;
    return pal(n/10,b,rev*10+n%10);
}
int rev(int n,int re){
    if(n<=0)
    return re;
    return rev(n/10,(re*10+n%10));
}

int sd(int n,int b){
    if(n<=0)
    return b;
    return sd(n/10,b+n%10);
}