//latihan float
#include <stdio.h>
using namespace std;

int main(){
    int jumblah_kopi;
    float harga_kopi=7000, total;
    printf("masukan jumblah kopi yang dibeli: ");
    scanf("%d", &jumblah_kopi);

    total= jumblah_kopi*harga_kopi;
    printf("total harga yang harus dibayar: Rp%.2f", total);

    return 0;
}
