#include <iostream>

using namespace std;

// int fun(int n)
// {
//     static int x=0;//static
//     if(n>0)
//     {   
//         // x++;//static
//         // return fun(n-1)+x;//static
//         return fun(n-1)+n;
//     }
//     return 0;
// }

// int main()
// {
//     int a = 5;
//     cout<<fun(a);

//     return 0;
// }

//TREE RECURSION

// void fun(int n)
// {
//     if(n>0)
//     {   
//         cout<<n;
//         fun(n-1);
//         fun(n-1);

//     }
// }

// int main()
// {
//     // int a = 3;
//     fun(3);

//     return 0;
// }

//INDIRECT RECURSION

void fB(int n);
void fA(int n)
{
    if(n>0){
        cout<<n<<endl;
        fB(n-1);
    }
}

void fB(int n)
{
    if(n>1){
        cout<<n<<endl;
        fA(n/2);
    }
}

int main(){
    fA(20);
}

#include <iostream>

using namespace std;
//NESTED RECURSION

// int f(int n)
// {
//     if(n>100)
//     {
//         return n-=10;
//     }
//     else
//     {
//         return f(f(n+11));
//     }
// }

// int main()
// {
//     cout<<f(95);
// }

//SUM OF N NATURAL NUMBERS

// int sum(int n)
// {
//     // if(n==0)
//     // {
//     //     return 0;
//     // }
//     // else
//     // {
//     //     return sum(n-1)+n;
//     // }
    
//     //BY LOOP
    
//     int j=0;
//     for(int i = 1; i<=n; i++)
//     {
//         j = j+i;
//     }
//     return j;
// }
// int main(){
//     int k = sum(5);
//     cout<<k;
// }

//Factorial
// int fac(int n)
// {
//     if (n==1)
//         return 1;
//     return fac(n-1)*n;
// }
// int main(){
//     int j =fac(5);
//     cout<<j;
// }

//a^m
// int raise(int m,int n)
// {
//     // if(n==0){
//     //     return 1;
//     // }
//     // else{
//     //     if(n%2==0)
//     //     {
//     //         return raise(m*m,n/2);
//     //     }
//     //     else{
//     //         return m*raise(m*m,(n-1)/2);
//     //     }
//     // }
    
//     if(n==0)
//         return 1;
//     if(n%2==0)
//         return raise(m*m,n/2);
//     return m*raise(m*m,(n-1)/2);
// }
// int main(){
//     cout<<raise(2,5);
// }

//TAYLOR SERIES USING RECURSION

// double e(int x, int n)
// {
//     static double p =1,f=1;
//     double r;
//     if(n==0)
//         return 1;
//     r = e(x ,n-1);
//     p = p*x;
//     f= f*n;
//     return r+p/f;
// }
// int main(){
//     cout<<e(1,3);
// }

//HORNER's RULE
//Recursion
// double e(double x, double n)
// {
//     static double s = 1;
//     if(n==0)
//         return s ;
//     s=1+x*s/n;

//     return e(x,n-1);
// }

// int main(){
//      cout<<e(1,10);
// }
//Iteration
double e(double x, double n)
{
    double s = 1;
    // if(n==0)
    //     return s ;
    // s=1+x*s/n;

    // return e(x,n-1);
    while(n>0){
        
        s=1+x*s/n;
        n--;
    }
    return s;
}

int main(){
     cout<<e(1,10);
}

#include <iostream>

using namespace std;

//FIBONACCI USING RECURSION

// int fib(int n)
// {
//     // int a,b,c;
//     if(n<=1)
//     {
//         return n;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
    
// }

// int main()
// {
//     cout<<fib(5);

//     return 0;
// }

//ITERATION

// int fib(int n){
//     int a = 0;
//     int b = 1;
//     int sum = 1;
//     if(n<=1)
//     {
//         return n;
//     }
//     else
//     {
//         for(int i=2;i<=n;i++)
//         {
//             sum=a+b;
//             a=b;
//             b=sum;
//         }
//         return sum;
//     }
// }
// int main(){
//     cout<<fib(0);
// }

//MEMORISATION
// int F[10];
// int fib(int n)
// {
    
//     if(n<=1)
//     {
//      F[n]=n;
//      return n;
//     }
//     else
//     {
//         if(F[n-2] == -1)
//         {
//             F[n-2] = fib(n-2); 
//         }
//         if(F[n-1] == -1)
//         {
//             F[n-1] = fib(n-1); 
//         }
//         F[n] = F[n-2]+F[n-1];
//         return F[n-2]+F[n-1];
//     }
    
// }

// int main()
// {
//     for(int i=0; i<10;i++)
//         F[i]=-1;
//     cout<<fib(7);
//     return 0;
// }

//nCr
// int fact(int a)
// {
//     if(a==0 || a==1)
//         return 1;
//     return fact(a-1)*a;
// }
// int C(int n, int r)
// {
//     return fact(n)/(fact(n-r)*fact(r));
// }

// int REC_C(int n,int r)
// {
//     if(r==0 || r==n)
//         return 1;
//     return C(n-1,r-1)+ C(n-1,r);
// }
// int main()
// {
//     cout<<C(6,2);
// }

//TOWER OF HANOI
void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main()
{
    TOH(3,1,2,3);
    return 0;
}
