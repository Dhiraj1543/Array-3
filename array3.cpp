//Q.no 1 Count the number of triplets whose sum is equal to the given value x.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the Size: ";
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == target)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}

// Q.no 2 Find the factorial of a large number.

#include <iostream>
using namespace std;
int mul(int x, int res[], int res_size){
int carry = 0;
for (int i = 0; i < res_size; i++) {
int prod = res[i] * x + carry;
res[i] = prod % 10;
carry = prod / 10;
}
while (carry) {
res[res_size] = carry % 10;
carry = carry / 10;
res_size++;
}
return res_size;
}
int main() {
int n;
cin>>n;
int res[500];
res[0] = 1;
int res_size = 1;

// Q.no 3  Find the first non-repeating element in the array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < a; i++)
    {
        int j;
        {
            for (j = 0; j < a; j++)
            {
                if (i != j && arr[i] == arr[j])
                    break;
            }
            if (j == a)
            {
                cout << "The first non-repeating elements is " << arr[i];
                break;
            }
        }
        if (i == a)
        {
            cout << "All the elements in the array are repeated ";
            break;
        }
    }
}

// Q.no 4 Check if an array is a subset of another .

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {11, 1, 13, 21, 3, 7};
    vector<int> vec2 = {11, 3, 7, 1};

    bool isSubset = true;
    for (const int& element : vec2) {
        bool found = false;
        for (const int& e : vec1) {
            if (element == e) {
                found = true;
                break;
            }
        }
        if (!found) {
            isSubset = false;
            break;
        }
    }
    if (isSubset)
        cout << "vec2 is a subset of vec1 ";
    else
        cout << "vec2 is not a subset of vec1";
    return 0;
}

