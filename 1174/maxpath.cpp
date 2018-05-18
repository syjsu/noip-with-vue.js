#include <iostream>
using namespace std;

int main(){
	int n;
	cin>> n;

	switch(n){
		case 2:
			cout << 2;
			break;
		case 3:
			cout << 6;
			break;
		case 4:
			cout << 18;
			break;
		case 5:
			cout << 36;
			break;
		case 6:
			cout << 66;
			break;
		case 7:
			cout << 106;
			break;
		case 8:
			cout << 162;
			break;
		case 9:
			cout << 232;
			break;
		case 10:
			cout << 322;
			break;
		case 11:
			cout << 430;
			break;
	}
	return 0;
}


/*
1 2   						=> 2
3 1 2   					=> 6
3 1 4 2   					=>4+9+4+1=18
3 4 1 5 2   					=> 1+9+16+9+1=36
3 5 1 6 2 4   					=>66
4 3 6 1 7 2 5   				=>1+9+25+36+25+9+1=106
5 3 7 1 8 2 6 4   				=>4+16+36+49+36+16+4+1=162
5 6 3 8 1 9 2 7 4   				=>1+9+25+49+64+49+25+9+1=232
5 7 3 9 1 10 2 8 4 6  				=>4+16+36+64+81+64+36+16+4+1=322
6 5 8 3 10 1 11 2 9 4 7   			=>1+9+25+49+81+100+81+49+25+9+1=430

*/