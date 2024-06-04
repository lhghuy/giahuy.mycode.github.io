int gt(int k,int n){
	int ans = 1;
	for(int i=0;i<k;++i){
		ans = ans *(n-i)/(i+1);
	}
	return ans;
}

