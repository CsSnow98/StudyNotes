#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float a,b,c,d,Media,y;
    cin >> a >> b >>c >>d;
    Media = 0.2*a+0.3*b+0.4*c+0.1*d;
    printf("Media: %.1f",Media);
    if (Media >= 7.0)
    {
        cout << "Aluno aprovado." <<endl;
    }
    else if (Media < 5.0)
    {
        cout << "Aluno reprovado." <<endl;
    }
    else
    {
        cout << "Aluno em exame." <<endl;
        cin >> y ;
        printf("Nota do exame: %.1f",y);
        Media = (Media+y)*0.5;
        if (Media>=5.0) cout << "Aluno aprovado." <<endl;
        else cout << "Aluno reprovado." <<endl;
        printf("Media final: %.1f",Media);
    }
    return 0;
}