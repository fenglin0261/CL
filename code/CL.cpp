#include <iostream>
#include <ctime>
#include <iostream>
#include <fstream>
#include <vector>
#include <csignal>
#include <Windows.h>
#include <WinBase.h>


#pragma warning(disable:4996) 


using namespace std;


// C_Reference
void C_Reference()
{
    //  声明简单的变量
    int i;
    double d;

    // 声明引用变量
    int& r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;


}
// end C_Reference

// C_Take_reference_as_parameter
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    return;
}

void C_Take_reference_as_parameter()
{
    int a = 100;
    int b = 200;

    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;

    /* 调用函数来交换值 */
    swap(a, b);

    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
}
// end C_Take_reference_as_parameter

// C_Take_reference_as_return_value
double vals1[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

double& setValues(int i) 
{
    double& ref = vals1[i];
    return ref;
}

void C_Take_reference_as_return_value()
{
    cout << "改变前的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Vals[" << i << "] = ";
        cout << vals1[i] << endl;
    }

    setValues(1) = 20.23;
    setValues(3) = 70.8;

    cout << "改变后的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Vals[" << i << "] = ";
        cout << vals1[i] << endl;
    }
}
// end C_Take_reference_as_return_value

// Current_date_and_time
void Current_date_and_time()
{
    time_t now = time(0);

    char* dt = ctime(&now);
      
    cout << "本地日期和时间：" << dt << endl;

    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);

    cout << "UTC 日期和时间：" << dt << endl;
}
// end Current_date_and_time


// Format_time_using_struct_tm
void Format_time_using_struct_tm()
{
    time_t now = time(0);

    cout << "1970到目前经过秒数：" << now << endl;

    tm* ltm = localtime(&now);

    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月：" << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_wday << endl;
    cout << "时间：" << ltm->tm_hour << endl;
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}
// end Format_time_using_struct_tm


// Standard_output_stream_cout
void Standard_output_stream_cout()
{
    char str[] = "Hello C++";

    cout << "Value of str is: " << str << endl;
}
// end Standard_output_stream_cout

// Standard_input_stream_cin
void Standard_input_stream_cin()
{
    char name[50];

    cout << "请输入您的名称： ";
    cin >> name;

    cout << "您的名称是：" << name << endl;
}
// end Standard_input_stream_cin

// Standard_error_flow
void Standard_error_flow()
{
    char str[] = "Uable to read....";
    cerr << "Error message: " << str << endl;
}
// end Standard_error_flow


// Standard_log_stream
void Standard_log_stream()
{
    char str[] = "Unable to read....";
    clog << "Error message: " << str << endl;
}
// end Standard_log_stream

// Accessing_Data_Members
//class Box
//{
//    public:
//        double length;
//        double breadth;
//        double height;
//
//        double get(void);
//        void set(double len, double bre, double hei);
//};
//
//double Box::get(void)
//{
//    return length * breadth * height;
//}
//
//void Box::set(double len, double bre, double hei)
//{
//    length = len;
//    breadth = bre;
//    height = hei;
//}
//
//void Accessing_Data_Members()
//{
//    Box Box1;
//    Box Box2;
//    Box Box3;
//    double volume = 0.0;
//
//    Box1.height = 5.0;
//    Box1.length = 6.0;
//    Box1.breadth = 7.0;
//
//    Box2.height = 10.0;
//    Box2.length = 12.0;
//    Box2.breadth = 13.0;
//
//    volume = Box1.height * Box1.length * Box1.breadth;
//    cout << "Box1的体积：" << volume << endl;
//
//    volume = Box2.height * Box2.length * Box2.breadth;
//    cout << "Box2的体积：" << volume << endl;
//
//    Box3.set(16.0, 8.0, 12.0);
//    volume = Box3.get();
//    cout << "Box3 的体积：" << volume << endl;
//}
//// end Accessing_Data_Members

// Class_member_function
//class Box
//{
//public:
//    double length;
//    double breadth;
//    double height;
//
//    double getVolume(void);
//    void setLength(double len);
//    void setBreadth(double bre);
//    void setHeight(double hei);
//};
//
//double Box::getVolume(void)
//{
//    return length * breadth * height;
//}
//
//void Box::setLength(double len)
//{
//    length = len;
//}
//
//void Box::setBreadth(double bre)
//{
//    breadth = bre;
//}
//
//void Box::setHeight(double hei)
//{
//    height = hei;
//}
//
//void Class_member_function()
//{
//    Box Box1;
//    Box Box2;
//    double volume = 0.0;
//
//    Box1.setLength(6.0);
//    Box1.setBreadth(7.0);
//    Box1.setHeight(5.0);
//
//    Box2.setLength(12.0);
//    Box2.setBreadth(13.0);
//    Box2.setHeight(10.0);
//
//    volume = Box1.getVolume();
//    cout << "Box1 的体积：" << volume << endl;
//
//    volume = Box2.getVolume();
//    cout << "Box2 的体积：" << volume << endl;
//}
// end Class_member_function

// public_members
//class Line
//{
//public:
//    double length;
//    void setLength(double len);
//    double getLength(void);
//};
//double Line::getLength(void)
//{
//    return length;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//void public_members(void)
//{
//    Line line;
//
//    line.setLength(6.0);
//    cout << "Length of Line：" << line.getLength() << endl;
//
//    line.length = 10.0;
//    cout << "Length of line：" << line.length << endl;
//
//    return;
//}
// end public_members

// private_members
//class Box
//{
//public:
//    double length;
//    void setWidth(double wid);
//    double getWidth(void);
//
//private:
//    double width;
//};
//
//double Box::getWidth(void)
//{
//    return width;
//}
//
//void Box::setWidth(double wid)
//{
//    width = wid;
//}
//
//void public_members()
//{
//    Box box;
//
//    box.length = 10.0;
//    cout << "Length of box：" << box.length << endl;
//
//    box.setWidth(10.0);
//    cout << "Width of box：" << box.getWidth() << endl;
//
//    return;
//}
// end public_members

// protected_members
//class Box
//{
//protected:
//    double width;
//};
//
//class SmallBox:Box
//{
//public:
//    void setSmallWidth(double wid);
//    double getSmallWidth(void);
//};
//
//double SmallBox::getSmallWidth(void)
//{
//    return width;
//}
//
//void SmallBox::setSmallWidth(double wid)
//{
//    width = wid;
//}
//
//void protected_members()
//{
//    SmallBox box;
//
//    box.setSmallWidth(5.0);
//    cout << "Width of box：" << box.getSmallWidth() << endl;
//    
//    return;
//}
// end protected_members

// Public_inheritance
//class A {
//public:
//    int a;
//    A()
//    {
//        a1 = 1;
//        a2 = 2;
//        a3 = 3;
//        a = 4;
//    }
//public:
//    int a1;
//protected:
//    int a2;
//private:
//    int a3;
//};
//
//class B :public A {
//public:
//    int a;
//    B(int i) 
//    {
//        A();
//        a = 1;
//    }
//    void fun()
//    {
//        cout << a << endl;
//        cout << a1 << endl;
//        cout << a2 << endl;
//        //cout << a3 << endl;
//    }
//};
//
//void Public_inheritance()
//{
//    B b(10);
//
//    cout << b.a << endl;
//    cout << b.a1 << endl;
//    //cout << b.a2 << endl;
//    //cout << b.a3 << endl;
//
//    return;
//}
// end Public_inheritance

// Protected_inheritance
//class A {
//public:
//    int a;
//    A() {
//        a1 = 1;
//        a2 = 2;
//        a3 = 3;
//        a = 4;
//    }
//    void fun()
//    {
//        cout << a << endl;
//        cout << a1 << endl;
//        cout << a2 << endl;
//        cout << a3 << endl;
//    }
//public:
//    int a1;
//protected:
//    int a2;
//private:
//    int a3;
//};
//
//class B :protected A {
//public:
//    int a;
//    B(int i) {
//        A();
//        a = i;
//    }
//    void fun(){
//        cout << a << endl;
//        cout << a1 << endl;
//        cout << a2 << endl;
//        //cout << a3 << endl;
//    }
//};
//
//void Protected_inheritance()
//{
//    B b(10);
//
//    cout << b.a << endl;
//    //cout << b.a1 << endl;
//    //cout << b.a2 << endl;
//    //cout << b.a3 << endl;
//
//    return;
//}
// end Protected_inheritance

// Private_inheritance
//class A {
//public:
//    int a;
//    A()
//    {
//        a1 = 1;
//        a2 = 2;
//        a3 = 3;
//        a = 4;
//    }
//    void fun()
//    {
//        cout << a << endl;
//        cout << a1 << endl;
//        cout << a2 << endl;
//        cout << a3 << endl;
//    }
//
//public:
//    int a1;
//protected:
//    int a2;
//private:
//    int a3;
//};
//class B : private A {
//public:
//    int a;
//    B(int i) {
//        A();
//        a = i;
//    }
//    void fun() {
//        cout << a << endl;       //正确，public成员。
//        cout << a1 << endl;       //正确，基类public成员,在派生类中变成了private,可以被派生类访问。
//        cout << a2 << endl;       //正确，基类的protected成员，在派生类中变成了private,可以被派生类访问。
//        //cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
//    }
//};
//
//void Private_inheritance()
//{
//    B b(10);
//    cout << b.a << endl;       //正确。public成员
//    //cout << b.a1 << endl;      //错误，private成员不能在类外访问。
//    //cout << b.a2 << endl;      //错误, private成员不能在类外访问。
//    //cout << b.a3 << endl;      //错误，private成员不能在类外访问。
//
//    return;
//}
// end Private_inheritance

// Constructor_of_class
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//    Line();
//
//private:
//    double length;
//
//};
//
//Line::Line(void)
//{
//    cout << "Object is being created" << endl;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//
//
//void Constructor_of_class()
//{
//    Line line;
//
//    // 设置长度
//    line.setLength(6.0);
//    cout << "Length of line : " << line.getLength() << endl;
//
//    return;
//}
// end Constructor_of_class

// Constructor_with_parameters
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//
//    Line(double len);
//
//private:
//    double length;
//
//};
//
//Line::Line(double len)
//{
//    cout << "Object is being created, length = " << len << endl;
//    length = len;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//
//void Constructor_with_parameters()
//{
//    Line Line(10.0);
//
//    // 获取默认设置的长度
//    cout << "Length of line : " << Line.getLength() << endl;
//    // 再次设置长度
//    Line.setLength(6.0);
//    cout << "Length of line : " << Line.getLength() << endl;
//}
// end Constructor_with_parameters

// Destructor_of_class
//class Line
//{
//public:
//    void setLength(double len);
//    double getLength(void);
//    Line();
//    ~Line();
//
//private:
//    double length;
//};
//
//Line::Line(void)
//{
//    cout << "Object is being created" << endl;
//}
//
//Line::~Line(void)
//{
//    cout << "Object is being deleted" << endl;
//}
//
//void Line::setLength(double len)
//{
//    length = len;
//}
//
//double Line::getLength(void)
//{
//    return length;
//}
//
//void Destructor_of_class()
//{
//    Line line;
//    // 设置长度
//    line.setLength(6.0);
//    cout << "Length of line : " << line.getLength() << endl;
//
//    return;
//}
// end Destructor_of_class

// C_copy_constructor1
//class Line
//{
//public:
//    int getLength(void);
//    Line(int len);
//    Line(const Line& obj);
//    ~Line();
//
//private:
//    int* ptr;
//};
//
//Line::Line(int len)
//{
//    cout << "调用构造函数" << endl;
//
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//
//    ptr = new int;
//    *ptr = *obj.ptr;
//}
//
//Line::~Line(void)
//{
//    cout << "释放内存" << endl;
//    delete ptr;
//}
//
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line 大小 : " << obj.getLength() << endl;
//}
//
//void C_copy_constructor1()
//{
//    Line line(10);
//
//    display(line);
//
//    return;
//}
// end C_copy_constructor1

// C_copy_constructor2
//class Line
//{
//public:
//    int getLength(void);
//    Line(int len);             // 简单的构造函数
//    Line(const Line& obj);      // 拷贝构造函数
//    ~Line();                     // 析构函数
//
//private:
//    int* ptr;
//};
//
//// 成员函数定义，包括构造函数
//Line::Line(int len)
//{
//    cout << "调用构造函数" << endl;
//    // 为指针分配内存
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line& obj)
//{
//    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//    ptr = new int;
//    *ptr = *obj.ptr; // 拷贝值
//}
//
//Line::~Line(void)
//{
//    cout << "释放内存" << endl;
//    delete ptr;
//}
//
//int Line::getLength(void)
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//    cout << "line 大小 : " << obj.getLength() << endl;
//}
//
//void C_copy_constructor2()
//{
//    Line line1(10);
//    Line line2 = line1;
//
//    display(line1);
//    display(line2);
//
//    return;
//}
// end C_copy_constructor2

// Friend_function
//class Box
//{
//    double width;
//public:
//    friend void printWidth(Box box);
//    void setWidth(double wid);
//};
//
//void Box::setWidth(double wid)
//{
//    width = wid;
//}
//
//void printWidth(Box box)
//{
//    cout << "Width of box : " << box.width << endl;
//}
//
//void Friend_function()
//{
//    Box box;
//
//    // 使用成员函数设置宽度
//    box.setWidth(10.0);
//
//    printWidth(box);
//
//    return;
//}
// end Friend_function

// C_nested_function
inline int Max(int x, int y)
{
    return (x > y) ? x : y;
}

void C_nested_function()
{
    cout << "Max(20, 10): " << Max(20, 10) << endl;
    cout << "Max(0, 200): " << Max(0, 200) << endl;
    cout << "Max(100, 1010): " << Max(100, 1010) << endl;

    return;
}
//end C_nested_function

// C_this_pointer
//class Box
//{
//public:
//    Box(double l = 2.0, double b = 2.0, double h = 2.0)
//    {
//        cout << "Constructor called." << endl;
//        length = l;
//        breadth = b;
//        height = h;
//    }
//    double Volume()
//    {
//        return length * breadth * height;
//    }
//    int compare(Box box)
//    {
//        return this->Volume() > box.Volume();
//    }
//
//private:
//    double length;
//    double breadth;
//    double height;
//};
//
//void C_this_pointer()
//{
//    Box Box1(3.3, 1.2, 1.5);
//    Box Box2(8.5, 6.0, 2.0);
//
//    if (Box1.compare(Box2))
//    {
//        cout << "Box2 is smaller than Box1" << endl;
//    }
//    else
//    {
//        cout << "Box2 is equal to or langger than Box1" << endl;
//    }
//
//    return;
//}

//end C_this_pointer


// C_pointer_to_class
//class Box
//{
//public:
//    Box(double l = 2.0, double b = 2.0, double h = 2.0)
//    {
//        cout << "Constructor called." << endl;
//        length = l;
//        breadth = b;
//        height = h;
//    }
//    double Volume()
//    {
//        return length * breadth * height;
//    }
//
//private:
//    double length;
//    double breadth;
//    double height;
//};
//
//void C_pointer_to_class()
//{
//    Box Box1(3.3, 1.2, 1.5);
//    Box Box2(8.5, 6.0, 2.0);
//
//    Box* ptrBox;
//    
//    ptrBox = &Box1;
//    cout << "Volume of Box1:" << ptrBox->Volume() << endl;
//
//    ptrBox = &Box2;
//
//    cout << "Volume of Box2:" << ptrBox->Volume() << endl;
//
//    return;
//}
// end C_pointer_to_class


// C_static_member_of_class
//class Box
//{
//public:
//    static int objectCount;
//    Box(double l = 2.0, double b = 2.0, double h = 2.0)
//    {
//        cout << "Constructor called." << endl;
//        length = l;
//        breadth = b;
//        height = h;
//        objectCount++;
//    }
//    double Volume()
//    {
//        return length * breadth * height;
//    }
//
//private:
//    double length;
//    double breadth;
//    double height;
//};
//
//int Box::objectCount = 0;
//
//
//void C_static_member_of_class()
//{
//    Box Box1(3.3, 1.2, 1.5);
//    Box Box2(8.5, 6.0, 2.0);
//
//    cout << "Total objects:" << Box::objectCount << endl;
//
//    return;
//}

// end C_static_member_of_class

// Class_static_function
//class Box
//{
//public:
//    static int objectCount;
//
//    Box(double l = 2.0, double b = 2.0, double h = 2.0)
//    {
//        cout << "Constructor called." << endl;
//        length = l;
//        breadth = b;
//        height = h;
//        objectCount++;
//    }
//    double Volume()
//    {
//        return length * breadth * height;
//    }
//    static int getCount()
//    {
//        return objectCount;
//    }
//
//private:
//    double length;
//    double breadth;
//    double height;
//};
//
//int Box::objectCount = 0;
//
//
//void Class_static_function()
//{
//    cout << "Initial Stage Count: " << Box::getCount() << endl;
//
//    Box Box1(3.3, 1.2, 1.5);
//    Box Box2(8.5, 6.0, 2.0);
//
//    cout << "Final sStage Count:" << Box::getCount() << endl;
//
//    return;
//}
// end Class_static_function

// C_function_overloading
//class PrintData
//{
//public:
//    void print(int i)
//    {
//        cout << "整数为：" << i << endl;
//    }
//    void print(double i)
//    {
//        cout << "浮点数为：" << i << endl;
//    }
//    void print(char i[])
//    {
//        cout << "字符串为：" << i << endl;
//    }
//
//};
//
//void C_function_overloading()
//{
//    PrintData pd;
//
//    pd.print(5);
//    pd.print(500.263);
//
//    char c[] = "Hello C++";
//    pd.print(c);
//
//    return;
//}
// end C_function_overloading

// C_operator_overloading
//class Box
//{
//public:
//    double getVolume(void)
//    {
//        return length * breadth * height;
//    }
//    void setLength(double len)
//    {
//        length = len;
//    }
//    void setBreadth(double bre)
//    {
//        breadth = bre;
//    }
//    void setHeight(double hei)
//    {
//        height = hei;
//    }
//
//    Box operator+(const Box& b)
//    {
//        Box box;
//        box.length = b.length + this->length;
//        box.height = b.height + this->height;
//        box.breadth = b.breadth + this->breadth;
//
//        return box;
//    }
//
//private:
//    double length;
//    double breadth;
//    double height;
//};
//void C_operator_overloading()
//{
//    Box box1;
//    Box box2;
//    Box box3;
//
//    double volume = 0.0;
//
//    box1.setLength(6.0);
//    box1.setHeight(5.0);
//    box1.setBreadth(7.0);
//
//    box2.setLength(12.0);
//    box2.setBreadth(13.0);
//    box2.setHeight(10.0);
//
//
//    volume = box1.getVolume();
//    cout << "Volume of Box1 :" << volume << endl;
//
//    volume = box2.getVolume();
//    cout << "Volume of Box2 :" << volume << endl;
//
//    box3 = box1 + box2;
//
//    volume = box3.getVolume();
//
//    cout << "Volume of Box3 :" << volume << endl;
//
//    return;
//}
// end C_operator_overloading

// C_polymorphism
//class Shape
//{
//protected:
//    int width, height;
//public:
//    Shape(int a = 0, int b = 0)
//    {
//        width = a;
//        height = b;
//    }
//    virtual int area() = 0;
//};
//
//class Rectangle :public Shape
//{
//public:
//    Rectangle(int a =0, int b=0):Shape(a, b)
//    {
//    }
//    int area()
//    {
//        cout << "Rectangle class area :" << endl;
//        return (width * height);
//    }
//};
//
//class Triangle :public Shape
//{
//public:
//    Triangle(int a = 0, int b = 0) :Shape(a, b)
//    {
//    }
//    int area()
//    {
//        cout << "Triangle class erea :" << endl;
//        return (width * height / 2);
//    }
//};
//
//void C_polymorphism()
//{
//    Shape* shape;
//    Rectangle rec(10, 7);
//    Triangle tri(10, 5);
//
//    shape = &rec;
//    shape->area();
//
//    shape = &tri;
//    shape->area();
//
//    return;
//}
// end C_polymorphism

// Data_abstraction
//class Adder
//{
//public:
//    Adder(int i = 0)
//    {
//        total = i;
//    }
//    void addNum(int number)
//    {
//        total += number;
//    }
//    int getTotal()
//    {
//        return total;
//    }
//
//private:
//    int total;
//};
//
//void Data_abstraction()
//{
//    Adder a;
//    a.addNum(10);
//    a.addNum(20);
//    a.addNum(30);
//
//    cout << "Total " << a.getTotal() << endl;
//
//    return;
//}

// end Data_abstraction

// Abstract_class
//class Shape
//{
//public:
//    virtual int getArea() = 0;
//    void setWidth(int w)
//    {
//        width = w;
//    }
//    void setHeight(int h)
//    {
//        height = h;
//    }
//protected:
//    int width;
//    int height;
//};
//
//class Rectangle :public Shape
//{
//public:
//    int getArea()
//    {
//        return (width * height);
//    }
//};
//
//class Triangle :public Shape
//{
//public:
//    int getArea()
//    {
//        return (width * height) / 2;
//    }
//};
//
//void Abstract_class()
//{
//    Rectangle Rect;
//    Triangle Tri;
//
//    Rect.setWidth(5);
//    Rect.setHeight(7);
//
//    cout << "Total Rectangle area: " << Rect.getArea() << endl;
//
//    Tri.setWidth(5);
//    Tri.setHeight(7);
//
//    cout << "Total Triangle area: " << Tri.getArea() << endl;
//
//    return;
//}
// end Abstract_class


// Files_and_streams
void Files_and_streams()
{
    char data[100];

    ofstream outfile;
    outfile.open("afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    outfile << data << endl;

    outfile.close();

    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;

    cout << data << endl;

    infile.close();

    return;
}
// end Files_and_streams

// Catch_exception
//double division(int a, int b)
//{
//    if (b == 0)
//    {
//        throw "Division by zero condidtion";
//    }
//    return (a / b);
//}
//
//void Catch_exception()
//{
//    int x = 50;
//    int y = 0;
//    double z = 0;
//
//    try {
//        z = division(x, y);
//        cout << z << endl;
//    }
//    catch (const char* msg)
//    {
//        cerr << msg << endl;
//    }
//
//    return;
//}

// end Catch_exception

// Define_new_exception
//struct MyException:public exception
//{
//    const char* what() const throw()
//    {
//        return "C++ Exception";
//    }
//};
//
//void Define_new_exception()
//{
//    try
//    {
//        throw MyException();
//    }
//    catch (MyException & e)
//    {
//        cout << "MyException caught" << endl;
//        cout << e.what() << endl;
//    }
//    catch (exception& e)
//    {
//
//    }
//}
// end Define_new_exception

// Function_template
//template <typename T>
//inline T const& Max(T const& a, T const& b)
//{
//    return a < b ? b : a;
//}
//
//void Function_template()
//{
//    int i = 39;
//    int j = 20;
//
//    cout << "Max(i, j): " << Max(i, j) << endl;
//
//    double f1 = 13.5;
//    double f2 = 20.7;
//
//    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
//
//    string s1 = "Hello";
//    string s2 = "World";
//
//    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
//
//    return;
//}
// end Function_template

// Class_template
//template <class T>
//class Stack {
//private:
//    vector<T> elems;
//public:
//    void push(T const&);
//    void pop();
//    T top() const;
//    bool empty() const {
//        return elems.empty();
//    }
//};
//
//
//template <class T>
//void Stack<T>::push(T const& elem)
//{
//    elems.push_back(elem);
//}
//
//template <class T>
//void Stack<T>::pop()
//{
//    if (elems.empty())
//    {
//        throw out_of_range("Stack<>::pop():empty stack");
//    }
//    elems.pop_back();
//}
//
//template <class T>
//T Stack<T>::top() const
//{
//    if (elems.empty()) {
//        throw out_of_range("Stack<>::top(): empty stack");
//    }
//    return elems.back();
//}
//void Class_template()
//{
//    try {
//        Stack<int>  intStack;
//        Stack<string> stringStack;
//
//        intStack.push(7);
//        cout << intStack.top() << endl;
//
//        stringStack.push("hello");
//        cout << stringStack.top() << endl;
//        stringStack.pop();
//        stringStack.pop();
//    }
//    catch (exception const& ex) {
//        cerr << "Exception: " << ex.what() << endl;
//        return;
//    }
//}

// end Class_template

// C_predefined_macro
void C_predefined_macro()
{
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
    
    return;
}
// end C_predefined_macro

// Signal_function
//void signalHandler(int signum)
//{
//    cout << "Interrupt signal(" << signum << ") received." << endl;
//
//    exit(signum);
//}
//
//void Signal_function()
//{
//    signal(SIGINT, signalHandler);
//
//    while (true)
//    {
//        cout << "Going to sleep...." << endl;
//        Sleep(1);
//    }
//
//    return;
//}
// end Signal_function

// Raise_function
//void signalHandle(int sigNum)
//{
//    cout << "Interrupt signal (" << sigNum << ") received." << endl;
//
//    exit(sigNum);
//}
//
//void Raise_function()
//{
//    int i = 0;
//
//    signal(SIGINT, signalHandle);
//
//    while (++i) {
//        cout << "Going to sleep...." << endl;
//        if (i == 3)
//        {
//            raise(SIGINT);
//        }
//        Sleep(1);
//    }
//
//    return;
//}

// end Raise_function

int main()
{
    //C_Reference();
    //C_Take_reference_as_parameter();
    //C_Take_reference_as_return_value();
    //Current_date_and_time();
    //Format_time_using_struct_tm();
    //Standard_output_stream_cout();
    //Standard_input_stream_cin();
    //Standard_error_flow();
    //Standard_log_stream();
    //Accessing_Data_Members();
    //Class_member_function();
    //public_members();
    //Public_inheritance();
    //Protected_inheritance();
    //Private_inheritance();
    //Constructor_with_parameters();
    //Destructor_of_class();
    //C_copy_constructor1();
    //C_copy_constructor2();
    //C_nested_function();
    //C_this_pointer();
    //C_pointer_to_class();
    //C_static_member_of_class();
    //Class_static_function();
    //C_function_overloading();
    //C_operator_overloading();
    //C_polymorphism();
    //Data_abstraction();
    //Abstract_class();
    //Files_and_streams();
    //Catch_exception();
    //Define_new_exception();
    //Function_template();
    //Class_template();
    //C_predefined_macro();
    //Signal_function();
    //Raise_function();

    return 0;
}

