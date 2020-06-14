#include "doctest.h"
#include <iostream>
#include <vector>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"

using namespace itertools;
using namespace std;


struct lessThan3 {
                bool operator()(int i) const { return i < 3; }
};
struct even {
                bool operator()(int i) const { return i%2==0; }
};

TEST_CASE("demo:")
{       
        vector<int> ans = {5,6,7,8};
        int index = 0;
        for (int i : range(5, 9))
                CHECK(i == ans[index++]);

        vector<int> vecInt = {1, 2, 3, 4};
        vector<string> vecString = {"Hello", "Bye", "Adam"};
        vector<float> vecFloat = {-1, 0.3, 5.2, -8.3};

        ans = {5,11,18,26};
        index = 0;
        for (int i : accumulate(range(5, 9)))
                CHECK(i == ans[index++]);
        
        vector<string> ans1 = {"Hello", "HelloBye", "HelloByeAdam"};
        index = 0;
        for (string i : accumulate(vecString))
                CHECK(i == ans1[index++]);

        ans = {5, 30, 210, 1680};
        index = 0;
        for (int i : accumulate(range(5, 9), [](int x, int y) { return x * y; }))
                CHECK(i == ans[index++]);

        ans = {3, 4};
        index = 0;
        for (auto i : filterfalse(lessThan3{}, vecInt))
                CHECK(i == ans[index++]);
      
        ans = {5, 7};
        index = 0;
        for (auto i : filterfalse([](int i) { return i % 2 == 0; }, range(5, 9)))
                CHECK(i == ans[index++]);
        
        vector<char> ans2 = {'a','b','d'};
        index = 0;
        for (auto i : compress(string("abcd"), vector<bool>({true, true, false, true})))
                CHECK(i == ans2[index++]);
        
        ans = {5,6,8};
        index = 0;
        for (auto i : compress(range(5, 9), vector<bool>({true, true, false, true})))
                CHECK(i == ans[index++]);

}

TEST_CASE("range:")
{
        vector<int> v(20);
        for (int i = 0; i < v.size(); ++i)
        {
                v[i] = i + 1;
        }
        int j = 0;
        for (int i : range(1, 21))
        {
                CHECK(i == v[j++]);
        }

        // one element
        j = 1;
        for (int i : range(1, 2))
        {
                CHECK(i == j);
        }

        // zero element
        for (int i : range(1, 1))
        {
                CHECK(i == j);
        }

}
TEST_CASE("filterfalse: ")
{
    vector<int> test4 = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    vector<int> ans= {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
	int index4=0;
    for (auto i : filterfalse(even{},test4))
        CHECK(i == ans[index4++]);
}
TEST_CASE("compress: ")
{
    vector<string> test5 = {"I", "am","love","e","rfrf","as","adfd","you","adfnj","adaeda","adad","so", "much", "ahfh", "jyytf","b","j"};
	vector<bool> test5b = {true, true,true,false,false,false,false,true,false,false,false,true,true, false, false,false,false};
    vector<string> ans={"I","am","love","you","so", "much"};
	int index5=0;
    for (auto i : compress(test5, test5b))
        CHECK(i == ans[index5++]);
    vector<string> test51 = {"I", "am","love","e","rfrf","as","adfd","you","adfnj","adaeda","adad","so", "much", "ahfh", "jyytf","b","j"};
	vector<bool> test51b = {true, true,true,true,true,true,true,true,true,true,true,true,true, true, true,true,true};
    vector<string> ans1={"I", "am","love","e","rfrf","as","adfd","you","adfnj","adaeda","adad","so", "much", "ahfh", "jyytf","b","j"};
	int index51=0;
    for (auto i : compress(test51, test51b))
        CHECK(i == ans1[index51++]);
    vector<string> test52 = {"1", "2","3","4","5","6","7","8","9","10","11","12", "13", "14", "15","16","17","18"};
	vector<bool> test52b = {true, false,true, false,true, false,true, false,true, false,true, false,true, false,true, false,true, false};
    vector<string> ans2= {"1","3","5","7","9","11", "13", "15","17"};
	int index52=0;
    for (auto i : compress(test52, test52b))
        CHECK(i == ans2[index52++]);
    vector<string> test53 = {"1", "2","3","4","5","6","7","8","9","10","11","12", "13", "14", "15","16","17","18"};
	vector<bool> test53b = { false,true, false,true, false,true, false,true, false,true, false,true, false,true, false,true, false,true};
    vector<string> ans3= {"2","4","6","8","10","12", "14", "16","18"};
	int index53=0;
    for (auto i : compress(test53, test53b))
        CHECK(i == ans3[index53++]);
}
