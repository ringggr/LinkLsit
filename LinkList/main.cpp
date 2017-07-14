//
//  main.cpp
//  LinkList
//
//  Created by lanouhn on 17/7/12.
//  Copyright © 2017年 JackyHou. All rights reserved.
//

#include <iostream>
#include "LinkList.hpp"
#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    LinkList L = CreateList2(L);
    Output(L);
//    LNode *p = GetElem(L, 5);
//    cout << p->data << endl;
//    p = LocateElem(L, 3);
//    cout << p->data << endl;
    //InsertElem(L, 34, 3);
    
    //Output(L);
    //InsertElem(L, 56, 1);
    //InsertElem(L, 22, 1);
    InsertNextElem(L, 11, 1);
//    Output(L);
//    InsertElem2(L, 22, 1);
    Output(L);
    DeleteElem(L, 1);
    Output(L);
    cout << "Length: " << Length(L) << endl;
    return 0;
}
