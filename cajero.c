 #include <stdio.h>

int main(void) {

    int billete1 = 0;
    int billete5 = 5;
    int billete10 = 0;
    int billete20 = 0;
    int billete50 = 0;
    int billete100 = 0;
    int monto = 0;
    int retirada = 0;
    int dif = 0;
    
    dif = monto - retirada;
    printf("Ingresar monto a retirar: \n");
    scanf("%d",&monto);
    if(monto<20)
    {
        printf("error, monto invalido");
        return 1;
    }
    else if(monto>5000)
    {
        printf("error, monto muy grande");
        return 2;
    }
    else
    {
        printf("monto aceptado\n");
    }
    for(billete100=0; monto>=100 ; billete100++){
       monto=monto-100;
    }

    for(billete50=0; monto>=50 ; billete50++){
        monto=monto-50;
    }

    for(billete20=0; monto>=20 ; billete20++){
        monto=monto-20;
    }

    for(billete10=0; monto>=10 ; billete10++){
        monto=monto-10;
    }

     for(billete5=0; monto>=5 ; billete5++){
        monto=monto-5;
    }

    for(billete1=0; monto>=1 ; billete1++){
        monto=monto-1; 
    }
     
     printf("Billetes de 100= %d\n", billete100);
     printf("Billetes de 50= %d\n", billete50);
     printf("Billetes de 20= %d\n", billete20);
     printf("Billetes de 10= %d\n", billete10);
     printf("Billetes de 5= %d\n", billete5);
     printf("Billetes de 1= %d\n", billete1);

 return 0;
}
 
