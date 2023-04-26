#include <iostream>
#include <string>

using namespace std;

int list1[] = {5,10,15,20,25,30,35,40};
int list2[] = {3,5,8,12,15,18,21,24, 27,};
int x = sizeof (list1) / sizeof (list1[0]);
int y = sizeof (list2) / sizeof (list2[0]);
int * commElements(int l1[], int l2[]){
    int a =0;
    int* list3= new int [a<y? a: y];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (l1[i]==l2[j]){
                list3[a++]=l1[i];
            }
        }
    }
    return list3;
}
string array1[]={"furkan","edip","adana","sis","ata","tenet", "kazak", "yay"};
int h = sizeof (array1) / sizeof (array1[0]);
int u=0;
string * palindroms(string* a1){
    string * array2=new string[h];
    for (int i = 0; i < h; i++) {
        string nonRev = a1[i];
        string rev = "";
        for (int j = nonRev.length() - 1; j >= 0; j--) {
            rev += nonRev[j]; // Reverse the string
        }
        if (nonRev == rev) {
            array2[u] = nonRev;
            u++;
        }
    }
    return array2;
}

int main() {

    /* Question 1 */

    int *list3 = commElements(list1, list2);
    int sL3 = sizeof(list3) / sizeof(list3[0]);
    cout << "Result of Question 1 :" << endl;
    for (int i = 0; i < sL3; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;


    /*  Question2  */

    string *array2 = palindroms(array1);
    cout << "Result of Question 2 :" << endl;
    for (int i = 0; i < u; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}