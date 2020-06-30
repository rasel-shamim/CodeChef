#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int ten = 0,five = 0,fifteen = 0,n,i,xoss;
		bool possible = true;
		scanf("%d",&n);
		int x;
		for(i=0;i<n;i++){
			scanf("%d",&x);
			if(x==5){
				possible = true;
				five++;
			}
			else if(x==10 && five!=0){
				five--;
				possible = true;
				ten++;
			}
			else if(x==15 && ten!=0){
				ten--;
				possible = true;
				fifteen++;
			}
			else if(x==15 && five>=2){
				five -= 2;
				possible = true;
			}
			else{
				possible = false;
				xoss = 0;
				break;
			}
		}
		
		if(possible && !xoss)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}
