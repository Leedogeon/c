#include<stdio.h>
#include<math.h>
int main(){
    int a,i,j,k;
    int scnt=0,chk=0,cf=0,cf2=0,cb=0,cb2=0,p1=0,p2=0;
    char num[7];
    for(i=0;i<7;i++){
    	num[i]='a';
	}
    scanf("%d",&a);
    for(i=0;i<a;i++){
		cf2=cf;
    	cb2=cb;
    	num[4]=6;
		num[5]=6;
    	num[6]=6;
        
		if(cb2!=0){
            for(k=6;k>=j+1;k--){
              		num[k]=cb2%10;
                    cb2 = (cb2-cb2%10)/10;
            }
        }
        else for(k=3;k>=0;k--){
            	if(cf2==0)break;
            	num[k]=cf2%10;
            	cf2 = (cf2-cf2%10)/10;
		}
			
        for(j=0;j<7;j++){
            if(num[j]==6) scnt++;
			else scnt =0;
			if(scnt==3){
                if(j<=5){
                    if(chk==0){
					cb++;
                        for(k=j+1;k<=6;k++){
                            num[k]=0;
                            chk++;
                    }
                }
                    else {
                        cb++;
                        if(cb>=pow(10,(6-j))){
                        cf++;
                        cf2++;
                        cb=0,chk=0;
                        }
                    }
            }
                else cf++;
                scnt=0;
                break;
        	    }
    		}
	}
	     for(k=0;k<7;k++){
           	if(num[k]!='a')	printf("%d", num[k]);
	}
}
