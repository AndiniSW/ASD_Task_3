#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;

int main()
{
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu(){
    /**
	* IS : List sudah dibuat
    * PR : memberikan output pilihan menu kepada user
    *       1. insert first
    *       2. insert after
    *       3. insert last
    *       4. delete first
    *       5. delete after
    *       6. delete last
    *       7. view list
    *       8. insertion sort
    *       9. search
    */
    //-------------your code here-------------
    //1301164490//
 int p;
    do {
        cout << "Showroom Data\n------------------\n" << endl;
        cout << "1. Insert First\n2. Insert After\n3. Insert Last\n4. Delete First\n5. Delete After\n6. Delete Last\n7. Print List Info\n8. Insertion Sort\n9. Delete Data By ID" << endl;
        cout << "\n------------------\nMasukkan Pilihan : ";
        cin >> p;
        switch (p) {
            case 1 : 
                cout << "Insert First" << endl;
                cout << "Enter Car Id : ";
                cin >> x.id;
                cout << "Enter Car Brand : ";
                cin >> x.car_brand;
                cout << "Enter Car Type : ";
                cin >> x.car_type;
                if(findElm(L, x) == NULL) {
                    P1 = alokasi(x);
                    insertFirst(L, P1);
                    break;
                } else {
                    cout << "Car ID Already Exist!" << endl;
                    break;
                }
            case 2 : 
                cout << "Insert After" << endl;
                cout << "Enter Car Id : ";
                cin >> x.id;
                cout << "Enter Car Brand : ";
                cin >> x.car_brand;
                cout << "Enter Car Type : ";
                cin >> x.car_type;
                P1 = alokasi(x); 
                if(findElm(L, x) == NULL) {
                    cout << "After ID : ";
                    cin >> x.id; 
                    if(findElm(L, x) == NULL) {
                        cout << "Car ID Not Available To Insert After" << endl;
                    } else {
                        P2 = findElm(L, x);
                        insertAfter(L, P2, P1);
                        break;
                    }
                } else {
                    cout << "Car ID Already Exist!" << endl;
                    break;
                }
                break;
            case 3 : 
                cout << "Insert Last" << endl;
                cout << "Enter Car Id : ";
                cin >> x.id;
                cout << "Enter Car Brand : ";
                cin >> x.car_brand;
                cout << "Enter Car Type : ";
                cin >> x.car_type;
                if(findElm(L, x) == NULL) {
                    P1 = alokasi(x);
                    insertLast(L, P1);
                    break;
                } else {
                    cout << "Car ID Already Exist!" << endl;
                    break;
                }
            case 4 : 
                deleteFirst(L, P1);
                break;
            case 5 : 
                cout << "Delete After" << endl;
                cout << "Enter Car ID : ";
                cin >> x.id;
                if(findElm(L, x) != NULL) {
                    P2 = alokasi(x);
                    deleteAfter(L, P2, P1);
                    break;
                } else {
                    cout << "Car ID Doesn't Exist!" << endl;
                    break;
                }
            case 6 : 
                deleteLast(L, P1);
                break;
            case 7 : 
                printInfo(L);
                system( "read -n 1 -s -p \"\nBack To Menu\"" );
                break;
            case 8 : 
                insertionSort(L);
                break;
            case 9 : 
                cout << "Enter Car ID : ";
                cin >> x.id;
                if(findElm(L, x) == NULL) {
                    cout << "Car ID Doesn't Exist!" << endl;
                } else {
                    deletebyID(L, x);
                    break;
                }
            default:
                break;
        } 
    } while(p != 0);

    //----------------------------------------
}
