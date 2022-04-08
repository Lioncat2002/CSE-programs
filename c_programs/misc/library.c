#include "stdio.h"
#include "string.h"

struct Library{
  int acc_no;
  char title[200];
  char author[200];
  float price;
  int issued;
};

void sort_books(struct Library *a,struct Library *b){
    struct Library c=*a;
    *a=*b;
    *b=c;
}

void list_title(struct Library lib[500], int bookno){
    int accno;
    
    printf("Enter accession number: ");
    scanf("%d",&accno);
    getchar();//deal with the \n
    
    for (int i = 0; i < bookno; i++)
    {
        if (accno==lib[i].acc_no)
        {
                printf("%s\n",lib[i].title);
                break;
        }
                
                 
    }  
}

void show_books(struct Library lib[500], int bookno){
    char author[200];
    
    printf("Enter author name: ");
    fgets(author,200,stdin);
    
    author[strlen(author)-1]='\0';
    
    for (int i = 0; i < bookno; i++)
    {
                
        if (strcmp(author,lib[i].author)==0)
            {
                printf("%s\n",lib[i].title);
                
            }
                
                 
    }
}

void add_book(struct Library *lib,int *book_no){
    
    printf("Enter accession number: ");
    scanf("%d",&lib->acc_no);
    getchar();//dealing with \n

    printf("Enter title: ");
    fgets(lib->title,200,stdin);
    lib->title[strlen(lib->title)-1]='\0';//removing the trailing \n since fgets consumes \n too

    printf("Enter author name: ");
    fgets(lib->author,200,stdin);
    lib->author[strlen(lib->author)-1]='\0';//removing the trailing \n since fgets consumes \n too

    printf("Enter price: ");
    scanf("%f",&lib->price);
    getchar();//dealing with \n

    lib->issued=0;

    printf("Data added successfully!\n");
    *book_no=*book_no+1;
}

int main(){
    int opt,bookno=4;
    struct Library lib[500]={//adding some book data
                            {1,"Jim Corbett's hunts","Jim Corbett",200.45f,0},
                            {34,"Short Stories","Satyajit Ray",400.45f,1},
                            {2,"Broken Ear","Herge",700.f,1},
                            {56,"Blue Lotus","Herge",700.0f,0},
                            {78,"Feluda","Satyajit Ray",500.00f,0},   
                            };

    do
    {
        printf("\n\n1. for add book info\n2. for display book info\n3. for list of books of given author\n4. list specified title of the book\n5. list count of books\n6. list books in the order of accession number\n7. exit\n\n");
        scanf("%d",&opt);
        getchar();//need to put this to deal with those \n scanf leaves behind
        switch (opt)
        {
        case 1:
            add_book(&lib[bookno],&bookno);
            printf("Data: %d\n",bookno);
        break;
        
        case 2:
            printf("All the books: \n");
            for (int i = 0; i < bookno; i++)
            {
                 printf("%d %s %s %f %d \n",lib[i].acc_no,lib[i].title,lib[i].author,lib[i].price,lib[i].issued);
            }
        break;

        case 3:
            printf("Books according to author name: \n");
            show_books(lib,bookno);
        break;

        case 4:
        printf("Title of a specified book:\n");
        list_title(lib,bookno);
        break;

        case 5:
        printf("Total number of books: %d\n",bookno);
        break;

        case 6:
        printf("Books in order of the accession number:\n");
        for (int i = 0; i < bookno-1; i++)
        {
            if (lib[i].acc_no>lib[i+1].acc_no)
            {
                sort_books(&lib[i],&lib[i+1]);
                i=-1;
            }
        }
        for (int i = 0; i < bookno; i++)
        {
            printf("%d %s %s %f %d \n",lib[i].acc_no,lib[i].title,lib[i].author,lib[i].price,lib[i].issued);
        }
        break;
        case 7:
        //prevent deafault block from getting activated at 7
        break;
        default:
        printf("Invalid input!\n");
         break;
     }
    } while (opt!=7);

}