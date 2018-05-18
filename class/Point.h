class Point{
  public:
	void setPoint(int x, int y);//在类内对成员函数进行声明
	void printPoint();

  private:
	int xPos;
	int yPos;
};

void Point::setPoint(int x, int y){//通过作用域实现‘::’setPoint函数
  xPos = x;
  yPos = y;
}

void Point::printPoint(){//实现printPoint 函数
  cout << "x = "<< xPos << endl;
  cout << "y = "<< yPos << endl;
}

