#include "deposit.h"




int main(){
	int sum,time,flag=1;
	printf("deposit Amount\n");
	scanf("%d",&sum);
	
	printf("For how long ?\n");
	scanf("%d",&time);
	
	flag=conditions(sum,time);
	if (flag==0){
        return 0;
	}
	
	sum=calc(sum,time);
	printf("Your input at the time of expiry= %d\n",sum);

	return 0;
}
