#include <bits/stdc++.h>
using namespace std;

class AlternatingSum{
private:
    long long result;
    bool addNext;

public:
    AlternatingSum(long long num){
        result = num;
        addNext = false;
    }
    AlternatingSum operator()(long long num){
        if(addNext){
            result += num;
        }
        else{
            result -= num;
        }
        addNext = !addNext;
        return *this;
    }
    operator long long() const {
        return result;
    }
};

AlternatingSum add_subtract(long long num){
    return AlternatingSum(num);
}
int main() {
    cout<<(long long)add_subtract(7)<<endl;      
    cout<<(long long)add_subtract(1)(2)(3)<<endl; 
    cout<<(long long)add_subtract(-5)(10)(3)(9)<<endl;
    cout<<(long long)add_subtract(5)(6)(7)<<endl;
    return 0;
}