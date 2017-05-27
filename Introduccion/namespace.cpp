#include<iostream>

namespace Foo{
	int operando(int x, int y){
		return x + y;
	}
}

namespace Goo{
	int operando(int x, int y){
		return x - y;
	}
}
int main(){
	std::cout << Foo::operando(4,3)<<"\n";
	std::cout << Goo::operando(4,3)<<"\n";
	return 0;
}
