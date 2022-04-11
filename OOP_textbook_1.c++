#include <bits/stdc++.h>
using namespace std;

/* member和member function的介紹 */

class Animal{
  public:
    int year = 0; // public member, 也可以直接先初始化 member initializers

    int get_Weight(){
      return weight; // 跟 this->weight一樣。
    }; // 因為private member沒辦法直接存取，只好透過public member，起一定要用const才能存取

    void poop(); // public class member function declare. public函式宣告

    void drink_Water(int ml); // public class member function, pass by value

    void drink_Water_2(int &ml); // public class member function, pass by reference

    void drink_Water_3(int &ml) const; // 用const來保護所有member variables 

  private:
    int weight = 5; // private member, 只能透過class member function得到此member
};

/* class A{ // 
    int a; 預設private 
  public:
    int b;
} */


int main(){

  Animal a;
  cout << a.year << endl;
  // cout << a.weight << endl; 不可以，因為她是private
  cout << a.get_Weight() << endl; // 只能透過function輸出這個private。

  return 0;
}

/* Animal::get_Weight() const{ // 存取private member的function 一定要用const
  return this->weight; // 跟weight一樣
} */

void Animal::poop(){ // public class member function definition. public函式定義
  cout << "poop" << endl;
  return;
}

void Animal::drink_Water(int ml){ // public class member function definition. public函式定義
  cout << "drink "<< ml << " water" << endl;
  return;
}

void Animal::drink_Water_2(int &ml){ // public class member function definition. public函式定義
  cout << "drink "<< ml << " water" << endl;
  return;
}

void Animal::drink_Water_3(int &ml) const{ // 用const來保護所有member
  // year = 5; 會出錯 因為只能const
  cout << "drink "<< ml << " water" << endl;
  return;
}
