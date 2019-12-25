
#include <stdio.h>
#include <math.h>
void kiemtratamgiac(double a,double b,double c){
    if(a>0 && b>0 && c> 0){
           if(a<(b+c) && b<(a+c) && b<(a+c) ){
               printf("đây là 3 cạnh của tam giác" );
           }else{
               printf("đây không phải là 1 tam giác");
           }
       }else{
           printf("đây không phải là 3 cạnh");
               }
}
double chuvi(double a,double b,double c){
    double p = (a+ b+ c);
    return p;
}
double dientich(double a,double b,double c){
    double m= chuvi(a,b,c)/2;
    double t= m*(m-a)*(m-b)*(m-c);
    double S= sqrt(t);
    return S;
}
int main(){
    double a;
    double b;
    double c;
    printf("in ra 3 cạnh của 1 tam giác\n");
    scanf("%lf\n",&a);
    scanf("%lf\n",&b);
    scanf("%lf\n",&c);
    kiemtratamgiac(a,b,c);
    printf("chu vi của tam giác đó là : %lf",chuvi(a,b,c));
    printf("diện tích của tam giác đó là : %lf",dientich(a,b,c));
}
