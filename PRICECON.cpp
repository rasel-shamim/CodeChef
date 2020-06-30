#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int count =0,n,k,x,i;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&x);
			if(x>k)
				count += (x - k);
		}
		printf("%d\n",count);
	}
	return 0;
}
