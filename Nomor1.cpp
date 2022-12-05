#include <iostream>

using namespace std;

int main(){
    
    int matrix1[100][100], matrix2[100][100], result[100][100], transpose[100][100], amount=0;
    int a,b;

    cout << "Enter line amount: ";
    cin >> a;
    cout << "Enter column amount: ";
    cin >> b;

    if(a == b){
        cout << "== MATRIX A ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
            cout << "Enter element: " << i << " Column: " << j << " : ";
            cin >> matrix1[i][j];
            }
        }
        cout << endl;
        cout << "== MATRIX ELEMENT A ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << matrix1[i][j] << "\t";
            }
            cout << endl;
        }
    }
    cout << "== MATRIX B ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
            cout << "Enter element: " << i << " Column: " << j << " : ";
            cin >> matrix2[i][j];
            }
        }
        cout << endl;
        cout << "== MATRIX ELEMENT B ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << matrix2[i][j] << "\t";
            }
            cout << endl;
        }
    cout << "== Addition Result ==" << endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << " " << result[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "== Multiplying Result ==" << endl;
    for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                amount=0;
                for(int k = 0; k < a; k++){
                    amount = amount + matrix1[i][k] * matrix2[k][j];
                }
                result[i][j] = amount;
            }
        }

        cout << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << " " << result[i][j] << " | ";
            }
            cout << endl;
        }

        cout << "== Transpose Matrix Result ==" << endl;
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            transpose[j][i] = matrix1[i][j];
            }
        }
        cout << "Transpose Matrix Result 1 : \n";
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            cout << transpose[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            transpose[j][i] = matrix2[i][j];
            }
        }
        cout << "Transpose Matrix Result 2 : \n";
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            cout << transpose[i][j] << "\t";
            }
            cout << endl;
        }


return 0;

}