#include<iostream>
int main() {
char ch='E';
char gh='a';
int s=0;
	for(int i=0;i<4;i++)  {
		for(int s=0;s<i;s++) {
				std::cout<<"  ";
		}
			for(int j=i+1;j<=4;j++) {
				if((j+s)%2==0) {
					std::cout<<gh<<" ";
					gh++;
				}
				else {
					std::cout<<ch<<" ";
					ch--;
				}
			}
		
		std::cout<<std::endl;
	}
}

