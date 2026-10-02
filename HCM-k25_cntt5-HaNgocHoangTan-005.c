#include <stdio.h>
#define MAX_SIZE 50 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tickets[MAX_SIZE] = {85,120,60,150,95};
int n = 6 ;
int choice; 
int main() {
	do{
	
	printf("===============================") ;
	printf("CHUONG TRINH QUAN LY VE BAN RA STARCINEMA");
	printf("===============================") ;
	printf("1. Them so ve ban ra\n ") ;
	printf("2. Sua so ve ban ra\n ") ;
	printf("3. Tim kiem so ve ban ra\n"); 
	printf("4. Thoat chuong trinh\n");
	printf("===============================") ;
	printf("Nhap lua chon cua ban(1-4)\n: ") ;
	if (scanf("%d", &choice)!= 1){
		printf("Du lieu khong hop le");
		
	};
	switch(choice){
		case 1: {
			
		
			int value;
			int pos; 
		if(n > MAX_SIZE) {
			printf("Mang da day khong the them");
			break; 
		};
		printf("Nap vao gia tri  ve ban muon them");
		if(scanf("%d", &value)!= 1){
				printf("Du lieu khong hop le");
		while(getchar()!='\n'){};
		
		break; 
	}
		printf("Nhap vao vi tri ma ban muon them");
			if(scanf("%d", &pos)!= 1){
				printf("Du lieu khong hop le");
		while(getchar()!=1){};
		
		break; 
	}
		if(pos < 1 && pos > n+1) {
			printf("Vi tri chen khong hop le ") ;
			break ;
		};
		for(int i =n; i>=pos;i--){
		tickets[i] = tickets[i-1];
	};
		tickets[pos-1] ;
		n++;
		break; 
		};
		case 2: {
			int newvalue;
			int pos ;
			if(n == 0) {
			printf("Mang rong khong the sua ");
			break; 
		};
			printf("Nap vao gia tri  ve ban muon sua: ");
		if(scanf("%d", &newvalue)!= 1){
				printf("Du lieu khong hop le");
		while(getchar()!='\n'){};
		
		break; 
	};
	    if(newvalue < 0 ) {
	    	printf("gia tri nhap khong duoc la so am\n");
		};
		
		printf("Nhap vao vi tri ma ban muon them:");
		if(scanf("%d", &pos)!= 1){
		printf("Du lieu khong hop le.\n");
		while(getchar()!=1){}
		
		break; 
	};
		if(pos < 1 && pos > n+1) {
			printf("Vi tri them khong hop le ") ;
			break ;
		};
		tickets[pos-1] = newvalue; 
			break;
		} ;
		case 3 :{
		
		int  pos;
				if(n == 0) {
			printf("Mang rong khong the xoa ");
			
		};
			printf("Nhap vao vi tri ma ban muon them:");
		if(scanf("%d", &pos)!= 1){
		printf("Du lieu khong hop le");
		while(getchar()!=1){};
		
		break; 
	};
		if(pos < 1 && pos > n+1) {
			printf("Vi tri xoa khong hop le ") ;
			break ;
			}
		for(int i = pos-1; i < n-1; i++){
		 tickets[i] = tickets[i+1]; 
	}
		n--; 
		break; 
		};
		case 0:{
			
		printf("Da thoat chong trinh") ;
		break; 
	};
		default :{
			printf("Lưa chon khong hop le") ;
			break;
		} ;
		};
}while(choice!=0);
	return 0;

}
