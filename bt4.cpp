#include <stdio.h>

int main() {
	// 1. Viết chương trình tính n! biết n! = 1.2.3.4…n 
    int s = 1;
    int n;
    printf("nhập số n\n");
    scanf("%d",&n);
   for(int i=2;i<=n;i++){
       s =s * i;
   }
    printf("%d là kết quả của phép tính trên",s);
    // 2. Nhập vào 3 số là 3 cạnh của tam giác, sai nhập lại
    int a;
    int b;
    int c;
    do{
         printf("nhập 3 số\n");
            scanf("%d\n",&a);
            scanf("%d\n",&b);
            scanf("%d\n",&c);
        printf("đây là tam giác");
    }while(a>= (b+c) || b>= (a+c) || c >= (a+b));
    printf(" đây không phải tam giác");
    // 3. Nhập 1 số, kiểm tra đó có phải số nguyên tố.
    #include <stdio.h>
		#include <math.h>
	int main() {
    int n;
    printf("nhập vào 1 số\n");
    scanf("%d",&n);
    int trunggian = 1;
	    for( int i=2;i<=sqrt(n);i++){
	        if(n % i==0){
	            trunggian = 0;
	        }
	    }
	    if(trunggian == 1){
	        printf("%d là số nguyên tố",n);
	    }else{
	        printf("%d không phải số nguyên tố",n);
	    }	
	}
	// 4. Nhập vào 1 số nguyên, tìm số nghịch đảo của nó ( ví dụ nhập 1234 thì nghịch đảo: 4321)
	
}