#include <iostream> 

class A {
	protected: int a = 1;
	private: int b = 2;
	public:
		 A() {
			 std::cout << "A" << std::endl;
		 }
		 ~A() {
			 std::cout << "~A" << std::endl;
		 }
		 virtual bool foo() {
			 return true;
		 }
		 /*virtual ~A();
		 virtual void temp() = 0;  {
			 std::cout << __func__ << " A " << std::endl;
		 }*/

};

//A::~A() {
//	std::cout << "~A" << std::endl;
//}

class B : public A {
	public:
		int get_Aa() {
			return 3;
		}
		int get_Ab() {
			return 4;
		}
		B() {
			std::cout << "B" << std::endl;
		};
		~B() {
			std::cout << "~B" << std::endl;
		}
};

class C : public A {
	public:
		int get_Aa() {
			return 3;
		}
		int get_Ab() {
			return 4;
		}
		C() {
			std::cout << "C" << std::endl;
		};
		~C() {
			std::cout << "~C" << std::endl;
		}
};


class D : public B, public C {
	public:
		int get_Aa() {
			return 3;
		}
		int get_Ab() {
			return 4;
		}
		D() {
			std::cout << "D" << std::endl;
		};
		~D() {
			std::cout << "~D" << std::endl;
		}
};

int main() {
	/*class A * temp = new class B();
	delete temp;
	class A * temp1 = new class B();
	delete temp1;
	std::cout << "-------------------" << std::endl;
	A * a = new B();
	a->temp();
	delete a;
	B * b = new B();
	b->temp();
	delete b;
	std::cout << "-------------------" << std::endl;*/
	class D *t = new class D();
	delete t;
	t->B::foo();
	t->C::foo();
	return 0;
}
