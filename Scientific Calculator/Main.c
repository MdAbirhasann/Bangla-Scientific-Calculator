#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Memory variable
double memory = 0;

// Function prototypes
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "ত্রুটি: শূন্য দিয়ে ভাগ করা যায় না।" << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return a / b;
}

int factorial(int n) {
    if (n < 0) {
        cout << "ত্রুটি: ঋণাত্মক সংখ্যার ফ্যাক্টোরিয়াল নেই।" << endl;
        return -1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    setlocale(LC_ALL, "");
    int choice;
    double x, y;

    while (true) {
        cout << "\nবৈজ্ঞানিক ক্যালকুলেটর\n";
        cout << "----------------------\n";
        cout << "১) যোগ (+)\n";
        cout << "২) বিয়োগ (-)\n";
        cout << "৩) গুণ (*)\n";
        cout << "৪) ভাগ (/)\n";
        cout << "৫) sin(x)\n";
        cout << "৬) cos(x)\n";
        cout << "৭) tan(x)\n";
        cout << "৮) ঘনমূল (√)\n";
        cout << "৯) ঘাত (^)\n";
        cout << "১০) log(x)\n";
        cout << "১১) ln(x)\n";
        cout << "১২) exp(x)\n";
        cout << "১৩) ফ্যাক্টোরিয়াল (!)\n";
        cout << "১৪) পরম মান (abs)\n";
        cout << "১৫) মেমোরি সংরক্ষণ M+\n";
        cout << "১৬) মেমোরি বিয়োগ M-\n";
        cout << "১৭) মেমোরি রিড MR\n";
        cout << "১৮) মেমোরি ক্লিয়ার MC\n";
        cout << "১৯) বের হওয়া\n";
        cout << "আপনার পছন্দ লিখুন: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "প্রথম সংখ্যা লিখুন: "; cin >> x;
                cout << "দ্বিতীয় সংখ্যা লিখুন: "; cin >> y;
                cout << "ফলাফল: " << add(x, y) << endl;
                break;
            case 2:
                cout << "প্রথম সংখ্যা লিখুন: "; cin >> x;
                cout << "দ্বিতীয় সংখ্যা লিখুন: "; cin >> y;
                cout << "ফলাফল: " << subtract(x, y) << endl;
                break;
            case 3:
                cout << "প্রথম সংখ্যা লিখুন: "; cin >> x;
                cout << "দ্বিতীয় সংখ্যা লিখুন: "; cin >> y;
                cout << "ফলাফল: " << multiply(x, y) << endl;
                break;
            case 4:
                cout << "প্রথম সংখ্যা লিখুন: "; cin >> x;
                cout << "দ্বিতীয় সংখ্যা লিখুন: "; cin >> y;
                cout << "ফলাফল: " << divide(x, y) << endl;
                break;
            case 5:
                cout << "x লিখুন (রেডিয়ান): "; cin >> x;
                cout << "ফলাফল: " << sin(x) << endl;
                break;
            case 6:
                cout << "x লিখুন (রেডিয়ান): "; cin >> x;
                cout << "ফলাফল: " << cos(x) << endl;
                break;
            case 7:
                cout << "x লিখুন (রেডিয়ান): "; cin >> x;
                cout << "ফলাফল: " << tan(x) << endl;
                break;
            case 8:
                cout << "x লিখুন: "; cin >> x;
                if (x < 0) cout << "ত্রুটি: ঋণাত্মক সংখ্যার ঘনমূল নেই।" << endl;
                else cout << "ফলাফল: " << sqrt(x) << endl;
                break;
            case 9:
                cout << "ভিত্তি (base) লিখুন: "; cin >> x;
                cout << "ঘাত (exponent) লিখুন: "; cin >> y;
                cout << "ফলাফল: " << pow(x, y) << endl;
                break;
            case 10:
                cout << "x লিখুন: "; cin >> x;
                if (x <= 0) cout << "ত্রুটি: log(x) শুধুমাত্র ধনাত্মক সংখ্যার জন্য।" << endl;
                else cout << "ফলাফল: " << log10(x) << endl;
                break;
            case 11:
                cout << "x লিখুন: "; cin >> x;
                if (x <= 0) cout << "ত্রুটি: ln(x) শুধুমাত্র ধনাত্মক সংখ্যার জন্য।" << endl;
                else cout << "ফলাফল: " << log(x) << endl;
                break;
            case 12:
                cout << "x লিখুন: "; cin >> x;
                cout << "ফলাফল: " << exp(x) << endl;
                break;
            case 13:
                cout << "x লিখুন: "; cin >> x;
                if (x != int(x) || x < 0) cout << "ত্রুটি: ফ্যাক্টোরিয়াল জন্য ধনাত্মক পূর্ণসংখ্যা প্রয়োজন।" << endl;
                else cout << "ফলাফল: " << factorial(int(x)) << endl;
                break;
            case 14:
                cout << "x লিখুন: "; cin >> x;
                cout << "ফলাফল: " << fabs(x) << endl;
                break;
            case 15:
                cout << "মেমোরিতে যোগ করতে x লিখুন: "; cin >> x;
                memory += x;
                cout << "মেমোরি আপডেট: " << memory << endl;
                break;
            case 16:
                cout << "মেমোরি থেকে বিয়োগ করতে x লিখুন: "; cin >> x;
                memory -= x;
                cout << "মেমোরি আপডেট: " << memory << endl;
                break;
            case 17:
                cout << "মেমোরি রিড: " << memory << endl;
                break;
            case 18:
                memory = 0;
                cout << "মেমোরি ক্লিয়ার।" << endl;
                break;
            case 19:
                cout << "ক্যালকুলেটর বন্ধ করা হচ্ছে। বিদায়!" << endl;
                return 0;
            default:
                cout << "ত্রুটি: বৈধ অপশন নির্বাচন করুন।" << endl;
        }
    }

    return 0;
}
