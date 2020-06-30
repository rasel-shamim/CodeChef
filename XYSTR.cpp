#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		char str[3000001];
   	    scanf("%s",str);
   	    int len = strlen(str),count =0,i;
   	    for(i=0;i<len;i++){
   	   	    if((str[i]=='x' && str[i+1]=='y') || (str[i]=='y' && str[i+1]=='x')){
   	   	   	   i++;
   	   	   	   count++;
   	   	    }
   	    }
   	    printf("%d\n",count);
	}
	return 0;
}
