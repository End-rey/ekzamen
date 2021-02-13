//Skip to content
//Why GitHub ?
//Team
//Enterprise
//Explore
//Marketplace
//Pricing
//Search
//
//Sign in
//Sign up
//77maxikov
///
//pf_course
//100
//Code
//Issues
//Pull requests
//Actions
//Projects
//Security
//Insights
//pf_course / src / main.cpp
//@77maxikov
//77maxikov Added pointArray inc. (incapsulated)
//Latest commit 60557a6 6 minutes ago
//History
//1 contributor
//330 lines(250 sloc)  6.32 KB
//
//#include <iostream>
//#include <fstream>
//#include <cstring>
//
//using namespace std;
//
///*struct Translation{
//    char ru[81];
//    char en[81];
//};*/
//struct Translation {
//    char* ru;
//    char* en;
//};
//struct Array {
//    size_t size;
//    Translation* data;
//};
//
//struct DoubleArray {
//    size_t size;
//    double* data;
//};
//
//void addDouble(DoubleArray* array, double val2add) {
//    if (array->size == 0) {//if (array->data == nullptr)
//        array->data = new double[1];
//        array->data[0] = val2add;
//        array->size = 1;
//    }
//    else {
//        double* tmp = new double[array->size + 1];
//        // скопировать все элементы из array->data в tmp
//        delete[] array->data;
//        array->data = tmp;
//        array->size++;
//    }
//}
//
//double getElementByInd(const DoubleArray* array, size_t index/*номер элемента*/) {
//    //array->size = 0;
//    if (array == nullptr || array->size <= index)
//        //Ошибка !!!
//        exit(1);
//    else
//        return array->data[index]; // *(array->data + index)
//}
//
//
//
//
//
//#define Data double
//
//struct Node {
//    Data data;
//    Node* next;
//    Node* prev;
//};
//
//struct DoubleList {
//    Node* first;
//    Node* last;
//    size_t size;
//};
//
////double getElementByInd(const DoubleList* list,size_t index/*номер элемента*/)
//
//double getData(Node* marker) {
//    return  marker->data;
//}
//
//void moveNext(Node* marker) {
//    marker = marker->next;
//}
//
//bool canMoveNext(Node* marker) {
//    return marker->next != nullptr;
//}
//
//void writeToFile(const DoubleArray* array) {
//    for (size_t k = 0;k < array->size;++k) {
//        // WriteToFile(array->data[k])
//    }
//}
//
//void writeToFile(const DoubleList* list) {
//    Node* marker = list->first;
//    do {
//        // WriteToFile(getData(marker));
//        moveNext(marker);
//    } while (canMoveNext(marker));
//
//}
//
//struct ArrayMarker {
//    DoubleArray* array;
//    size_t position;
//};
//
//double getData(ArrayMarker* marker) {
//
//}
//
//void moveNext(ArrayMarker* marker) {
//
//}
//
//bool canMoveNext(ArrayMarker* marker) {
//
//}
//
//void writeToFile(DoubleArray* array) {
//
//    ArrayMarker* marker = new ArrayMarker;
//    marker->array = array;
//    marker->position = 0;
//    do {
//        // WriteToFile(getData(marker));
//        moveNext(marker);
//    } while (canMoveNext(marker));
//
//}
//
//bool findElementUnordered(DoubleArray*, double val2find) {
//
//}
//
//bool findElementOrdered(DoubleArray*, double val2find) {
//
//}
//
//bool findElementUnordered(DoubleList*, double val2find) {
//
//}
//
//bool findElementOrdered(DoubleList*, double val2find) {
//
//}
//
//
//void addDouble(DoubleList* list, double val2add) {
//    if (list->size == 0) {
//        list->first = new Node;
//        list->first->data = val2add;
//        list->first->next = nullptr;
//        list->size = 1;
//        list->last = list->first;
//    }
//    else {
//        Node* tmp = new Node;
//        tmp->data = val2add;
//        tmp->next = nullptr;
//
//        list->last->next = tmp;
//        list->last = tmp;
//        /*
//        Node *marker = list->first;
//        while ( marker->next != nullptr ){
//            marker = marker->next;
//        }
//        marker->next = tmp;*/
//    }
//}
//
//
//
//
//
//
//
//void addTranslation(Array* array, const char* en, const char* ru) {
//
//
//    // Предусмотреть ситуацию когда перевод уже есть в словаре??
//}
////Translation findTranslation(Array *array,const char * en ){
////int findTranslation(Array *array,const char * en,char* ru ){
//Translation* findTranslation(Array* array, const char* en) {
//
//    if (false /*условие*/) {
//        cout << "Не нашлось :(" << endl;
//        return nullptr;
//        //addTranslation()
//        //exit(1);
//    }
//
//}
//void deleteTranslation(Array* array, const char* en) {
//
//}
//
//void updateTranslation(Array* array, const char* en, const char* ru) {
//    deleteTranslation(array, en);
//    addTranslation(array, en, ru);
//}
//
//Array loadTranslations(char* filename) { // Чтение данных словаря из файла
//
//}
//
//void saveTranslations(Array arr, char* filename) { // Запись данных словаря в файл filename
//    //fs.write((&arr),sizeof(arr));
//}
#include <iostream>
using namespace std;
enum Colors
{
    COL_RED,
    COL_GREEN,
    COL_BLUE
};

struct Point
{
    //Colors color;
    int x;
    int y;
};

struct Segment
{
    //Colors color;
    Point p1;
    Point p2;
};

struct Circle
{
    //Colors color;
    Point center;
    int r;
};

class PointArray
{
private:
    size_t m_size;
    Point *data;

public:
    PointArray()
    {
        m_size = 0;
        data = nullptr;
    }
    ~PointArray()
    {
        if (data != nullptr)
            delete[] data;
    }
    void addPoint(Point val2add)
    {
        if (m_size == 0)
        { //if (array->data == nullptr)
            data = new Point[1];
            data[0] = val2add;
            m_size = 1;
        }
        else
        {
            Point *tmp = new Point[m_size + 1];
            // скопировать все элементы из array->data в tmp
            for (size_t i = 0; i < m_size; i++)
            {
                tmp[i] = data[i];
            }
            tmp[m_size] = val2add;
            delete[] data;
            data = tmp;
            m_size++;
        }
    }
    size_t getSize() const { return m_size; }
    Point getElementByInd(size_t index /*номер элемента*/) const
    {
        if (m_size <= index)
            //Ошибка !!!
            exit(1);
        else
            return data[index]; // *(data + index)
    }
};

class SegmentArray
{
private:
    size_t m_size;
    Segment *data;

public:
    SegmentArray()
    {
        m_size = 0;
        data = nullptr;
    }
    ~SegmentArray()
    {
        if (data != nullptr)
            delete[] data;
    }
    void addSegment(Segment val2add)
    {
        if (m_size == 0)
        {
            data = new Segment[1];
            data[0] = val2add;
            m_size = 1;
        }
        else
        {
            Segment *tmp = new Segment[m_size + 1];
            for (size_t i = 0; i < m_size; i++)
            {
                tmp[i] = data[i];
            }
            tmp[m_size] = val2add;
            delete[] data;
            data = tmp;
            m_size++;
        }
    }
    size_t getSize() const { return m_size; }
    Segment getElementByInd(size_t index /*номер элемента*/) const
    {
        if (m_size <= index)
            //Ошибка !!!
            exit(1);
        else
            return data[index]; // *(data + index)
    }
};

class CircleArray
{
private:
    size_t m_size;
    Circle *data;

public:
    CircleArray()
    {
        m_size = 0;
        data = nullptr;
    }
    ~CircleArray()
    {
        if (data != nullptr)
            delete[] data;
    }
    void addCircle(Circle val2add)
    {
        if (m_size == 0)
        {
            data = new Circle[1];
            data[0] = val2add;
            m_size = 1;
        }
        else
        {
            Circle *tmp = new Circle[m_size + 1];
            for (size_t i = 0; i < m_size; i++)
            {
                tmp[i] = data[i];
            }
            tmp[m_size] = val2add;
            delete[] data;
            data = tmp;
            m_size++;
        }
    }
    size_t getSize() const { return m_size; }
    Circle getElementByInd(size_t index /*номер элемента*/) const
    {
        if (m_size <= index)
            //Ошибка !!!
            exit(1);
        else
            return data[index]; // *(data + index)
    }
};
/*
void addPoint(PointArray* array,Point val2add){
    if (array->size == 0) {//if (array->data == nullptr)
        array->data = new Point[1];
        array->data[0] = val2add;
        array->size = 1;
    }
    else{
        Point *tmp = new Point[array->size + 1];
        // скопировать все элементы из array->data в tmp
        delete[] array->data;
        array->data = tmp;
        array->size ++;
    }
}
*/
void outputPoints(const PointArray *array)
{
    for (size_t k = 0; k < array->getSize(); ++k)
    {
        // Output single point
        std::cout << array->getElementByInd(k).x << " " << array->getElementByInd(k).y << std::endl;
    }
}
bool testPointArrayCreation()
{
    PointArray array;
    if (array.getSize() == 0)
        return true;
    return false;
}

bool testPointArraySize()
{
    PointArray array;
    Point p1 = {1, 2};
    array.addPoint(p1);
    if (array.getSize() != 1)
        return false;
    return true;
}

bool testPointArrayAccess1()
{
    PointArray array;
    Point p1 = {1, 2};
    array.addPoint(p1);
    Point p2 = array.getElementByInd(0);
    if (p1.x == p2.x && p1.y == p2.y)
        return true;
    return false;
}

bool testPointArrayAccessN()
{
    PointArray array;
    Point p1 = {1, 2};
    array.addPoint(p1);
    Point p2 = {2, 2};
    array.addPoint(p2);
    Point p3 = {4, 2};
    array.addPoint(p3);

    Point pp = array.getElementByInd(2);
    if (pp.x == p3.x && pp.y == p3.y)
        return true;
    return false;
}

void runAllTests()
{
    std::cout << "testPointArrayCreation() " << (testPointArrayCreation() ? "passed" : "failed") << std::endl;
    std::cout << "testPointArraySize() " << (testPointArraySize() ? "passed" : "failed") << std::endl;
    std::cout << "testPointArrayAccess1() " << (testPointArrayAccess1() ? "passed" : "failed") << std::endl;
    std::cout << "testPointArrayAccessN() " << (testPointArrayAccessN() ? "passed" : "failed") << std::endl;
}

int main(int argc, char *argv[])
{
    runAllTests();
    PointArray pointArray;

    Point p1;
    p1.x = 1;
    p1.y = 2;
    pointArray.addPoint(p1);
    Point p2 = {2, 3};
    pointArray.addPoint(p2);
    Point p3 = {5, 3};
    pointArray.addPoint(p3);
    Point p4 = {6, 4};
    pointArray.addPoint(p4);

    outputPoints(&pointArray);
    system("pause");
    return 0;
}

void aaa;