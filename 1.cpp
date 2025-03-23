#include <iostream>
using namespace std;

//B : câu h?i 
//Câu 1 : 
//-*p3 = B , p3 = 0x5678;
//-*p3 = 0x1234 , p3 = A ;
//-*p1 = 0x5678 , p1 = B ;
//Câu 2 :
//K = 5 và *p = 5 ;
//Câu 3 :
//L?i vì c ?ag có ki?u char n?u mu?n làm nh? v?y ph?i ép ki?u ;
//C : bài t?p 
//bai lam :

   int dodai(const char *s) {
    int length = 0;
    while (*s++) {
        length++;
    }
    return length;
}

//1 . hàm ??o ng??c chu?i ; 
void reverse(char *a) {
    int len = my_strlen(a);
    char *start = a;
    char *end = a + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
} 
//2 . hàm xóa kí t? c trong xâu ;
 void delete_char(char *a, char c) {
    char *src = a, *dst = a;
    while (*src) {
        if (*src != c) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}
//3 . ??n chu?i ?? có ?? dài chu?i a b?ng ?? dài = n ;
void pad_right(char *a, int n) {
    int len = dodai(a);
    if (len >= n) return; 
    char *end = a + len;
    for (int i = len; i < n; i++) {
        *end++ = ' ';
    }
    *end = '\0'; 
}
//4 . ??n trái ?? ... 
void pad_left(char *a, int n) {
    int len = dodai(a);
    if (len >= n) return;
    int shift = n - len;
    for (int i = len; i >= 0; i--) {
        a[i + shift] = a[i];
    }
    for (int i = 0; i < shift; i++) {
        a[i] = ' ';
    }
}
//5 . c?t xâu ;
void truncate(char *a, int n) {
    if (dodai(a) > n) {
        a[n] = '\0';
    }
}
//6 . ??i g??ng ;
bool is_palindrome(const char *a) {
    int len = dodai(a);
    const char *start = a;
    const char *end = a + len - 1;
    while (start < end) {
        if (*start != *end) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
//7 . l?c trái ;
void trim_left(char *a) {
    char *start = a;
    while (*start == ' ') {
        start++;
    }
    char *dst = a;
    while (*start) {
        *dst++ = *start++;
    }
    *dst = '\0';
}
//8 . l?c ph?i ;
void trim_right(char *a) {
    int len = dodai(a);
    if (len == 0) return;
    char *end = a + len - 1;
    while (end >= a && *end == ' ') {
        end--;
    }
    *(end + 1) = '\0';
}
//D .  cau hoi trac Nghiem ;
//1 . *p = n ;
//2 . *p1 = p2 ;
//3 . ii & iii ;
//4 . iii ;
//5 . iv ;
//6 . iii ;
//7 . iii ;
