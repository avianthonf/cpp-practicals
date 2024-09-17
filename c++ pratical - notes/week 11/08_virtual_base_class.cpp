// 8. Program with virtual base class 
#include <iostream>

using namespace std;

class A { 
public:  
   void showA(){  
      cout<<"Class A"<<endl;  
   }  
};  

class B : virtual public A {  
public:  
   void showB(){  
      cout<<"Class B"<<endl;  
   }  
};  

class C : virtual public A {  
public:  
   void showC(){  
      cout<<"Class C"<<endl;  
   }  
};  

class D : public B, public C {  
public:  
   void showD(){  
      showA();  
      showB();  
      showC();  
      cout<<"Class D"<<endl;  
   }  
};  

int main(){  
   D obj;  
   obj.showD();  
   return 0;  
}

/* 
This program illustrates virtual base classes in C++. By making Classes B and C inherit virtually from Class A, we ensure that only one instance of A exists even if it is inherited through multiple paths (from B and C). This eliminates ambiguity when accessing members of A through instances of B or C.
In this example, when we create an object of Class D and call its methods, it can access methods defined in all inherited classes without any ambiguity regarding which instance of A is being referred to.
*/

