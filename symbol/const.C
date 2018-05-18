class A{
  public:
	A(int i);
	void print();
	const int &r;

  private:
	const int a;
	static const int b;
};

const int A::b = 10;
A::A(int i):a(i),r(a){

}


/*
   定义const对象
   const修饰符可以把对象转变成常数对象，意思就是说利用const进行修饰的变量的值在程序的任意位置将不能再被修改，就如同常数一样使用！任何修改该变量的尝试都会导致编译错误;
   注意：因为常量在定以后就不能被修改，所以定义时必须初始化：

   对于类中的const成员变量必须通过初始化列表进行初始化，



 */
