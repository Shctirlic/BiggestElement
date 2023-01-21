#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <tuple>
#include <unordered_map>
// leetcode.com




//class DataManager {
//
//public:
//    // map
//    // <key, value> key == it->first    value == it->second
//    // <key, value>
//    // <key, value>
//    // <key, value>
//    int mostSearchedKey() {
//        std::unordered_map<int, int> keyAmount;
//        for (size_t i = 0; i < _keys.size(); i++) {
//            const auto& [it, isInserted] = keyAmount.insert({ _keys[i], 1 });
//            if (!isInserted) {
//                int value = it->second;
//                value++;
//                keyAmount[_keys[i]] = value;
//            }
//        }
//        std::pair<int, int> key_biggestValue = {0,0};
//        for (std::unordered_map<int, int>::const_iterator it = keyAmount.begin();
//            it != keyAmount.end(); it++) {
//            if (key_biggestValue.second < it->second) {
//                key_biggestValue = std::make_pair(it->first, it->second);
//            }
//        }
//        return key_biggestValue.first;
//    }
//    
//private:
//    std::vector<int> _keys = { 1,1,2,2,4,2,6,7,7,7,2 };
//};
//
//int main()
//{
//   /* std::vector<int> vec{ 1,2,3 };
//    
//    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++) {
//        vec.erase(it);
//    }
//
//
//    std::map<int, std::string> mymap;
//
//    mymap.insert({ 5, "hey" });
//    mymap.insert({ 6, "hi" });
//    
//    auto p = std::make_pair<int, std::string>(1, "hello");
//
//    for (const auto& el : mymap) {
//        std::cout << el.first << " " << el.second << std::endl;
//    }
//    for (const auto& [x, y] : mymap) {
//        std::cout << x << " " << y << std::endl;
//    }*/
//
//    /*std::tuple<int, std::string, double, float> t { 1, "hey", 5.4, 2.3f };
//    const auto& [a, b, c, d] = t;
//    std::tuple<int, int, double> t2;
//    std::cout << a << " " << b << " " << c << " " << d << std::endl;
//    std::cout << std::get<0>(t) << std::endl;
//
//    std::vector<std::tuple<int, double, std::string>> vec;
//    vec.push_back({ 1, 2.5, "Bob" });
//    vec.push_back({ 2, 3.14, "Alice" });
//
//    for (size_t i = 0; i < vec.size(); i++) {
//        const auto& [x, y, z] = vec[i];
//        std::cout << x << " " << y << " " << z << std::endl;
//    }
//
//
//
//
//
//    std::cout << "Hello World!\n";*/
//
//
//    /*DataManager dm;
//    std::cout << dm.mostSearchedKey() << std::endl;*/
//
//    // try catch
//
//
//}


int divide(int a, int b) {
	if (b == 0) {
		throw "division by zero";
	}
	return a / b;
}

int errorFunc() {
	throw 0;

	return 1;
}

int main() {
	//int x = 10, y = 0;
	//try {
	//	errorFunc();
	//	std::cout << divide(x, y) << std::endl;
	//}
	//catch (const char* msg) {
	//	std::cerr << msg << std::endl;
	//}
	//catch (int e) {
	//	std::cerr << e << std::endl; 
	//}
	//catch (...) { // catch all - bad practice
	//	std::cerr << "Some exception has occured" << std::endl;
	//}


	std::vector<int> v{ 1, 2, 3 };
	try {
		int z = v.at(10); // v[10] - UB
	}
	catch (const std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
	}
}