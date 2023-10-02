#include <stdio.h>
void Age();
int main() {
    int postGradMarks;
    float age;
    int researchExperience;
    int hasDiplomaInStatistics;
    int entranceTestMarks;
    int hasResearchTopic;
    int hasMPhil;
    

    
    printf("Enter post-graduate marks (in percentage): ");
    scanf("%d", &postGradMarks);

    printf("Enter years of research experience: ");
    scanf("%d", &researchExperience);

    printf("Do you have a diploma in Statistics? (1 for Yes, 0 for No): ");
    scanf("%d", &hasDiplomaInStatistics);

    printf("Enter entrance test marks (in percentage): ");
    scanf("%d", &entranceTestMarks);

    printf("Have you finalized the research topic? (1 for Yes, 0 for No): ");
    scanf("%d", &hasResearchTopic);

    printf("Do you have an M.Phil degree? (1 for Yes, 0 for No): ");
    scanf("%d", &hasMPhil);

    age = Age();
   
    
        if( age >= 30 && postGradMarks >= 60 && (researchExperience>= 3 || hasMPhil) && hasDiplomaInStatistics == 1 &&
        entranceTestMarks >= 55 && hasResearchTopic == 1){

            printf("Congratulations you are the biggest chutiya  of this world")

        }
        else if(age>= 30 && postGradMarks >= 60 && (researchExperience>= 3 || hasMPhil) && 
         entranceTestMarks >= 55 && hasResearchTopic == 1 ){
            printf("You are being reffered to Dean of Academics");
         }
        else if(age >= 30 && (postGradMarks >= 55 && postGradMarks < 60) && (researchExperience>= 3 || hasMPhil) && hasDiplomaInStatistics == 1 &&
        entranceTestMarks >= 55 && hasResearchTopic == 1){
            printf("You are in the waitlist");
        }
        else if(age >= 30 && postGradMarks >= 60 && (researchExperience>= 3 || hasMPhil) && hasDiplomaInStatistics == 1 &&
        (entranceTestMarks >= 50 && entranceTestMarks < 55) && hasResearchTopic == 1){
            printf("You are being reffered to chairman");
        }
        
        
    }
    return 0;
}

int Age() {
    int by, bm, bd , cy, cm , cd, aged, agem, agey;
    printf("Enter current date");
    scanf("%d%d%d", &cd,&cm,&cy);
    printf("Enter your date of birth");
    scanf("%d%d%d", &bd,&bm,&by);

    if(cd < bd){
        if((cm == 1)|| (cm == 3) || (cm == 5) || (cm == 7) || (cm == 8) || (cm == 10) || (cm == 12)){
            cd += 31;
            --cm;
            if(cm < bm){
                cm += 12;
                --cy;
        }
        }
        else if((cm == 4) || (cm == 6) || (cm == 9) || (cm == 11)){
            cd += 30;
            --cm;
            if(cm < bm){
                cm += 12;
                --cy;
        }
           
        }
        else if((cm == 2) && (cy%4 == 0)){
            cd += 29;
            --cm;
            if(cm < bm){
                cm += 12;
                --cy;
        } 
        }
        else if((cm == 2) && (cy%4 != 0)){
            cd += 28;
            --cm;
            if(cm < bm){
             cm += 12;
             --cy;
        }
        }
        aged = cd - bd;
        agem = cm - bm;
        agey = cy - by;
    }
    else{
        if(cm < bm){
            cm += 12;
            --cy;
        }
        aged = cd - bd;
        agem = cm - bm;
        agey = cy - by;
    }
    // printf("Your age is %d years  %d months %d days ", agey, agem, aged);
    
    return ((float)agey + (float)agem/12 + (float)aged/365);
    
}