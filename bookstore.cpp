#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"
using namespace std; 
int main()
{
    Sales_item total;

    if (cin>>total)
    {
        Sales_item trans;
        while (cin>>trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else{
        cerr << "No data"<< endl;
        return -1; 
    }


    // Sales_item currItem, Item;

    // if (std::cin >> currItem)
    // {
    //     int cnt = 1;
    //     while (std::cin >> Item){
    //         if (Item.isbn() == currItem.isbn())
    //             ++cnt;
    //         else{
    //             std::cout << currItem.isbn() << " occurs "
    //                     << cnt << " times" << std::endl;
    //             currItem = Item;
    //             cnt = 1;
    //         }
    //     } std::cout << currItem << " occurs "
    //             << cnt<< " times" << std::endl;
    // }

    // first check that item1 and item2 represent the same book
    // if (item1.isbn() == item2.isbn())
    // {
    //     cout << item1 + item2 << endl;
    //     return 0;
    // } else 
    // {
    //     cerr << "Data must refer to same ISBN"
    //         << endl;
    //     return -1;
    // }



    // write ISBN, number of copies sold, total revenue, and average price
    // cout << item1 + item2 << endl;
    return 0;
}