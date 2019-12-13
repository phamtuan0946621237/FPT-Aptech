#include <stdio.h>
int main(){

   int h;
   printf("số dòng");
   scanf("%d",&h);
   for( int i = 0; i < h ; i++){
       for(int j=0;j<=i;j++){
           printf("*");}
       printf("\n");

   }
   return 0;
   2.
   int dong;
   int cot;
   scanf("%d",&cot);
   scanf("%d",&dong);
   for (int i=0;i <cot;i++ ){
       printf("|");
       for(int j =0;j<dong;j++){
           printf("*");}
           printf("|");
       printf("\n");
   }
   return 0;
   4. Nhập vào số n, tính tổng n số đầu tiên trong dãy số Fibonaci

   int n;
   scanf("%d",&n);
   int a;
   int x0 =0,x1=1,x2=1,x3=2;
   for(int i=4;i<=n;i++){
       x0=x1;
       x1=x2;
       x2=x3;
       x3=x1+x2;
       a=x3+x2+x1;
   }
   printf("%d",a);

6. Nhập vào 2 số a, b đảm bảo a < b. Sau đó tính tổng các số từ a -> b


        int a;
        int b;
        int s=0;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a<b){
            for(int i=a;i<=b;i++){
                s += i;

            }
    printf("tỏng trên là = %d\n",s);
        }

        return 0;
// 7. Nhập 1 số nguyên dương n, đếm số chữ số của n
int number ;
   scanf("%d",&number);
   int count =0;
   for(int i=0;i<=number;i++){
       number /=10;
       count++;
   }
   printf("%d",count);
// 8. Nhập 1 số nguyên dương n, tính tổng các chữ số của n
int a ;
    scanf("%d",&a);
    int sotach;
    int s=0;
    for(int i=0;i<=a;i++){
        sotach= a % 10;
        s=s+ sotach;
        a/=10;
        printf("%d\n",s);
    }
// 9. Nhập 2 số a,b. Tìm ước chung lớn nhất của a và b
    int a,b;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    for (int uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN(%d,%d)=%d\n",a,b,uc);
            break;
        }
    }
    return 0;
       














}