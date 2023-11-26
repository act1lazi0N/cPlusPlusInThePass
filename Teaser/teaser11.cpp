#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(1000);
    st.push(2000);
    st.push(3000);
    cout << st.top() << endl;
    st.pop();                       // loại bỏ phần tử ở cuối
    cout << st.top() << endl;
    st.pop();
    cout << st.top();
    return 0;
}
