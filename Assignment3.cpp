
#include <stdio.h>
int main() {
	// 1. Nhập vào 2 số nguyên a,b. Nếu a >= b thì in ra kết quả của a/b, ngược lại thì in ra kết quả của a*b

	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
		if(a>=b){
			printf("%d/%d\n",a,b);
		}else{
			printf("%d * %d\n",a,b );
		}
// 2. Nhập vào 1 số nguyên, in ra là đó thứ mấy hoặc ko phải ngày trong tuần.
	int number;
	scanf("%d",&number);
		if(number <= 7){
			printf(" thứ %d là ngày trong tuần",number);
		}else{
			printf(" đây không phải ngày trong tuần");
		}
// 3. Nhập 2 số là giá trị của tháng và ngày. Kiểm tra xem đó là ngày thứ bao nhiêu trong năm, và đó là đang thứ mấy. Với giả sử rằng: ngày 1/1 là ngày thứ 2 và năm không nhuận
	int c;
	int d;
	scanf("%d",&c);
	scanf("%d",&d);
	if(d<=7){
		if(d%2=0){
			ngay= (a/2)*31 + (a/2 -1)*30 -2 + d;
			printf("ngày %d tháng %d là ngày số %d trong năm",c,d,ngay);
			thumay= ngay % 7;
			printf(" ngày %d là thứ %d trong năm",thumay );
		}else{
			ngay= [(a-1)/2]*31 + [(a-1)/2]*30 -2 + d;
			printf("ngày %d tháng %d là ngày số %d trong năm",c,d,ngay);
			thumay= ngay % 7;
			printf(" ngày %d là thứ %d trong năm",thumay );
		}
	}else{
		if(d%2=0){
			ngay = (d/2)*31+ [(a/2)-2]*30 -2 + d;
			printf("ngày %d tháng %d là ngày số %d trong năm",c,d,ngay);
			thumay= ngay % 7;
			printf(" ngày %d là thứ %d trong năm",thumay );
		}else{
			ngay = [(d+1)/2]*31+ [(a/2)-3]*30 -2 + d;
			printf("ngày %d tháng %d là ngày số %d trong năm",c,d,ngay);
			thumay= ngay % 7;
			printf(" ngày %d là thứ %d trong năm",thumay );
		}
	}
	// 4.- Nhập vào 3 số nguyên a,b,c. Kiểm tra xem đây có phải 3 cạnh của 1 tam giác hay không
	// Ở ý trên nếu là 3 cạnh tam giác, tính và in ra chu vi - diện tích tam giác.
	float canh1;
	float canh2;
	float canh3;
	float chieucao1;
	scanf("%f",&canh1);
	scanf("%f",&canh2);
	scanf("%f",&canh3);
		if((canh1 + canh2 > canh3) || (canh1 + canh3 > canh2) || (canh3 + canh2 > canh1)){
			prinntf("đây là 1 tam giác\n");
			float chieucao;
			float dientich= (chieucao1 + canh1)/2;
			float chuvi = canh1 + canh2 + canh3;
				printf(" chu vi của tam giác là %f\n",chuvi);
				printf("dien tich tam giác là %f\n", dientich);
			if((canh1=canh2) && (canh1=canh3) && (canh3=canh2)) {
				printf(" đây là tam giác đều\n");
			}else if ( (canh1=canh2) || (canh1=canh3) || (canh3=canh2)){
				printf(" đây là tam giác cân \n");
			}else if ( (canh1*canh1 = canh2*canh2 + canh3*canh3) ||(canh2*canh2 = canh1*canh1 + canh3*canh3) ||(canh3*canh3 = canh2*canh2 + canh1*canh1) )
				printf(" đây là tam giác vuông ");
			}
		}else{
			printf("đây không phải tam giác");
		}
}