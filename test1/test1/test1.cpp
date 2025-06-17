// test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
using namespace std;
#include <stack>
#include <queue>
#include <vector>


class ASDF
{
public:
    int m_value;
    ASDF() { printf("ASDF 생성자\n"); }
    ~ASDF() { printf("ASDF 소멸자\n"); }
};

vector<int> g_int;
vector<ASDF*> g_vector;



/// 템플릿을 지금부터 시작한다.
/// 템플릿 함수 예제
template <typename T>
T add(T a, T b)
{
    T c = a + b;
    std::cout << "Tc : " << c << endl;
    return c * 10;
}


int main()
{
    printf("ADD: %d\n", add(3, 5));
    printf("ADD: %f\n", add(3.0, 5.0));
    printf("ADD: %d\n", add(-3, -5));
    printf("ADD: %ld\n", add(3u, 5u));

    ASDF* ptr = nullptr;
    for (int i = 0; i < 5; i++)
    {
        ptr = new ASDF();
        ptr->m_value = i + 10;
        g_vector.push_back(ptr);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", g_vector[i]->m_value);
    }

    g_vector.clear();
    /*
    for (int i = 0; i < 5; i++)
    {
        ptr = g_vector[i];
        delete ptr;
    }
    */
    std::cout << "Hello World!\n";
}
