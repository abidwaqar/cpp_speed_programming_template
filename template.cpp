#include <iostream>
#include <string>
// #include <time.h>

using namespace std;

void solve(int case_number)
{
    int N;    
    cin >> N;

    int answer;

    string *str_num_arr = new string[N];

    for (int i = 0; i < N; i++) cin >> str_num_arr[i];

    // Do stuff here 

    // for (int i = 0; i < N; i++) cout << str_num_arr[i] << " " ;
    // cout << endl;

    cout << "Case #" << case_number << ": " << answer << endl;
}

int main(int argc, char** argv) 
{
    // clock_t start_time = clock();

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }

    // cout << "\n" << "Execution time: " << (clock() - start_time)/CLOCKS_PER_SEC << endl;

    return 0;
}