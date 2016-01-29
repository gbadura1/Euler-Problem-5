#include <iostream>
#include <string>
#include <vector>

bool divisible(int x, int y){
	if (x%y == 0) { return true; }
	else { return false; }
}

int main(){
	int temp, mult, min;
	bool is_div;
	int div[9] = { 20, 19, 18, 17, 16, 15, 14, 13, 11 };
	std::vector<int> my_vector(div, div + sizeof(div)/sizeof(int));
	for (int i = 19*17*13*11;; i++){
		mult = i * 19;
		is_div = true;
		for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); ++it){
			temp = *it;
			if (!divisible(mult,temp)){ is_div = false; }
		}
		if (is_div == true){
			min = mult;
			break;
		}
	}
	std::cout << "The minimum divisible by all from 20-1 is " << min;
	return 0;
}