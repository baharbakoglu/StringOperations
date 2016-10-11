
char * mystrcat(char * dest, const char * src)
{
    int i=0, j=0, k;

    while(src[i]!='\0')

        i++; //src'nin null'a esit oldugu deger bulunur//

    while(dest[j]!='\0')

        j++; //dest'in null'a esit oldugu degeri buluruz//

    for(k=0;k<=i;k++)

        dest[j]=src[k]; //dest'e null karakterinden baslayarak src'yi ekleriz//

        j++;

 return dest;

}

char * mysubstr(char * str, int start, int length)
{
    int i;
    char * string;

    for(i=0;i<length;i++)

        string[i]=str[start-1]; //start ile alinan sayinin str'deki yerinden baslayarak length ile alinan sayi kadar alinarak yeni bir string'e aktarilir.//

        start++;

return string;
}

char * myremstr(char * str, char * pattern)
{
   int i, j, k;

   for(j=0;;j++)

        while(str[j]!='\0')

            for(i=0;;i++)

                while(pattern[i]!='\0')


                    if(str[j]==pattern[i])

                        str[k]=str[j];

                        while(str[k]!='\0')

                            str[k]=str[k+1]; //pattern ile alinan pointer'in degerlerini str'den silerek str'nin o anki degerini bi sonrakine esitledik//

                            k++;

return str;
}

char * mystrchr(char * from, char c)
{
    int i,j;

    while(from[i]!='\0')

        for(i=0;;i++)

            if(from[i]=='c') // c'nin string'de bulundugu yer tespit edildi//

            break;

    while(from[j]!='\0')

        for(j=0;;j++)

            from[j]=from[i]; //c'nin buldugumuz yeri from'da ilk deðere atanip geri kalani yazdirildi//

            i++;

return from;
}

int mystrcmp(const char * str1, const char * str2)
{

    int result, i=0, j=0;

    while(str1[i]!='\0')        //str1'in boyutu hesaplanir//

        i++;

    while(str2[j]!='\0')        //str2'nin boyu hesaplanir//

        j++;

    if(i==j)

        result=0;

        else if(i>j)                      //i'nin j'ye göre durumuna bakilarak sonuçlar döndürülür//

                result=1;

                else if(i<j)

                        result=-1;



return result;
}

char * mystrcpy(char * toHere, const char * fromHere)
{

    int i=0, j=0,k;

    while(toHere[i]!='\0')

        i++;

    while(fromHere[j]!='\0')

        j++;

    toHere[i+1]='0'; //ilk string'in içini bosaltip hepsi 0'a esitlendi//

    for(k=0;k<=j;k++)

        toHere[k]=fromHere[k]; //her bir deger için ilk string ikinci string'e esitlendi//

return toHere;

}

int mystrlen(const char * str)
{

    int i=0;

    while(str[i]!='\0') //string'in null'a esit oldugu deger bulunarak string'in uzunlugu saptandi//

        i++;

    return i;

}

char * mystrstr(const char * from, const char * what)
{

    int i=0, j=0,k;

    char * string;

    while(what[i]!='\0')

        i++;

    while(from[j]!='\0')

        if(from[j]==what[0]){

            for(k=0;k<i;k++)

                if(from[j]==what[k])

                    j++;

                    string[k]=from[j]; //ikinci alinan string'in ilk string'de yeri bulunup bu yer baska bir string'e yazildi//
        }

        else
            j++;


return string;
}
