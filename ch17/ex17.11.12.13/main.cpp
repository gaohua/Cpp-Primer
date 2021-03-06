/***************************************************************************
 *  @file       main.cpp
 *  @author     Alan.W
 *  @date       6  Mar 2014
 *  @remark     This code is for the exercises from C++ Primer 5th Edition
 *  @note
 ***************************************************************************/
//!
//! Exercise 17.11:
//! Define a data structure that contains an integral object to track responses
//! to a true/false quiz containing 10 questions. What changes, if any, would
//! you need to make in your data structure if the quiz had 100 questions?
//!
//      std::bitset<10> reponses;
//      std::bitset<100> reponses2;
//!
//! Exercise 17.12:
//! Using the data structure from the previous question, write a function that
//! takes a question number and a value to indicate a true/false answer and
//! updates the quiz results accordingly.
//!
//! Exercise 17.13:
//! Write an integral object that contains the correct answers for the
//! true/false quiz. Use it to generate grades on the quiz for the data
//! structure from the previous two exercises.
//!




#include <iostream>
#include <bitset>
#include <vector>


//! for ex17.12
//! updates the quiz results
void update(std::bitset<10>& bset, std::pair<std::size_t, bool> pair);

//! for ex17.13
//! mark
std::size_t mark(const std::bitset<10>& std_ans, const std::bitset<10> ans);


int main()
{
    std::bitset<10> bset;
    //! for ex17.12
/*
    update(bset,std::make_pair(2,1));
    std::cout << bset << std::endl;
*/

    //! for ex17.13
    std::bitset<10> std_ans ("1100011000");
    std::cout << mark(std_ans, bset) << std::endl;

    return 0;
}

//! for ex17.12
//! updates the quiz results
void update(std::bitset<10>& bset, std::pair<std::size_t, bool> pair)
{
    bset[pair.first] = pair.second;
}

//! for ex17.13
//! mark
std::size_t mark(const std::bitset<10>& std_ans, const std::bitset<10> ans)
{
    std::size_t mark = 0;
    for (unsigned i = 0; i != 10; ++i)
        mark += (ans[i] == std_ans[i]) ? 1 : 0;

    return mark;
}





