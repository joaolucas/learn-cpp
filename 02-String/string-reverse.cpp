#include <iostream>
#include <string.h>
using namespace std;

void reverse(char *x, int begin, int end){
	
	if(begin>=end)
		return;

	char c;
	c = *(x + begin);
	*(x + begin)= *(x + end);
	*(x + end) = c;

	reverse(x, ++begin, --end);
		

}
int main(){

	char a[100];
	cin >> a;
	
	reverse(a, 0, strlen(a)-1);
	cout << a;
	return 0;
}
