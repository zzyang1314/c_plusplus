class A{
  friend std::ostream& operator<<(std::ostream &os, const A&);
  public:
  int operator*(){return b;}
  A* operator->(){return this;}
  int geta(){return a;}
  int getb(){return b;}
  private:
  int a = 0;
  int b = 1;
};

std::ostream& operator<<(std::ostream &os, const A& a){
  os<<a.a<<''<<a.b;
  return os;
}

int main(){
  A a;
  A *pa = &a;
  std::cout << *a <<',' << *a <<std::endl;
  std::cout << *pa << ',' << *pa <<std::endl;
  std::cout << a->geta()<<','<< a->getb() <<std::endl;

  return 0;
}


/*
   1、箭头运算符必须是类的成员函数。解引用运算符一般也应该声明为类的成员函数，但不是必须。
   2、箭头用算符返回值必须是一个指针，或者是一个重载了箭头运算符的对象。
   a）如果返回的是一个指针将调用内置的箭头运算符。执行相当于(*(p.operator->()).mem;的操作。

   b）如果返回是一个重载了箭头运算符的对象，则继续对该对象调用其重载了的箭头运算符，直到返回的是一个指针，将对该指针调用a)的操作。操作相当于(*(p.operator->().operator->())).mem;

   总的来说重载的箭头运算符就是为了改变从哪个对象中获取成员。
 */
