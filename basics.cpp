#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

//pointer
// int main()
// {
//     // int a[5] = {10,9,8,7,6};
//     int *p;
//     // p =a;
//     p = new int[5];
//     p[0]=10;
//     cout<<p[0];
//     delete[]p;

//     return 0;
// }

// Reference
// int main(){
//     int a = 10;
//     int &r = a;
//     cout<<r<<a;
//     return 0;
// }

// Pointer to Structure
struct rec{
    int l;
    int b;
};

int main(){
    // rec r ={10,5};
    rec *p;
    p = new rec;
    p->l = 10;
    p->b = 55;
    cout<<p->l<<"  "<<p->b;
    return 0;
}

#include <iostream>

using namespace std;

// CALL BY VALUE

// int add(int a,int b)
// {
//     int c  = a+b;
//     return c;
// }

// int main()
// {
//     int num1 = 10;
//     int num2 = 15;
//     int sum = add(num1,num2);
//     cout<<sum;

//     return 0;
// }

//CAll BY ADDRESS

// int swap(int *a,int *b)
// {
//     int c ;
//     c =*a;
//     *a = *b;
//     *b = c;
//     return 0;
// }

// int main()
// {
//     int num1 = 10;
//     int num2 = 15;
//     swap(&num1,&num2);
//     cout<<num1<<"   "<<num2;

//     return 0;
// }

//CALL BY REFERENCE
// int swap(int &a,int &b)
// {
//     int c ;
//     c =a;
//     a = b;
//     b = c;
//     return 0;
// }

// int main()
// {
//     int num1 = 10;
//     int num2 = 15;
//     swap(num1,num2);
//     cout<<num1<<"   "<<num2;
//     return 0;
// } 

#include <iostream>

using namespace std;

// Normal array as Parameter

// int fun(int *a, int l)
// {
//     for(int i = 0; i<l; i++)
//     cout<<a[i];
//     return 0;
// }

// int main(){
//     int a[] = {1,2,3,4,5};
//     fun(a,5);
//     return 0;
    
// }

// //Structure as Parameter via pointer 
// struct rec {
//     int len,bred;
// };

// void fun(struct rec *r1, int l1 ){
//     r1->len = l1;
// };

// int main()
// {
//     struct rec r = {10,5};
//     fun(&r,55);
//     cout<<r.len;
//     return 0;
// }

//  Template Class
template <class T>
class Arithmetic
{
    private:
    T a;
    T b;
    
    public:
    T add(T a,T b);
};

template<class T>
T Arithmetic<T>::add(T a,T b)
{
    T c = a+b;
    return c;
}

int main(){
    Arithmetic<int> aa(5,6);
    cout<<aa.add(5,6);
    return 0;
}

// #include <iostream>

// using namespace std;

// int fun1(int x)
// {
//     if(x>0)
//     {
//         cout<<x;
//         fun1(x-1);
//     };
//     return 0;
// }

// int main()
// {
//     int x = 3;
//     fun1(x);
//     return 0;
// }
