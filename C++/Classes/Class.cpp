#include <iostream>
#include <sstream>
using namespace std;

class Student
    {
    private:
    int ag, std;
    string f_name, l_name;
    public:
    void set_age(int a)
        {
        ag=a;
    }
    void set_standard(int st)
        {
        std=st;
    }
    void set_first_name(string x)
        {
        f_name=x;
    }
    void set_last_name(string y)
        {
        l_name=y;
    }
    int get_age()
        {
        return ag;
    }
    int get_standard()
        {
        return std;
    }
    string get_last_name()
        {
        return l_name;
    }
    string get_first_name()
        {
        return f_name;
    }
    void to_string()
        {
        cout<<ag<<","<<f_name<<","<<l_name<<","<<std;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}