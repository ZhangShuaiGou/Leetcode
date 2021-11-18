/*
 * @lc app=leetcode id=1114 lang=cpp
 *
 * [1114] Print in Order
 */

// @lc code=start
class Foo {
public:
    int flag = 0; 
    Foo() {

    }

    void first(function<void()> printFirst) {
        if(flag==0){
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        flag = 1;
        }
    }

    void second(function<void()> printSecond) {
        if(flag==1){
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        flag = 2;
        }
    }

    void third(function<void()> printThird) {
        if(flag==2){
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        flag = 3;
        }
    }
};
// @lc code=end

