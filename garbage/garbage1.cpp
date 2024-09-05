// #include<bits/stdc++.h>
// using namespace std;
// // class Item{
// //     private:
// //     int itemnum;
// //     float cost;
// //     public:
// //     inline void setitem(int num,float price){
// //         itemnum=num;
// //         cost=price;
// //     }
// //     inline float calculatetotal(int quantity) const{
// //         return cost*quantity;
// //     }
// // };
// // int main(){
// //     int itemnum;
// //     float cost;
// //     int quantity;
// //     cin >> itemnum;
// //     cin >> cost;
// //     cin >> cost;
    
// //     Item item;
// //     item.setitem(itemnum,cost);
// //     float totalcost = item.calculatetotal(quantity);
// //     cout <<"Total cost: "<< fixed << setprecision(2)<<totalcost<<endl;
// //     return 0;
// // }

// int main()
// {
// struct car{
//     string brand;

//     string model;

//     int year;


// }myCarl, myCar2;

// myCarl.brand="BMW";
// myCar2.model="Mustang";
// myCar2.year= 2004;
// cout<<myCar1.brand<<endl;
// }
#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int n, m;
    
    
    std::cin >> n;
    std::vector<int> dataset1(n);
    for(int i = 0; i < n; i++) {
        std::cin >> dataset1[i];
    }

    
    std::cin >> m;
    std::vector<int> dataset2(m);
    for(int i = 0; i < m; i++) {
        std::cin >> dataset2[i];
    }

    
    std::unordered_set<int> set1(dataset1.begin(), dataset1.end());
    std::vector<int> commonElements;

    
    for(int i = 0; i < m; i++) {
        if(set1.find(dataset2[i]) != set1.end()) {
            commonElements.push_back(dataset2[i]);
        }
    }

    
    if(!commonElements.empty()) {
        std::cout << "Common Elements: ";
        for(int elem : commonElements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Common Elements: None" << std::endl;
    }

    return 0;
}
