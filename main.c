//
//  main.c
//  TUAN
//
//  Created by admin on 12/3/19.
//  Copyright © 2019 admin. All rights reserved.
//

#include <stdio.h>
/* 1. Nhập vào 3 số, tìm số lớn nhất trong 3 số đó. */
int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1 > num2){
        if(num1 > num3){
            printf("num1 max\n");
        }else{
            printf("num3 max\n");
        }
    }else{
        if(num2 > num3){
            printf("num2 max\n");
        }else{
            printf("num3 max\n");
        }
    }
//     2. Nhập vào 3 số, tìm số nhỏ nhất trong 3 số đó.
        int num4;
        int num5;
        int num6;
    scanf("%d",&num4);
    scanf("%d",&num5);
    scanf("%d",&num6);
    if(num4 <num5){
        if(num4 < num6){
            printf("num4 min\n");
        }else{
            printf("num6 min\n");
        }
    }else{
        if(num5 < num6){
            printf("num5 min\n");
        }else{
            printf("num6 min\n");
        }
    }
//    3. Nhập vào các số nguyên a,b,c. Tìm các nghiệm của phương trình ax^2 + bx + c = 0;
    float a;
    float b;
    float c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float denta= pow(b,2) -4*a*c;
    float x1;
    float x2;
    if(denta>0){
        printf("phương trình có 2 nghiệm là x1, x2\n");
        x1 = (float) (-b + sqrt(denta))/ (2*a);
        x2 = (float) (-b - sqrt(denta))/ (2*a);
        printf("x1 =%f\n",x1);
        printf("x2 =%f\n",x2);
    }else if(denta==0){
        printf("phương trìn có 1 nghiệm duy nhất\n ");
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    }else{
        printf("phương trình vô nghiệm\n");
    }
//    4. Nhập vào 2 giá trị x,y. Đổi giá trị 2 biến với nhau
    float t;
    float y;
    scanf("%f",&t);
    scanf("%f",&y);
    if(t,y){
        printf("t = %f\n",y);
        printf("y = %f\n",t);
    }
}
