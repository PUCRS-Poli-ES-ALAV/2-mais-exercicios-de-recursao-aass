#include <stdio.h>
#include <string.h>

int fatorial(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return n * fatorial(n-1);
}

int somatorio (int n){
    if(n == 0) return 0;
    return n + somatorio(n-1);
}

int fibo(int n){
    if (n == 0) return 0;
    if(n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 2;
    return fibo(n-1) + fibo(n-2);
}

int somatorio2(int j, int k){
    return 0;
}

int isPal(char *s){
    if(s[0] != s[strlen(s)-1]) return 1;
    if(strlen(s) == 0 || strlen(s) == 1) return 0;
    return isPal(strncpy(s, 1, strlen(s)-2));
}


int main(){
    printf("fatorial: %d\n", fatorial(4));
    printf("somatorio; %d\n", somatorio(3));
    printf("fib; %d\n", fibo(6));
    printf("isPal: %d", isPal("hannah"));
}