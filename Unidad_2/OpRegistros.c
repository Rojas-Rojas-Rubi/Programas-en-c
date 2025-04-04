#include <stdio.h>

int main () {

    int ah, al, bh, bl, ch, cl, dl;

    printf("Ingrese el valor AH\n:");
    scanf("%d", &ah);
    printf("Ingrese el valor AL\n:");
    scanf("%d", &al);
    printf("Ingrese el valor BH\n:");
    scanf("%d", &bh);
    printf("Ingrese el valor BL\n:");
    scanf("%d", &bl);
    printf("Ingrese el valor CH\n:");
    scanf("%d", &ch);
    printf("Ingrese el valor CL\n:");
    scanf("%d", &cl);
    
    int *const pah = &ah; 
    int *const pal = &al;
    int *const pbh = &bh;
    int *const pbl = &bl; 
    int *const pch = &ch;
    int *const pcl = &cl;
    int *const pdl = &dl;

    printf("Valores Ingresados: A=%p\n", &pah); 
    printf("Valores Ingresados: B=%p\n", &pal);
    printf("Valores Ingresados: C=%p\n", &pbh);
    printf("Valores Ingresados: A=%p\n", &pbl); 
    printf("Valores Ingresados: B=%p\n", &pch);
    printf("Valores Ingresados: C=%p\n", &pcl);

    int suma = *pah + *pal;
    printf("Resultado de la suma: %d\n", suma);

    *pdl = suma;
    printf("Nuevo valor ADL: %d\n", *pdl);

    int resta = *pah - *pal;
    printf("Resultado de la resta: %d\n", resta);

    *pdl = resta;
    printf("Nuevo valor ADL: %d\n", *pdl);

    int mult = (*pah) * (*pal);
    printf("Resultado de la multiplicaion: %d\n", mult);

    *pdl = mult;
    printf("Nuevo valor ADL: %d\n", *pdl);

    int div = (*pah) / (*pal);
    printf("Resultado de la division: %d\n", div);

    *pdl = div;
    printf("Nuevo valor ADL: %d\n", *pdl);
    printf("Ubicacion: ADL=%p\n", &*pdl);

    int sum = *pbh + *pbl;
    printf("Resultado de la suma: %d\n", sum);

    *pdl = sum;
    printf("Nuevo valor BDL: %d\n", *pdl);

    int rest = *pbh - *pbl;
    printf("Resultado de la resta: %d\n", rest);

    *pdl = rest;
    printf("Nuevo valor BDL: %d\n", *pdl);

    int multi = (*pbh) * (*pbl);
    printf("Resultado de la multiplicaion: %d\n", multi);

    *pdl = multi;
    printf("Nuevo valor BDL: %d\n", *pdl);

    int divi = (*pbh) / (*pbl);
    printf("Resultado de la division: %d\n", divi);

    *pdl = divi;
    printf("Nuevo valor BDL: %d\n", *pdl);
    printf("Ubicacion: BDL=%p\n", &*pdl);

    int su = *pbh + *pbl;
    printf("Resultado de la suma: %d\n", su);

    *pdl = su;
    printf("Nuevo valor CDL: %d\n", *pdl);

    int re = *pbh - *pbl;
    printf("Resultado de la resta: %d\n", re);

    *pdl = re;
    printf("Nuevo valor CDL: %d\n", *pdl);

    int mul = (*pbh) * (*pbl);
    printf("Resultado de la multiplicaion: %d\n", mul);

    *pdl = mul;
    printf("Nuevo valor CDL: %d\n", *pdl);

    int di = (*pch) / (*pcl);
    printf("Resultado de la division: %d\n", di);

    *pdl = di;
    printf("Nuevo valor CDL: %d\n", *pdl);
    printf("Ubicacion: CDL=%p\n", &*pdl);

    return 0;
}