#include <iostream>
using namespace std;
/*
// Project: Homework #1
// Class:   CS M10B
// Student: Rice, Sammuel D.
// Date:    20160118
*/
struct MonthlyBudget
{
    float housing;
    float utilities;
    float householdExpenses;
    float transportation;
    float food;
    float medical;
    float insurance;
    float entertainment;
    float clothing;
    float misc;
    float total;
};
void report(MonthlyBudget actual);
int main() {
    MonthlyBudget myBudget;
    cout << "How much was spent on:" << endl;
    cout << "Housing            : $";
    cin >> myBudget.housing;
    cout << "Utilities          : $";
    cin >> myBudget.utilities;
    cout << "Household Expenses : $";
    cin >> myBudget.householdExpenses;
    cout << "Transportation     : $";
    cin >> myBudget.transportation;
    cout << "Food               : $";
    cin >> myBudget.food;
    cout << "Medical            : $";
    cin >> myBudget.medical;
    cout << "Insurance          : $";
    cin >> myBudget.insurance;
    cout << "Entertainment      : $";
    cin >> myBudget.entertainment;
    cout << "Clothing           : $";
    cin >> myBudget.clothing;
    cout << "Misc.              : $";
    cin >> myBudget.misc;
    myBudget.total = myBudget.housing + myBudget.utilities + myBudget.householdExpenses + myBudget.transportation + myBudget.food + myBudget.medical + myBudget.insurance + myBudget.entertainment + myBudget.clothing + myBudget.misc;
    report(myBudget);
}
void report(MonthlyBudget actual)
{
    MonthlyBudget target = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50, 1420}; //Target budget goal
    cout << "----Budget Report----" << endl;
    //cout << "NOTE: If spent the exact amount allowed in budget, UNDER will be displayed."
    // condition ? IFtrue : IFfalse;
    cout << "Housing            : ";
    actual.housing > target.housing                     ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Utilities          : ";
    actual.utilities > target.utilities                 ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Household Expenses : ";
    actual.householdExpenses > target.householdExpenses ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Transportation     : ";
    actual.transportation > target.transportation       ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Food               : ";
    actual.food > target.food                           ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Medical            : ";
    actual.medical > target.medical                     ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Insurance          : ";
    actual.insurance > target.insurance                 ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Entertainment      : ";
    actual.entertainment > target.entertainment         ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Clothing           : ";
    actual.clothing > target.clothing                   ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Misc.              : ";
    actual.misc > target.misc                           ?  cout << " OVER" << endl :  cout <<  "UNDER" << endl;
    cout << "Total              : ";
    actual.total > target.total                         ?  cout << " OVER" :  cout <<  "UNDER"; //This line continues
    cout << " by $";
    actual.total > target.total ? cout << (actual.total - target.total) : cout << (target.total - actual.total);
}
