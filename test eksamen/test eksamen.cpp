#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    const int Nmax = 1000; 
    double Arr[Nmax];
    int n; 
    double max;
    int i_max; 
    int i; 
  
    cout << "Ведіть розмір масиву ";
 
    cin >> n;
    cout << "Ведіть цілі цифри: ";
 
    for (i = 0; i < n; i++)
        cin >> Arr[i];
    max = Arr[0];
    i_max = 0;

    for (i = 1; i < n; i++)
        if (Arr[i] > max)
        {
            max = Arr[i];
            i_max = i;
        }

    cout << "Arr[" << i_max << "] = " << max<<endl;
    return 0;
}