#include <stdio.h>

float ap1, ap2, ap3, np_1, av1;
float ap1_2, ap2_2, ap3_2, np_2, av2;

// PROCESSOS DE CALCULO DE ATIVIDADES E PROVA DO PRIMEIRO TRIMESTRE 

float calculo_atividades_praticas_1(float ap1, float ap2, float ap3){
    return ((ap1 + ap2 + ap3) / 3) * 0.3; 
}

float calculo_nota_prova_1(float np_1){
    return np_1 * 0.7; 
}


float calculo_av1(float atividades_praticas_1, float nota_prova_1){
    return atividades_praticas_1 + nota_prova_1;
}

// PROCESSOS DE CALCLO DE ATIVIDADES E PROVA DO SEGUNDO SEMESTRE 

float calculo_atividades_praticas_2(float ap1_2, float ap2_2, float ap3_2){
    return ((ap1 + ap2 + ap3) / 3) * 0.3; 
}

float calculo_nota_prova_2(float np_2){
    return np_2 * 0.7; 
}


int main() {
    do {
        // CAPTURA E TRATAMENTO > AP1 
        printf("Valor da nota da Atividade Prática 1: \n");
        if(scanf("%f", &ap1) != 1){

            printf("Valor Inválido. Use apenas números. \n Neste seguinte formato: (6.0, 7.4, 9) \n ");
            printf("-----///-----///-----///-----");

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue; 
        }

        // CAPTURA E TRATAMENTO > AP2 
        printf("Digite a nota da Atividade Prática 2: \n");
        if(scanf("%f", &ap2) != 1){

            printf("Valor Inválido! Use apenas números. \n Neste seguinte formato (5.5, 4.3, 8, 8.6) \n");
            printf("-----///-----///-----///-----"); 

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        // CAPTURA E TRATAMENTO > AP3            
        printf("Digite a nota da Atividade Prática 3: \n"); 
        if(scanf("%f", &ap3) != 1){

            printf("Valor Inválido! Use apenas números. \n Neste seguinte formato (5.5, 4.3, 8, 8.6) \n");
            printf("-----///-----///-----///-----"); 

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        // CAPTURA E TRATAMENTO > AP3     
        printf("Digite a Nota da Prova: \n");
        if(scanf("%f", &np_1) != 1){

            printf("Valor Inválido! Use apenas números.\n Neste seguinte formato (5.4, 6.3, 7, 1.8)");
            printf("-----///-----///-----///-----");

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        
        }      

        break; // Sai do loop caso a entrada de todas variáveis sejam válidas. 
    }while(1);

    float atividades_praticas_1 = calculo_atividades_praticas_1(ap1, ap2, ap3); 
    float nota_prova_1 = calculo_nota_prova_1(np_1); 
    float nota_final_1 = calculo_av1(atividades_praticas_1, nota_prova_1);


    printf("Os Valores das Notas foram recebidos com sucesso! \n");
    
    printf("-----///-----///-----///----- \n");

    printf("Nota Aividade Prática 1: %.1f\n Nota Atividade Prática 2: %.1f\n Nota atividade Prática 3: %.1f\n Nota Prova: %.1f\n", ap1, ap2, ap3, np_1); 

    printf("Nota Final do Primeiro trimestre: %.1f \n", nota_final_1);



    printf("-----///-----///-----///----- NOTAS SEGUNDO TRIMESTRE  -----///-----///-----///----- \n");

    do{
        // CAPTURA E TRATAMENTO AP1 TRIMESTRE 2 
        printf("Digite a nota da Atividade Prática 1:  \n")
        if(scanf("%f", &ap1_2) != 1){

            printf("Valor Inválido. Use apenas números. \n Neste formato (5.4, 5)"); 
            printf("-----///-----///-----///-----");

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        printf("Digite a nota da Atividade Prática 1:  \n")
        if(scanf("%f", &ap1_2) != 1){

            printf("Valor Inválido. Use apenas números. \n Neste formato (5.4, 5)"); 
            printf("-----///-----///-----///-----");

            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
 
        break; 
    }while(1)

}
