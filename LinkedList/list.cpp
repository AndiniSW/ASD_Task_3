#include "list.h"

void createList(List &L)
{
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301164490

        first(L) = NULL;

    //----------------------------------------
}

address alokasi(infotype x)
{
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301164490

        P = new elmlist;
        info(P) = X;
        next(P) = NULL;



    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301164490

        delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301164490
    if(first(L) == NULL){


        first(L) = P;
    }else{

        next(P) = first(L);
        first(L)= P;

    }





    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :



    //----------------------------------------
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM :


    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :


    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301160362

    if(first(L) == NULL)
    {

        cout << "LIST TIDAK ADA"<< endl;
    }
    else
    {

        P = first(L);

        do
        {

            P = next(P);

        }
        while (next(next(P)) != NULL);

        next(P) = NULL;

        }


}

//----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301160362
    P = first(L);
    if(first(L) == NULL)
    {

        cout << "LIST KOSONG"<< endl;
    }
    else
    {
        do
        {
            infotype i = info(P);
            cout << " LIST ID :  "<< i.id<< endl;
            cout << " CAR BBRAND :  "<< i.car_brand<< endl;
            cout << " LIST ID :  "<< i.car_type<< endl;
            P =next(P);

        }
        while(next(P) != NULL);

    }

    //----------------------------------------
}


void insertAfter(address Prec, address P)
{
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM :1301160362
    if ( first(L)== NULL){

        cout<< " LIST KOSONG" << endl;
    }else {
        next(P)= next(prec);
        next(prec) = P;
    }
    //----------------------------------------

}
void deleteAfter(address Prec, address &P)
{
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301160362

    if(next(Prec) != NULL)
    {
        P = next(Prec);
        next(Prec)= next(P);
        next(P) = NULL;
    }
    else if(first(L) == NULL)
    {
        cout << "LIST KOSONG"<< endl;
    }
        //----------------------------------------
}
