int main(){
    int a1,a2,i,k=0;
    
    printf("Insira o primeiro termo da sequencia:");
    scanf("%d",&a1);
    printf("Insira o segundo termo da sequencia:");
    scanf("%d",&a2);
    
    
    for(i = 3; i < 11;i++){
    	
    	if(i%2 == 0){
    		k = a1 - a2;
    		
		}
		else{
			k = a1 + a2;
		}
	
    	a1 = a2;
    	a2 = k;
    	printf("%d\n",k);
	}
    return 0;
}