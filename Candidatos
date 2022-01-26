#include <iostream>
using namespace std;

int diferenca(int vet[]){
    
    //diferença entre o primeiro e o ultimo
    int j=0, p=0;

    for (int i = 0; i < 4; i++)
    {
        if (vet[i]>j)
        {
            j=vet[i];
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (vet[i]<j)
        {
            p=vet[i];
        }
    
    }

    p=(j-p);

    return p;

}

int nulo(int vet[]){
    
    //porcentagem de votos nulos
    int y=0;

    y=(vet[5]*100)/10;

    return y;

}

int urna(int vet[]){
    
    //candidato com mais votos
    int j=0, k=0, count=0;
    
    for (int i = 0; i < 4; i++)
    {
        if (vet[i]>j)
        {
            j=vet[i];
            k=i;
        }
    
    }
    
    //verificar se algum candidato de verdade ganhou
    if (j==0)
    {
        cout<<"Houveram apenas votos nulos e brancos"<<endl;
        return 10;
    }
    
    
    //verificar se houve empate
    for (int r = 0; r < 4; r++)
    {
        if (vet[r]==j)
        {
            count++;
        }
    
    }
    if (count>1)
        {
            cout<<"Houve um empate"<<endl;
            return 10;
        }
    
    return k;
}

int main(){
    int vet[6], x=0, n;

    //dando valor para cada ponto no vetor
    for (int p = 0; p < 6; p++)
    {
        vet[p]=0;
    }
    
    //numero total de votos
    n=10;

    //candidatos
    for (int i = 0; i < n; i++)
    {
        cout<<"Deseja votar em"<<endl<<"1-Alberto"<<endl<<"2-Rogerio"<<endl<<"3-Geraldo"<<endl<<"4-Adilson"<<endl<<"5-Nulo"<<endl<<"6-Branco"<<endl;
        cin>>x;
        
        //salvar o numero de votos
        for (int j = 0; j < 6; j++)
        {
            if (x==j)
            {
                vet[j]++;
            }
        }
        system("cls");
        }
    
    //resultados
    if (urna(vet)!=10)
    {
        cout<<"O candidato com mais votos eh "<<urna(vet)<<endl;
    }

    cout<<"A porcentagem de votos nulos eh "<<nulo(vet)<<"%"<<endl;

    cout<<"A diferenca de votos entre o primeiro e o ultimo eh "<<diferenca(vet)<<endl;

    return 0;
}
