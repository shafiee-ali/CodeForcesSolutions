#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int numOfBoys, numOfGirls;
    cin >> numOfBoys;
    int boys[numOfBoys];
    for (size_t i = 0; i < numOfBoys; i++) {
        cin >> boys[i];
    }
    cin >> numOfGirls;
    int girls[numOfGirls];
    for (size_t i = 0; i < numOfGirls; i++) {
        cin >> girls[i];
    }
    sort(boys, boys+numOfBoys);
    sort(girls, girls+numOfGirls);
    int count = 0;
    int boyPtr=0, girlPtr=0;
    while(boyPtr < numOfBoys && girlPtr < numOfGirls) {
        if(abs(boys[boyPtr]-girls[girlPtr]) <= 1) {
            count++;
            boyPtr++;
            girlPtr++;
        }
        else {
            if (boys[boyPtr] > girls[girlPtr])
                girlPtr++;
            else
                boyPtr++;
        }
    }
    cout << count;
}